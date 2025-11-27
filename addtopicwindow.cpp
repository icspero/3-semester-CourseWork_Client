#include "addtopicwindow.h"
#include "ui_addtopicwindow.h"
#include "adminwindow.h"
#include <QMessageBox>

addtopicwindow::addtopicwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addtopicwindow)
    , connection(connection)
{
    ui->setupUi(this);
}

addtopicwindow::~addtopicwindow()
{
    delete ui;
}

void addtopicwindow::on_pushButton_clicked()
{
    try {
        QString cipher = ui->cipherEdit->text();
        QString description = ui->descEdit->toPlainText();
        QString theory = ui->theoryEdit->toPlainText();
        if (cipher.isEmpty() || description.isEmpty() || theory.isEmpty()) {
            QMessageBox::warning(this, "Внимание", "Пожалуйста, заполните все поля.");
            return;
        }

        // Объединяем данные в одно сообщение с разделителем
        QString message = QString("addtopic|%1|%2|%3").arg(cipher).arg(description).arg(theory);
        connection->sendMessage(message.toStdString()); // Отправляем объединенное сообщение

        QString result = QString::fromStdString(connection->acceptMessage()); // Принимаем ответ от сервера
        QMessageBox::information(this, "Результат", result); // Выводим ответ сервера
    }
    catch (const runtime_error& error)
    {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}


void addtopicwindow::on_pushButton_2_clicked()
{
    this->close();
    adminwindow window(connection);
    window.setModal(true);
    window.exec();
}

