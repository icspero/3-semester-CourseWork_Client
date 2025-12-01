#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "loginwindow.h"
#include <QMessageBox>
const int PORT = 8080;
const char* SERVER_IP = "127.0.0.1";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , Connect(new Connection(SERVER_IP, PORT))
{
    ui->setupUi(this);
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
}

MainWindow::~MainWindow()
{
    delete Connect;
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    this->close();
    login window(Connect);
    window.setModal(true);
    window.exec();
}


void MainWindow::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Выход", "Вы уверены, что хотите закрыть программу?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        close();
    }
}

