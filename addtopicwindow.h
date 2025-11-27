#ifndef ADDTOPICWINDOW_H
#define ADDTOPICWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class addtopicwindow;
}

class addtopicwindow : public QDialog
{
    Q_OBJECT

public:
    explicit addtopicwindow(Connection* connection, QWidget *parent = nullptr);
    ~addtopicwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addtopicwindow *ui;
    Connection *connection;
};

#endif // ADDTOPICWINDOW_H
