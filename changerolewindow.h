#ifndef CHANGEROLEWINDOW_H
#define CHANGEROLEWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class changerole;
}

class changerole : public QDialog
{
    Q_OBJECT

public:
    explicit changerole(Connection* connection, QWidget *parent = nullptr);
    ~changerole();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void loadUsers();
    void loadRoles();

private:
    Ui::changerole *ui;
    Connection *connection;
};

#endif // CHANGEROLEWINDOW_H
