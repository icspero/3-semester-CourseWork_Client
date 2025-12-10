#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "adminwindow.h"
#include <QMessageBox>
#include "registerwindow.h"
#include "userwindow.h"

login::login(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
    , connection(connection)
{
    ui->setupUi(this);
    ui->passwordEdit->setEchoMode(QLineEdit::Password);
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
    qApp->setStyleSheet("QMessageBox QLabel { color: black; }" "QMessageBox QPushButton { color: black; }");
}

login::~login()
{
    delete ui;
}

void login::on_loginButton_clicked()
{
    QString login = ui->loginEdit->text();
    QString password = ui->passwordEdit->text();

    connection->sendMessage("get_user_id|" + login.toStdString());
    QString resp = QString::fromStdString(connection->acceptMessage());
    if (resp.startsWith("ok|")) {
        int uid = resp.split("|")[1].toInt();
        connection->userId = uid;
    } else {
        //QMessageBox::warning(this, "Ошибка", "Не удалось получить user_id!");
    }

    if (login.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Внимание", "Пожалуйста, заполните все поля!");
        return;
    }

    try {
        QString message = QString("auth|%1|%2").arg(login).arg(password);
        connection->sendMessage(message.toStdString());

        QString result = QString::fromStdString(connection->acceptMessage());
        if (result == "Вход под ролью: Администратор!\n") {
            this->close();
            adminwindow window(connection);
            window.setModal(true);
            window.exec();
        }
        else if (result == "Вход под ролью: Посетитель!\n") {
            this->close();
            userwindow window(connection);
            window.setModal(true);
            window.exec();
        }
        else {
            QMessageBox::information(this, "Результат", result);
        }
    }
    catch (const std::runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

void login::on_pushButton_clicked()
{
    this->close();
    registerwindow window(connection);
    window.setModal(true);
    window.exec();
}


void login::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton exitButton = QMessageBox::question(this, "Выход", "Вы уверены, что хотите закрыть программу?", QMessageBox::Yes | QMessageBox::No);
    if(exitButton == QMessageBox::Yes){
        QApplication::quit();
    }
}

