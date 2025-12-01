#ifndef THEORYWINDOW_H
#define THEORYWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class theorywindow;
}

class theorywindow : public QDialog
{
    Q_OBJECT

public:
    explicit theorywindow(Connection* connection, QWidget *parent = nullptr);
    ~theorywindow();

private slots:
    void on_pushButton_clicked();
    void loadTopics();
    void on_pushButton_2_clicked();

private:
    Ui::theorywindow *ui;
    Connection *connection;
};

#endif // THEORYWINDOW_H
