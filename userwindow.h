#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class userwindow;
}

class userwindow : public QDialog
{
    Q_OBJECT

public:
    explicit userwindow(Connection* connection, QWidget *parent = nullptr);
    ~userwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::userwindow *ui;
    Connection *connection;
};

#endif // USERWINDOW_H
