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

    void setupUi(QDialog *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName("adminwindow");
        adminwindow->resize(637, 527);
        addTopicButton = new QPushButton(adminwindow);
        addTopicButton->setObjectName("addTopicButton");
        addTopicButton->setGeometry(QRect(210, 210, 201, 51));

        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QCoreApplication::translate("adminwindow", "Dialog", nullptr));
        addTopicButton->setText(QCoreApplication::translate("adminwindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\202\320\265\320\274\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
