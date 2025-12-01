/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userwindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *userwindow)
    {
        if (userwindow->objectName().isEmpty())
            userwindow->setObjectName("userwindow");
        userwindow->resize(593, 481);
        pushButton = new QPushButton(userwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 160, 221, 51));
        pushButton_2 = new QPushButton(userwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 230, 221, 51));
        pushButton_3 = new QPushButton(userwindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(210, 380, 161, 41));
        pushButton_4 = new QPushButton(userwindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(180, 300, 221, 51));

        retranslateUi(userwindow);

        QMetaObject::connectSlotsByName(userwindow);
    } // setupUi

    void retranslateUi(QDialog *userwindow)
    {
        userwindow->setWindowTitle(QCoreApplication::translate("userwindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("userwindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("userwindow", "\320\227\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("userwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton_4->setText(QCoreApplication::translate("userwindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userwindow: public Ui_userwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
