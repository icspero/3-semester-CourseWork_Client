#ifndef USER_ROLEWINDOW_H
#define USER_ROLEWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class user_rolewindow;
}

class user_rolewindow : public QDialog
{
    Q_OBJECT

public:
    explicit user_rolewindow(Connection* connection, QWidget *parent = nullptr);
    ~user_rolewindow();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void loadRolesUsers(const QString &roleFilter = QString());
    void loadRoles();

    void on_pushButton_clicked();

private:
    Ui::user_rolewindow *ui;
    Connection *connection;
    void populateTable(const QString &data);
};

#endif // USER_ROLEWINDOW_H
