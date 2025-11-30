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
        if (login.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "Внимание", "Пожалуйста, заполните все поля!");
            return;
        }

        QString message = QString("register|%1|%2").arg(login).arg(password);
        connection->sendMessage(message.toStdString());

        QString result = QString::fromStdString(connection->acceptMessage());
        QMessageBox::information(this, "Результат", result);
        this->close();
        registerwindow::on_pushButton_2_clicked();
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
