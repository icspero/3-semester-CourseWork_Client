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
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
    qApp->setStyleSheet("QMessageBox QLabel { color: black; }" "QMessageBox QPushButton { color: black; }");

    loadTopics();
}

addtopicwindow::~addtopicwindow()
{
    delete ui;
}

void addtopicwindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &topic : topics) {
        ui->comboBox->addItem(topic);
    }
}

void addtopicwindow::on_pushButton_clicked()
{
    try {
        QString cipher = ui->textEdit->toPlainText();
        QString description = ui->descEdit->toPlainText();
        QString theory = ui->theoryEdit->toPlainText();
        if (cipher.isEmpty() || description.isEmpty() || theory.isEmpty()) {
            QMessageBox::warning(this, "Внимание", "Пожалуйста, заполните все поля!");
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

void addtopicwindow::on_pushButton_3_clicked()
{
    try {
        QString selectedTopic = ui->comboBox->currentText();

        ui->textEdit->setText(selectedTopic);

        QString message = "get_topic_description|" + selectedTopic;
        connection->sendMessage(message.toStdString());

        QString serverResponse = QString::fromStdString(connection->acceptMessage());

        ui->descEdit->setText(serverResponse);

        QString message2 = "get_topic_theory|" + selectedTopic;
        connection->sendMessage(message2.toStdString());

        QString serverResponse2 = QString::fromStdString(connection->acceptMessage());

        ui->theoryEdit->setText(serverResponse2);

        if (selectedTopic.isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Вы не выбрали тему!");
            return;
        }
    } catch (const runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

