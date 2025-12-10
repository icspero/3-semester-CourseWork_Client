#include "addtaskwindow.h"
#include "ui_addtaskwindow.h"
#include "adminwindow.h"
#include <QMessageBox>

addtaskwindow::addtaskwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addtaskwindow)
    , connection(connection)
{
    ui->setupUi(this);
    loadTopics();
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
    qApp->setStyleSheet("QMessageBox QLabel { color: black; }" "QMessageBox QPushButton { color: black; }");

}

addtaskwindow::~addtaskwindow()
{
    delete ui;
}

void addtaskwindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &topic : topics) {
        ui->comboBox->addItem(topic);
    }
}

void addtaskwindow::on_pushButton_clicked()
{
    QString selectedTopic = ui->comboBox->currentText();

    if (selectedTopic.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Вы не выбрали тему!");
        return;
    }

    if (selectedTopic == "Темы не найдены!") {
        QMessageBox::information(this, "Отсутствуют темы", "Пожалуйста, добавьте тему!");
    } else {
        try {
            QString task = ui->textEdit->toPlainText();
            QString answer = ui->textEdit_2->toPlainText();
            if (task.isEmpty() || answer.isEmpty()) {
                QMessageBox::warning(this, "Внимание", "Пожалуйста, заполните все поля!");
                return;
            }

            // Объединяем данные в одно сообщение с разделителем
            QString message = QString("addtask|%1|%2|%3").arg(selectedTopic).arg(task).arg(answer);
            connection->sendMessage(message.toStdString()); // Отправляем объединенное сообщение

            QString result = QString::fromStdString(connection->acceptMessage()); // Принимаем ответ от сервера
            QMessageBox::information(this, "Результат", result); // Выводим ответ сервера
        }
        catch (const runtime_error& error)
        {
            QMessageBox::critical(this, "Ошибка", error.what());
        }
    }
}


void addtaskwindow::on_pushButton_2_clicked()
{
    this->close();
    adminwindow window(connection);
    window.setModal(true);
    window.exec();
}

