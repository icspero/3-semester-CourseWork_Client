#ifndef DELETETOPICWINDOW_H
#define DELETETOPICWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class deletetopicwindow;
}

class deletetopicwindow : public QDialog
{
    Q_OBJECT

public:
    explicit deletetopicwindow(Connection* connection, QWidget *parent = nullptr);
    ~deletetopicwindow();

private slots:
    void on_pushButton_clicked();
    void loadTopics();

    void on_pushButton_2_clicked();

private:
    Ui::deletetopicwindow *ui;
    Connection *connection;
};

#endif // DELETETOPICWINDOW_H
