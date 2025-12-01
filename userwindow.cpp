#include "userwindow.h"
#include "ui_userwindow.h"
#include "loginwindow.h"
#include "theorywindow.h"
#include <QMessageBox>

userwindow::userwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userwindow)
    , connection(connection)
{
    ui->setupUi(this);
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
}

userwindow::~userwindow()
{
    delete ui;
}

void userwindow::on_pushButton_clicked()
{
    this->close();
    theorywindow window(connection);
    window.setModal(true);
    window.exec();
}


void userwindow::on_pushButton_2_clicked()
{

}


void userwindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton exitButton = QMessageBox::question(this, "Выход", "Вы уверены, что хотите выйти?", QMessageBox::Yes | QMessageBox::No);
    if(exitButton == QMessageBox::Yes){
        this->close();
        login window(connection);
        window.setModal(true);
        window.exec();
    }
}

