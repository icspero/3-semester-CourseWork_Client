#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "adminwindow.h"
#include <QMessageBox>

login::login(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
    , connection(connection)
{
    ui->setupUi(this);
    ui->passwordEdit->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}

void login::on_loginButton_clicked()
{
    QString login = ui->loginEdit->text();
    QString password = ui->passwordEdit->text();

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
        else if (result == "Вход пользователя\n") {
            QMessageBox::about(this, "Вход", "Вы Посетитель!");
            this->close();
        }
        else {
            QMessageBox::information(this, "Результат", result);
        }
    }
    catch (const std::runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}
