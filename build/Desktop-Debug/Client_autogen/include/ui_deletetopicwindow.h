/********************************************************************************
** Form generated from reading UI file 'deletetopicwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETOPICWINDOW_H
#define UI_DELETETOPICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deletetopicwindow
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *deletetopicwindow)
    {
        if (deletetopicwindow->objectName().isEmpty())
            deletetopicwindow->setObjectName("deletetopicwindow");
        deletetopicwindow->resize(683, 509);
        comboBox = new QComboBox(deletetopicwindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(180, 210, 321, 31));
        pushButton = new QPushButton(deletetopicwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 260, 111, 31));
        pushButton_2 = new QPushButton(deletetopicwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 310, 191, 31));

        retranslateUi(deletetopicwindow);

        QMetaObject::connectSlotsByName(deletetopicwindow);
    } // setupUi

    void retranslateUi(QDialog *deletetopicwindow)
    {
        deletetopicwindow->setWindowTitle(QCoreApplication::translate("deletetopicwindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("deletetopicwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("deletetopicwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletetopicwindow: public Ui_deletetopicwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETOPICWINDOW_H
