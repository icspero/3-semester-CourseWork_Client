#include "deletetaskwindow.h"
#include "ui_deletetaskwindow.h"
#include <QMessageBox>
#include <QtWidgets>
#include "adminwindow.h"

deletetaskwindow::deletetaskwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::deletetaskwindow)
    , connection(connection)
{
    ui->setupUi(this);
    loadTopics();
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
}

deletetaskwindow::~deletetaskwindow()
{
    delete ui;
}

void deletetaskwindow::on_pushButton_clicked()
{
    try {
        QString selectedTopic = ui->comboBox->currentText();
        if (selectedTopic.isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Вы не выбрали тему!");
            return;
        }

        QString selectedTask = ui->comboBox_2->currentText();
        int selectedIndex = ui->comboBox_2->currentIndex();

        if (selectedTask.isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Вы не выбрали задание!");
            return;
        }
        if (selectedTask != ("Для темы '" + selectedTopic + "' заданий нет!")) {
            if (selectedTask != "Отсутствуют темы") {
                QMessageBox::StandardButton reply;
                reply = QMessageBox::question(this, "Удаление задания", "Вы уверены, что хотите удалить задание?", QMessageBox::Yes | QMessageBox::No);

                if (reply == QMessageBox::Yes) {
                    QString numberStr = selectedTask.section(']', 0, 0).remove('[');
                    QString message = "deletetask|" + numberStr;

                    connection->sendMessage(message.toStdString());

                    QString serverResponse = QString::fromStdString(connection->acceptMessage());

                    QMessageBox::information(this, "Ответ сервера", serverResponse);

                    ui->comboBox_2->removeItem(selectedIndex);
                }
            }
        }
    } catch (const runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

void deletetaskwindow::on_pushButton_2_clicked()
{
    this->close();
    adminwindow window(connection);
    window.setModal(true);
    window.exec();
}

void deletetaskwindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &topic : topics) {
        ui->comboBox->addItem(topic);
    }
}

void deletetaskwindow::loadTasks(QString topic) {
    QString message = "get_tasks|" + topic;

    connection->sendMessage(message.toStdString());

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox_2->clear();

    QStringList tasks = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &task : tasks) {
        ui->comboBox_2->addItem(task);
    }
}

void deletetaskwindow::on_comboBox_currentTextChanged(const QString &topic)
{
    if (!topic.isEmpty()) {
        loadTasks(topic);
    }
}

