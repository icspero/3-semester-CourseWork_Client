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

private:
    Ui::adminwindow *ui;
    Connection *connection;
};

#endif // ADMINWINDOW_H
