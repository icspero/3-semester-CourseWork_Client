/********************************************************************************
** Form generated from reading UI file 'addtaskwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKWINDOW_H
#define UI_ADDTASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addtaskwindow
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addtaskwindow)
    {
        if (addtaskwindow->objectName().isEmpty())
            addtaskwindow->setObjectName("addtaskwindow");
        addtaskwindow->resize(640, 508);
        textEdit = new QTextEdit(addtaskwindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(170, 160, 351, 101));
        textEdit_2 = new QTextEdit(addtaskwindow);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(170, 280, 351, 31));
        label_2 = new QLabel(addtaskwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 150, 71, 41));
        label_3 = new QLabel(addtaskwindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 280, 151, 18));
        pushButton = new QPushButton(addtaskwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 340, 201, 61));
        comboBox = new QComboBox(addtaskwindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(230, 100, 231, 31));
        label_4 = new QLabel(addtaskwindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 100, 111, 20));
        pushButton_2 = new QPushButton(addtaskwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 410, 161, 31));

        retranslateUi(addtaskwindow);

        QMetaObject::connectSlotsByName(addtaskwindow);
    } // setupUi

    void retranslateUi(QDialog *addtaskwindow)
    {
        addtaskwindow->setWindowTitle(QCoreApplication::translate("addtaskwindow", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("addtaskwindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265:", nullptr));
        label_3->setText(QCoreApplication::translate("addtaskwindow", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \320\276\321\202\320\262\320\265\321\202: ", nullptr));
        pushButton->setText(QCoreApplication::translate("addtaskwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("addtaskwindow", "\320\222\321\213\320\261\320\276\321\200 \321\202\320\265\320\274\321\213:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addtaskwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addtaskwindow: public Ui_addtaskwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKWINDOW_H
