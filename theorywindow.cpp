#include "theorywindow.h"
#include "ui_theorywindow.h"
#include "userwindow.h"
#include <QMessageBox>

theorywindow::theorywindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::theorywindow)
    , connection(connection)
{
    ui->setupUi(this);
    loadTopics();
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
}

theorywindow::~theorywindow()
{
    delete ui;
}

void theorywindow::on_pushButton_clicked()
{
    this->close();
    userwindow window(connection);
    window.setModal(true);
    window.exec();
}


void theorywindow::on_pushButton_2_clicked()
{
    try {
        QString selectedTopic = ui->comboBox->currentText();

        QString message = "get_topic_description|" + selectedTopic;
        connection->sendMessage(message.toStdString());

        QString serverResponse = QString::fromStdString(connection->acceptMessage());

        ui->textEdit->setText(serverResponse);

        QString message2 = "get_topic_theory|" + selectedTopic;
        connection->sendMessage(message2.toStdString());

        QString serverResponse2 = QString::fromStdString(connection->acceptMessage());

        ui->textEdit_2->setText(serverResponse2);

        if (selectedTopic.isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Вы не выбрали тему!");
            return;
        }
    } catch (const runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

void theorywindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &topic : topics) {
        ui->comboBox->addItem(topic);
    }
}

