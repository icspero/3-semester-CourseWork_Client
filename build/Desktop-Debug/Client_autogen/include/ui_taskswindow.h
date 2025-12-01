/********************************************************************************
** Form generated from reading UI file 'taskswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSWINDOW_H
#define UI_TASKSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_taskswindow
{
public:
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;

    void setupUi(QDialog *taskswindow)
    {
        if (taskswindow->objectName().isEmpty())
            taskswindow->setObjectName("taskswindow");
        taskswindow->resize(800, 600);
        textEdit = new QTextEdit(taskswindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(110, 170, 591, 161));
        comboBox = new QComboBox(taskswindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 60, 421, 31));
        label = new QLabel(taskswindow);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 30, 111, 18));
        pushButton = new QPushButton(taskswindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 110, 241, 31));
        pushButton_2 = new QPushButton(taskswindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 350, 181, 31));
        pushButton_3 = new QPushButton(taskswindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(430, 350, 181, 31));
        lineEdit = new QLineEdit(taskswindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(300, 430, 251, 31));
        label_2 = new QLabel(taskswindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 430, 61, 31));
        pushButton_4 = new QPushButton(taskswindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(570, 430, 91, 26));
        pushButton_6 = new QPushButton(taskswindow);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(300, 540, 211, 41));

        retranslateUi(taskswindow);

        QMetaObject::connectSlotsByName(taskswindow);
    } // setupUi

    void retranslateUi(QDialog *taskswindow)
    {
        taskswindow->setWindowTitle(QCoreApplication::translate("taskswindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("taskswindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\265\320\274\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("taskswindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("taskswindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\265\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("taskswindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("taskswindow", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        pushButton_4->setText(QCoreApplication::translate("taskswindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("taskswindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class taskswindow: public Ui_taskswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKSWINDOW_H
