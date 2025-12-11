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

    ui->tableWidget->setColumnCount(2);
    QStringList headers = {"Пользователь", "Роль"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    loadRolesUsers(); // загружаем данные сразу
    loadRoles();
    qApp->setStyleSheet("QMessageBox QLabel { color: black; }" "QMessageBox QPushButton { color: black; }");
}

user_rolewindow::~user_rolewindow()
{
    delete ui;
}

void user_rolewindow::loadRoles() {
    ui->comboBox->clear();
    ui->comboBox->addItem("Все роли");

    try {
        connection->sendMessage("get_roles");
        QString result = QString::fromStdString(connection->acceptMessage());
        QStringList roles = result.split("\n", Qt::SkipEmptyParts);
        for (const QString &role : roles) {
            ui->comboBox->addItem(role);
        }
    } catch (const runtime_error &e) {
        QMessageBox::warning(this, "Ошибка", "Не удалось загрузить роли: " + QString(e.what()));
    }
}

void user_rolewindow::loadRolesUsers(const QString &roleFilter)
{
    try {
        QString message = "roles_users";
        if (!roleFilter.isEmpty()) {
            message += "|" + roleFilter;
        }
        connection->sendMessage(message.toStdString());

        QString result = QString::fromStdString(connection->acceptMessage());
        populateTable(result);

    } catch (const runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}

void user_rolewindow::populateTable(const QString &data)
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    QStringList rows = data.split("\n", Qt::SkipEmptyParts);
    ui->tableWidget->setRowCount(rows.size());

    for (int i = 0; i < rows.size(); ++i) {
        QStringList columns = rows[i].split("|");
        if (columns.size() != 2) continue;

        for (int j = 0; j < 2; ++j) {
            QTableWidgetItem *item = new QTableWidgetItem(columns[j]);
            ui->tableWidget->setItem(i, j, item);
        }
    }

    ui->tableWidget->resizeColumnsToContents();
}

void user_rolewindow::on_pushButton_2_clicked()
{
    QString filePath = QFileDialog::getSaveFileName(
        this,
        "Сохранить файл",
        "",
        "CSV файлы (*.csv);;Все файлы (*.*)"
        );

    if (filePath.isEmpty()) return;

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл для записи!");
        return;
    }

    QTextStream out(&file);

    // Заголовки
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
    QMessageBox::information(this, "Успех", "Таблица успешно сохранена!");
}

void user_rolewindow::on_pushButton_3_clicked()
{
    this->close();
    adminwindow window(connection);
    window.setModal(true);
    window.exec();
}

void user_rolewindow::on_pushButton_clicked()
{
    QString role = ui->comboBox->currentText();
    QString filter = (role == "Все роли") ? QString() : role;
    loadRolesUsers(filter);
}

