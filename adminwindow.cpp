#include "adminwindow.h"
#include "loginwindow.h"
#include "addtopicwindow.h"
#include "deletetopicwindow.h"
#include "addtaskwindow.h"
#include "deletetaskwindow.h"
#include "ui_adminwindow.h"
#include "changerolewindow.h"
#include "user_rolewindow.h"
#include "taskswindow.h"
#include "theorywindow.h"
#include "resultsadminwindow.h"
#include <QMessageBox>

adminwindow::adminwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminwindow)
    , connection(connection)
{
    ui->setupUi(this);
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
}

adminwindow::~adminwindow()
{
    delete ui;
}

void adminwindow::on_addTopicButton_clicked()
{
    this->close();
    addtopicwindow window(connection);
    window.setModal(true);
    window.exec();
}

void adminwindow::on_addTopicButton_2_clicked()
{
    this->close();
    deletetopicwindow window(connection);
    window.setModal(true);
    window.exec();
}


void adminwindow::on_addTopicButton_3_clicked()
{
    this->close();
    addtaskwindow window(connection);
    window.setModal(true);
    window.exec();
}

void adminwindow::on_addTopicButton_4_clicked()
{
    this->close();
    deletetaskwindow window(connection);
    window.setModal(true);
    window.exec();
}


void adminwindow::on_addTopicButton_5_clicked()
{
    this->close();
    changerole window(connection);
    window.setModal(true);
    window.exec();
}


void adminwindow::on_addTopicButton_6_clicked()
{
    this->close();
    user_rolewindow window(connection);
    window.setModal(true);
    window.exec();
}


void adminwindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton exitButton = QMessageBox::question(this, "Выход", "Вы уверены, что хотите выйти?", QMessageBox::Yes | QMessageBox::No);
    if(exitButton == QMessageBox::Yes){
        this->close();
        login window(connection);
        window.setModal(true);
        window.exec();
    }
}

void adminwindow::on_pushButton_2_clicked()
{
    this->close();
    theorywindow window(connection);
    window.setModal(true);
    window.exec();
}


void adminwindow::on_pushButton_3_clicked()
{
    this->close();
    taskswindow window(connection);
    window.setModal(true);
    window.exec();
}


void adminwindow::on_pushButton_4_clicked()
{
    this->close();
    resultsadminwindow window(connection);
    window.setModal(true);
    window.exec();
}

