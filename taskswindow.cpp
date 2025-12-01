#include "taskswindow.h"
#include "ui_taskswindow.h"
#include "userwindow.h"
#include <QMessageBox>

taskswindow::taskswindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::taskswindow)
    , connection(connection)
{
    ui->setupUi(this);
    loadTopics();
}

taskswindow::~taskswindow()
{
    delete ui;
}

void taskswindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &topic : topics) {
        ui->comboBox->addItem(topic);
    }
}

void taskswindow::on_pushButton_clicked()
{
    try {
        QString selectedTopic = ui->comboBox->currentText();

        if (selectedTopic.isEmpty() || selectedTopic == "Выберите тему") {
            QMessageBox::warning(this, "Ошибка", "Вы не выбрали тему!");
            return;
        }

        connection->sendMessage(("get_tasks|" + selectedTopic).toStdString());

        QString serverResponse = QString::fromStdString(connection->acceptMessage());

        // Разбиваем текст на отдельные задания
        tasks = serverResponse.split("\n", Qt::SkipEmptyParts);
        currentTaskIndex = 0;

        // Показываем первое задание
        if (!tasks.isEmpty()) {
            ui->textEdit->setText(tasks[currentTaskIndex]);
            ui->lineEdit->clear();
        } else {
            ui->textEdit->clear();
            QMessageBox::information(this, "Информация", "Задания для этой темы отсутствуют!");
        }

    } catch (const runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}


void taskswindow::on_pushButton_3_clicked()
{
    if (currentTaskIndex + 1 < tasks.size()) {
        currentTaskIndex++;
        ui->textEdit->setText(tasks[currentTaskIndex]);
        ui->lineEdit->clear();
    }
}


void taskswindow::on_pushButton_2_clicked()
{
    if (currentTaskIndex > 0) {
        currentTaskIndex--;
        ui->textEdit->setText(tasks[currentTaskIndex]);
        ui->lineEdit->clear();
    }
}

void taskswindow::on_pushButton_6_clicked()
{
    this->close();
    userwindow window(connection);
    window.setModal(true);
    window.exec();
}


void taskswindow::on_pushButton_4_clicked()
{
    /*
    if (tasks.isEmpty()) return;

    QString answer = ui->lineEdit->text();
    QString taskId = QString::number(currentTaskIndex); // можно использовать индекс как ID
    connection->sendMessage("submit_answer|" + taskId + "|" + answer);

    QString serverResponse = QString::fromStdString(connection->acceptMessage());
    QMessageBox::information(this, "Результат", serverResponse);
    */
}

