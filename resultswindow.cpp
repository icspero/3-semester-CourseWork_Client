#include "resultswindow.h"
#include "ui_resultswindow.h"
#include "userwindow.h"
#include <QMessageBox>
#include <QFileDialog>

resultswindow::resultswindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::resultswindow)
    , connection(connection)
{
    ui->setupUi(this);
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
    loadTopics();

    ui->tableWidget->setColumnCount(7);
    QStringList headers = {"Выбрать", "Тема", "Задание", "Правильный ответ", "Ваш ответ", "Статус", "resultId"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Скрываем колонку с resultId
    ui->tableWidget->setColumnHidden(6, true);

    loadResults(); // сразу загружаем данные
    qApp->setStyleSheet("QMessageBox QLabel { color: black; }" "QMessageBox QPushButton { color: black; }");
}

resultswindow::~resultswindow()
{
    delete ui;
}

void resultswindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    if (!topics.contains("Темы не найдены")) {
        ui->comboBox->addItem("Все темы");
    }

    for (const QString &topic : topics) {
        ui->comboBox->addItem(topic);
    }
}

void resultswindow::loadResults(const QString &topic_filter) {
    try {
        QString message = "get_user_results|" + QString::number(connection->userId);
        if (!topic_filter.isEmpty() && topic_filter != "Все темы") {
            message += "|" + topic_filter;
        }
        connection->sendMessage(message.toStdString());
        QString serverResponse = QString::fromStdString(connection->acceptMessage());

        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        if (serverResponse.startsWith("error|")) {
            //QMessageBox::information(this, "Результаты", serverResponse.section('|', 1));
            return;
        }

        QStringList rows = serverResponse.split("\n", Qt::SkipEmptyParts);
        ui->tableWidget->setRowCount(rows.size());

        for (int i = 0; i < rows.size(); ++i) {
            QStringList columns = rows[i].split("|");
            if (columns.size() != 6) continue;

            // 0 колонка чекбокс
            QTableWidgetItem *checkItem = new QTableWidgetItem();
            checkItem->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
            checkItem->setCheckState(Qt::Unchecked);
            ui->tableWidget->setItem(i, 0, checkItem);

            // Остальные колонки
            for (int j = 0; j < 5; ++j) {
                QTableWidgetItem *item = new QTableWidgetItem(columns[j]);

                if (j == 4) { // статус
                    if (columns[4] == "TRUE") {
                        item->setText("+");
                        item->setTextAlignment(Qt::AlignCenter);
                    } else {
                        item->setText("-");
                        item->setTextAlignment(Qt::AlignCenter);
                    }
                }

                ui->tableWidget->setItem(i, j + 1, item); // сдвиг на +1
            }

            // Колонка resultId скрыта, индекс 6
            ui->tableWidget->setItem(i, 6, new QTableWidgetItem(columns[5]));
        }

    } catch (const std::runtime_error &e) {
        QMessageBox::critical(this, "Ошибка", e.what());
    }
}

void resultswindow::on_pushButton_clicked()
{
    this->close();
    userwindow window(connection);
    window.setModal(true);
    window.exec();
}


void resultswindow::on_pushButton_2_clicked()
{
    QString topic = ui->comboBox->currentText();
    loadResults(topic);
}


void resultswindow::on_pushButton_3_clicked()
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
    for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
        headers << ui->tableWidget->horizontalHeaderItem(col)->text();
    }
    out << headers.join(",") << "\n";

    // Данные таблицы
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QStringList rowData;
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
            QTableWidgetItem *item = ui->tableWidget->item(row, col);
            rowData << (item ? item->text() : "");
        }
        out << rowData.join(",") << "\n";
    }

    file.close();
    QMessageBox::information(this, "Сохранение", "Результаты успешно сохранены!");
}


void resultswindow::on_pushButton_4_clicked()
{
    QStringList resultIds;

    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QTableWidgetItem *checkItem = ui->tableWidget->item(row, 0);
        if (checkItem && checkItem->checkState() == Qt::Checked) {
            QTableWidgetItem *idItem = ui->tableWidget->item(row, 6); // колонка resultId
            if (idItem) {
                resultIds << idItem->text();
            }
        }
    }

    if (resultIds.isEmpty()) {
        QMessageBox::warning(this, "Удаление", "Вы не выбрали ни одного результата!");
        return;
    }

    if (QMessageBox::question(this, "Удаление", "Вы действительно хотите удалить выбранные результаты?") != QMessageBox::Yes)
        return;

    QString msg = QString("delete_results|%1").arg(resultIds.join(","));
    connection->sendMessage(msg.toStdString());
    QString response = QString::fromStdString(connection->acceptMessage());

    if (response.startsWith("ok")) {
        for (int row = ui->tableWidget->rowCount() - 1; row >= 0; --row) {
            QTableWidgetItem *checkItem = ui->tableWidget->item(row, 0);
            if (checkItem && checkItem->checkState() == Qt::Checked) {
                ui->tableWidget->removeRow(row);
            }
        }
        QMessageBox::information(this, "Удаление", "Выбранные результаты удалены!");
    } else {
        QMessageBox::critical(this, "Ошибка", response);
    }
}

