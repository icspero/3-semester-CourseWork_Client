#include "changerolewindow.h"
#include "ui_changerolewindow.h"
#include "adminwindow.h"
#include <QMessageBox>

changerole::changerole(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changerole)
    , connection(connection)
{
    ui->setupUi(this);
    loadRoles();
    loadUsers();
}

changerole::~changerole()
{
    delete ui;
}

void changerole::loadRoles() {
    connection->sendMessage("get_roles");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox_2->clear();

    QStringList roles = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &role : roles) {
        ui->comboBox_2->addItem(role);
    }
}

void changerole::loadUsers() {
    connection->sendMessage("get_users");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList users = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &user : users) {
        ui->comboBox->addItem(user);
    }
}

void changerole::on_pushButton_clicked()
{
    QString User = ui->comboBox->currentText();
    if (User.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Вы не выбрали пользователя!");
        return;
    }
    QString Role = ui->comboBox_2->currentText();
    if (Role.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Вы не выбрали роль!");
        return;
    }
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Смена роли", "Вы уверены, что хотите сменить роль для пользователя??", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QString message = QString("changerole|%1|%2").arg(User).arg(Role);
        connection->sendMessage(message.toStdString()); // Отправляем объединенное сообщение

        QString result = QString::fromStdString(connection->acceptMessage()); // Принимаем ответ от сервера
        QMessageBox::information(this, "Результат", result); // Выводим ответ сервера
    } else {

    }
}

void changerole::on_pushButton_2_clicked()
{
    this->close();
    adminwindow window(connection);
    window.setModal(true);
    window.exec();
}

