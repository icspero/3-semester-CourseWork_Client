#ifndef RESULTSWINDOW_H
#define RESULTSWINDOW_H

#include <QDialog>
#include "connection.h"
#include <QTableWidget>

namespace Ui {
class resultswindow;
}

class resultswindow : public QDialog
{
    Q_OBJECT

public:
    explicit resultswindow(Connection* connection, QWidget *parent = nullptr);
    ~resultswindow();

private slots:
    void on_pushButton_clicked();
    void loadTopics();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::resultswindow *ui;
    Connection *connection;

    void loadResults(const QString &topic_filter = QString());
};

#endif // RESULTSWINDOW_H
