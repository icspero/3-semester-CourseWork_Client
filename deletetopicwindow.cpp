#include "deletetopicwindow.h"
#include "adminwindow.h"
#include "ui_deletetopicwindow.h"
#include <QMessageBox>

deletetopicwindow::deletetopicwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::deletetopicwindow)
    , connection(connection)
{
    ui->setupUi(this);
    loadTopics();
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
    qApp->setStyleSheet("QMessageBox QLabel { color: black; }" "QMessageBox QPushButton { color: black; }");
}

deletetopicwindow::~deletetopicwindow()
{
    delete ui;
}

void deletetopicwindow::on_pushButton_clicked()
{
    try {
        QString selectedTopic = ui->comboBox->currentText();

        if (selectedTopic.isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Вы не выбрали тему!");
            return;
        }
        if (selectedTopic != "Темы не найдены") {
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "Удалить тему", "Вы уверены, что хотите удалить тему?", QMessageBox::Yes | QMessageBox::No);

            if (reply == QMessageBox::Yes) {
                QString message = "deletetopic|" + selectedTopic;

                connection->sendMessage(message.toStdString());

                QString serverResponse = QString::fromStdString(connection->acceptMessage());

                QMessageBox::information(this, "Ответ сервера", serverResponse);

                int index = ui->comboBox->currentIndex();
                ui->comboBox->removeItem(index);
            } else {

            }
        }
    } catch (const runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

void deletetopicwindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &topic : topics) {
        ui->comboBox->addItem(topic);
    }
}

void deletetopicwindow::on_pushButton_2_clicked()
{
    this->close();
    adminwindow window(connection);
    window.setModal(true);
    window.exec();
}

