#ifndef ADDTASKWINDOW_H
#define ADDTASKWINDOW_H

#include <QDialog>
#include "connection.h"
#include "deletetopicwindow.h"

namespace Ui {
class addtaskwindow;
}

class addtaskwindow : public QDialog
{
    Q_OBJECT

public:
    explicit addtaskwindow(Connection* connection, QWidget *parent = nullptr);
    ~addtaskwindow();

private slots:
    void on_pushButton_clicked();
    void loadTopics();
    void on_pushButton_2_clicked();

private:
    Ui::addtaskwindow *ui;
    Connection *connection;
};

#endif // ADDTASKWINDOW_H
