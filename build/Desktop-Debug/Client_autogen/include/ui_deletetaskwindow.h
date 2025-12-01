/********************************************************************************
** Form generated from reading UI file 'deletetaskwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETASKWINDOW_H
#define UI_DELETETASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deletetaskwindow
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *deletetaskwindow)
    {
        if (deletetaskwindow->objectName().isEmpty())
            deletetaskwindow->setObjectName("deletetaskwindow");
        deletetaskwindow->resize(690, 515);
        comboBox = new QComboBox(deletetaskwindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(220, 80, 301, 31));
        label = new QLabel(deletetaskwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 80, 111, 21));
        comboBox_2 = new QComboBox(deletetaskwindow);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(220, 130, 301, 31));
        label_2 = new QLabel(deletetaskwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 130, 131, 31));
        pushButton = new QPushButton(deletetaskwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 180, 191, 41));
        pushButton_2 = new QPushButton(deletetaskwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 230, 171, 31));

        retranslateUi(deletetaskwindow);

        QMetaObject::connectSlotsByName(deletetaskwindow);
    } // setupUi

    void retranslateUi(QDialog *deletetaskwindow)
    {
        deletetaskwindow->setWindowTitle(QCoreApplication::translate("deletetaskwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deletetaskwindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\202\320\265\320\274\321\203: ", nullptr));
        label_2->setText(QCoreApplication::translate("deletetaskwindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\320\265: ", nullptr));
        pushButton->setText(QCoreApplication::translate("deletetaskwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("deletetaskwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletetaskwindow: public Ui_deletetaskwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETASKWINDOW_H
