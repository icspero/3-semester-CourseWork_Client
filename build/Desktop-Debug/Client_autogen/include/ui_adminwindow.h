/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QPushButton *addTopicButton;
    QPushButton *addTopicButton_2;
    QPushButton *addTopicButton_3;
    QPushButton *addTopicButton_4;
    QPushButton *addTopicButton_5;
    QPushButton *addTopicButton_6;
    QPushButton *pushButton;

    void setupUi(QDialog *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName("adminwindow");
        adminwindow->resize(637, 527);
        addTopicButton = new QPushButton(adminwindow);
        addTopicButton->setObjectName("addTopicButton");
        addTopicButton->setGeometry(QRect(100, 190, 201, 51));
        addTopicButton_2 = new QPushButton(adminwindow);
        addTopicButton_2->setObjectName("addTopicButton_2");
        addTopicButton_2->setGeometry(QRect(100, 260, 201, 51));
        addTopicButton_3 = new QPushButton(adminwindow);
        addTopicButton_3->setObjectName("addTopicButton_3");
        addTopicButton_3->setGeometry(QRect(320, 190, 201, 51));
        addTopicButton_4 = new QPushButton(adminwindow);
        addTopicButton_4->setObjectName("addTopicButton_4");
        addTopicButton_4->setGeometry(QRect(320, 260, 201, 51));
        addTopicButton_5 = new QPushButton(adminwindow);
        addTopicButton_5->setObjectName("addTopicButton_5");
        addTopicButton_5->setGeometry(QRect(100, 330, 201, 51));
        addTopicButton_6 = new QPushButton(adminwindow);
        addTopicButton_6->setObjectName("addTopicButton_6");
        addTopicButton_6->setGeometry(QRect(320, 330, 201, 51));
        pushButton = new QPushButton(adminwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 410, 121, 31));

        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QCoreApplication::translate("adminwindow", "Dialog", nullptr));
        addTopicButton->setText(QCoreApplication::translate("adminwindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\202\320\265\320\274\321\203", nullptr));
        addTopicButton_2->setText(QCoreApplication::translate("adminwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\320\265\320\274\321\203", nullptr));
        addTopicButton_3->setText(QCoreApplication::translate("adminwindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        addTopicButton_4->setText(QCoreApplication::translate("adminwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        addTopicButton_5->setText(QCoreApplication::translate("adminwindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\200\320\276\320\273\321\214", nullptr));
        addTopicButton_6->setText(QCoreApplication::translate("adminwindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\200\320\276\320\273\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("adminwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
