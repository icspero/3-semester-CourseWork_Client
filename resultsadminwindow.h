#ifndef RESULTSADMINWINDOW_H
#define RESULTSADMINWINDOW_H

#include "connection.h"
#include <QDialog>

namespace Ui {
class resultsadminwindow;
}

class resultsadminwindow : public QDialog
{
    Q_OBJECT

public:
    explicit resultsadminwindow(Connection* connection, QWidget *parent = nullptr);
    ~resultsadminwindow();

private slots:
    void loadTopics();
    void loadUsers();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::resultsadminwindow *ui;
    Connection *connection;

    void loadResults(const QString &topic_filter = QString());
};

#endif // RESULTSADMINWINDOW_H
