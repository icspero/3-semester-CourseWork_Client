#include "resultsadminwindow.h"
#include "ui_resultsadminwindow.h"
#include "adminwindow.h"
#include <QMessageBox>
#include <QFileDialog>

resultsadminwindow::resultsadminwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::resultsadminwindow)
    , connection(connection)
{
    ui->setupUi(this);
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
    loadTopics();
    loadUsers();

    ui->tableWidget_2->setColumnCount(5);
    QStringList headers = {"Тема", "Задание", "Правильный ответ", "Ваш ответ", "Статус"};
    ui->tableWidget_2->setHorizontalHeaderLabels(headers);
    ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);

    loadResults();
}

void resultsadminwindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox_2->clear();

    ui->comboBox_2->addItem("Все темы");

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &topic : topics) {
        ui->comboBox_2->addItem(topic);
    }
}

void resultsadminwindow::loadUsers() {
    connection->sendMessage("get_users");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox_3->clear();

    QStringList users = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &user : users) {
        ui->comboBox_3->addItem(user);
    }
}

void resultsadminwindow::loadResults(const QString &topic_filter) {
    try {
        QString message = QString("get_user_results_for_admin|%1").arg(ui->comboBox_3->currentText());
        if (!topic_filter.isEmpty() && topic_filter != "Все темы") {
            message += "|" + topic_filter; // передаем фильтр на сервер
        }
        connection->sendMessage(message.toStdString());
        QString serverResponse = QString::fromStdString(connection->acceptMessage());

        ui->tableWidget_2->clearContents();
        ui->tableWidget_2->setRowCount(0);

        if (serverResponse.startsWith("error|")) {
            //QMessageBox::information(this, "Результаты", serverResponse.section('|', 1));
            return;
        }

        QStringList rows = serverResponse.split("\n", Qt::SkipEmptyParts);
        ui->tableWidget_2->setRowCount(rows.size());

        for (int i = 0; i < rows.size(); ++i) {
            QStringList columns = rows[i].split("|");
            if (columns.size() != 5) continue;

            for (int j = 0; j < 5; ++j) {
                QTableWidgetItem *item = new QTableWidgetItem(columns[j]);
                if (j == 4) {
                    if (columns[4] == "TRUE") {
                        item->setText("+");
                        item->setTextAlignment(Qt::AlignCenter);
                    } else {
                        item->setText("-");
                        item->setTextAlignment(Qt::AlignCenter);
                    }
                }
                ui->tableWidget_2->setItem(i, j, item);
            }
        }

        ui->tableWidget_2->resizeColumnsToContents();

    } catch (const std::runtime_error &e) {
        QMessageBox::critical(this, "Ошибка", e.what());
    }
}


resultsadminwindow::~resultsadminwindow()
{
    delete ui;
}

void resultsadminwindow::on_pushButton_5_clicked()
{
    this->close();
    adminwindow window(connection);
    window.setModal(true);
    window.exec();
}


void resultsadminwindow::on_pushButton_4_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить результаты", "", "CSV files (*.csv);;All Files (*)");

    if (fileName.isEmpty())
        return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Ошибка", "Не удалось открыть файл для записи!");
        return;
    }

    QTextStream out(&file);

    // Сначала заголовки
    QStringList headers;
    for (int col = 0; col < ui->tableWidget_2->columnCount(); ++col) {
        headers << ui->tableWidget_2->horizontalHeaderItem(col)->text();
    }
    out << headers.join(",") << "\n";

    // Данные таблицы
    for (int row = 0; row < ui->tableWidget_2->rowCount(); ++row) {
        QStringList rowData;
        for (int col = 0; col < ui->tableWidget_2->columnCount(); ++col) {
            QTableWidgetItem *item = ui->tableWidget_2->item(row, col);
            rowData << (item ? item->text() : "");
        }
        out << rowData.join(",") << "\n";
    }

    file.close();
    QMessageBox::information(this, "Сохранение", "Результаты успешно сохранены!");
}


void resultsadminwindow::on_pushButton_6_clicked()
{
    QString topic = ui->comboBox_2->currentText();
    loadResults(topic);
}

