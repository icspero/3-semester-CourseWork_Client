#include "user_rolewindow.h"
#include "ui_user_rolewindow.h"
#include "adminwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

user_rolewindow::user_rolewindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user_rolewindow)
    , connection(connection)
{
    ui->setupUi(this);
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
}

user_rolewindow::~user_rolewindow()
{
    delete ui;
}

void user_rolewindow::on_pushButton_clicked()
{
    try {
        QString message = "roles_users";
        connection->sendMessage(message.toStdString());

        QString result = QString::fromStdString(connection->acceptMessage());
        QMessageBox::information(this, "Результат", result);
    }
    catch (const runtime_error& error)
    {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

void user_rolewindow::on_pushButton_2_clicked()
{
    try {
        QString filePath = QFileDialog::getSaveFileName(
            this,
            "Сохранить файл",
            "",
            "Текстовые файлы (*.txt);;Все файлы (*.*)"
            );

        // Если пользователь отменил
        if (filePath.isEmpty()) {
            return;
        }

        QString message = "roles_users";
        connection->sendMessage(message.toStdString());

        QString result = QString::fromStdString(connection->acceptMessage());

        // Сохраняем в файл
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << result;
            QMessageBox::information(this, "Успех", "Результат записан в файл!");
        } else {
            QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл!");
        }
    }
    catch (const runtime_error& error)
    {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

void user_rolewindow::on_pushButton_3_clicked()
{
    this->close();
    adminwindow window(connection);
    window.setModal(true);
    window.exec();
}
