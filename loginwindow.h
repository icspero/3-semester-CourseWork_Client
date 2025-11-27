#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(Connection* connection, QWidget *parent = nullptr);
    ~login();

private slots:
    void on_loginButton_clicked();

private:
    Ui::login *ui;
    Connection *connection;
};

#endif // LOGINWINDOW_H
