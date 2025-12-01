/********************************************************************************
** Form generated from reading UI file 'user_rolewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_ROLEWINDOW_H
#define UI_USER_ROLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_user_rolewindow
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *user_rolewindow)
    {
        if (user_rolewindow->objectName().isEmpty())
            user_rolewindow->setObjectName("user_rolewindow");
        user_rolewindow->resize(694, 499);
        pushButton_2 = new QPushButton(user_rolewindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 370, 211, 61));
        pushButton_3 = new QPushButton(user_rolewindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 450, 171, 31));
        tableWidget = new QTableWidget(user_rolewindow);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 20, 601, 321));
        comboBox = new QComboBox(user_rolewindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 370, 161, 31));
        pushButton = new QPushButton(user_rolewindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 410, 111, 31));

        retranslateUi(user_rolewindow);

        QMetaObject::connectSlotsByName(user_rolewindow);
    } // setupUi

    void retranslateUi(QDialog *user_rolewindow)
    {
        user_rolewindow->setWindowTitle(QCoreApplication::translate("user_rolewindow", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user_rolewindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user_rolewindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        pushButton->setText(QCoreApplication::translate("user_rolewindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_rolewindow: public Ui_user_rolewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_ROLEWINDOW_H
