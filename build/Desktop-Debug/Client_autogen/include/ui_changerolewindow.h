/********************************************************************************
** Form generated from reading UI file 'changerolewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEROLEWINDOW_H
#define UI_CHANGEROLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changerole
{
public:
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *changerole)
    {
        if (changerole->objectName().isEmpty())
            changerole->setObjectName("changerole");
        changerole->resize(603, 472);
        comboBox = new QComboBox(changerole);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 160, 191, 31));
        comboBox_2 = new QComboBox(changerole);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(200, 250, 191, 31));
        label = new QLabel(changerole);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 220, 131, 21));
        label_2 = new QLabel(changerole);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 120, 181, 41));
        pushButton = new QPushButton(changerole);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 300, 231, 51));
        pushButton_2 = new QPushButton(changerole);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 360, 151, 31));

        retranslateUi(changerole);

        QMetaObject::connectSlotsByName(changerole);
    } // setupUi

    void retranslateUi(QDialog *changerole)
    {
        changerole->setWindowTitle(QCoreApplication::translate("changerole", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changerole", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\200\320\276\320\273\321\214: ", nullptr));
        label_2->setText(QCoreApplication::translate("changerole", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217: ", nullptr));
        pushButton->setText(QCoreApplication::translate("changerole", "\320\237\320\276\320\274\320\265\320\275\321\217\321\202\321\214 \321\200\320\276\320\273\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("changerole", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changerole: public Ui_changerole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEROLEWINDOW_H
