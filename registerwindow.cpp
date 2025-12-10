#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "loginwindow.h"
#include <QMessageBox>

registerwindow::registerwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerwindow)
    , connection(connection)
{
    ui->setupUi(this);
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
    qApp->setStyleSheet("QMessageBox QLabel { color: black; }" "QMessageBox QPushButton { color: black; }");
}

registerwindow::~registerwindow()
{
    delete ui;
}

void registerwindow::on_pushButton_clicked()
{
    try {
        QString login = ui->lineEdit->text();
        QString password = ui->lineEdit_2->text();
        QString passwordRepeat = ui->lineEdit_3->text();

        // Проверка пустых полей
        if (login.isEmpty() || password.isEmpty() || passwordRepeat.isEmpty()) {
            QMessageBox::warning(this, "Внимание", "Пожалуйста, заполните все поля!");
            return;
        }

        // Проверка длины пароля
        if (password.length() < 8) {
            QMessageBox::warning(this, "Ошибка пароля", "Пароль должен содержать не менее 8 символов!");
            return;
        }

        // Проверка наличия цифры
        bool hasDigit = false;
        for (const QChar &ch : password) {
            if (ch.isDigit()) {
                hasDigit = true;
                break;
            }
        }
        if (!hasDigit) {
            QMessageBox::warning(this, "Ошибка пароля", "Пароль должен содержать хотя бы одну цифру!");
            return;
        }

        if (password != passwordRepeat) {
            QMessageBox::warning(this, "Ошибка пароля", "Пароли не совпадают!");
            return;
        }

        QString message = QString("register|%1|%2").arg(login).arg(password);
        connection->sendMessage(message.toStdString());

        QString result = QString::fromStdString(connection->acceptMessage());
        QMessageBox::information(this, "Результат", result);

        if (result.contains("существует!")) {} else {
            this->close();
            registerwindow::on_pushButton_2_clicked();
        }
    }
    catch (const runtime_error& error)
    {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

void registerwindow::on_pushButton_2_clicked()
{
    this->close();
    login window(connection);
    window.setModal(true);
    window.exec();
}
