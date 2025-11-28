#include "adminwindow.h"
#include "loginwindow.h"
#include "addtopicwindow.h"
#include "deletetopicwindow.h"
#include "addtaskwindow.h"
#include "deletetaskwindow.h"
#include "ui_adminwindow.h"
#include "changerolewindow.h"

adminwindow::adminwindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminwindow)
    , connection(connection)
{
    ui->setupUi(this);
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

