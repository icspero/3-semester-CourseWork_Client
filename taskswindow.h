#ifndef TASKSWINDOW_H
#define TASKSWINDOW_H

#include <QDialog>

namespace Ui {
class taskswindow;
}

class taskswindow : public QDialog
{
    Q_OBJECT

public:
    explicit taskswindow(QWidget *parent = nullptr);
    ~taskswindow();

private:
    Ui::taskswindow *ui;
};

#endif // TASKSWINDOW_H
