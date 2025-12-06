#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class adminwindow;
}

class adminwindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminwindow(Connection* connection, QWidget *parent = nullptr);
    ~adminwindow();

private slots:
    void on_addTopicButton_clicked();

    void on_addTopicButton_2_clicked();

    void on_addTopicButton_3_clicked();

    void on_addTopicButton_4_clicked();

    void on_addTopicButton_5_clicked();

    void on_addTopicButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::adminwindow *ui;
    Connection *connection;
};

#endif // ADMINWINDOW_H
