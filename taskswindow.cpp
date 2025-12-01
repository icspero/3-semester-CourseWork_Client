#include "taskswindow.h"
#include "ui_taskswindow.h"

taskswindow::taskswindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::taskswindow)
{
    ui->setupUi(this);
}

taskswindow::~taskswindow()
{
    delete ui;
}
