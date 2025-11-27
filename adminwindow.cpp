#include "adminwindow.h"
#include "loginwindow.h"
#include "addtopicwindow.h"
#include "ui_adminwindow.h"

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

