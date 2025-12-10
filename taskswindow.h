#ifndef TASKSWINDOW_H
#define TASKSWINDOW_H

#include <QDialog>
#include "connection.h"


namespace Ui {
class taskswindow;
}

class taskswindow : public QDialog
{
    Q_OBJECT

public:
    explicit taskswindow(Connection* connection, QWidget *parent = nullptr);
    ~taskswindow();

private slots:
    void on_pushButton_clicked();
    void loadTopics();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();
    void updateTaskCounter();

private:
    Ui::taskswindow *ui;
    Connection *connection;

    QStringList tasks;
    int currentTaskIndex = 0;
};

#endif // TASKSWINDOW_H
