#ifndef DELETETASKWINDOW_H
#define DELETETASKWINDOW_H

#include <QDialog>
#include "connection.h"

namespace Ui {
class deletetaskwindow;
}

class deletetaskwindow : public QDialog
{
    Q_OBJECT

public:
    explicit deletetaskwindow(Connection* connection, QWidget *parent = nullptr);
    ~deletetaskwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void loadTopics();
    void loadTasks(QString topic);

    void on_comboBox_currentTextChanged(const QString &topic);

private:
    Ui::deletetaskwindow *ui;
    Connection *connection;
};

#endif // DELETETASKWINDOW_H
