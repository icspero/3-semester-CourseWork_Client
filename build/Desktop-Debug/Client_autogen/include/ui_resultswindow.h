/********************************************************************************
** Form generated from reading UI file 'resultswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSWINDOW_H
#define UI_RESULTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_resultswindow
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *resultswindow)
    {
        if (resultswindow->objectName().isEmpty())
            resultswindow->setObjectName("resultswindow");
        resultswindow->resize(685, 564);
        tableWidget = new QTableWidget(resultswindow);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 40, 661, 351));
        pushButton = new QPushButton(resultswindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 450, 191, 51));
        comboBox = new QComboBox(resultswindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(40, 440, 221, 31));
        pushButton_2 = new QPushButton(resultswindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 480, 141, 31));
        pushButton_3 = new QPushButton(resultswindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 520, 231, 31));

        retranslateUi(resultswindow);

        QMetaObject::connectSlotsByName(resultswindow);
    } // setupUi

    void retranslateUi(QDialog *resultswindow)
    {
        resultswindow->setWindowTitle(QCoreApplication::translate("resultswindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("resultswindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        pushButton_2->setText(QCoreApplication::translate("resultswindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("resultswindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultswindow: public Ui_resultswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSWINDOW_H
