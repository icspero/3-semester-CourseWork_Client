/********************************************************************************
** Form generated from reading UI file 'theorywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEORYWINDOW_H
#define UI_THEORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_theorywindow
{
public:
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *theorywindow)
    {
        if (theorywindow->objectName().isEmpty())
            theorywindow->setObjectName("theorywindow");
        theorywindow->resize(800, 600);
        comboBox = new QComboBox(theorywindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(220, 40, 321, 31));
        textEdit = new QTextEdit(theorywindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 150, 621, 61));
        textEdit_2 = new QTextEdit(theorywindow);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(50, 260, 681, 261));
        label = new QLabel(theorywindow);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 20, 141, 18));
        label_2 = new QLabel(theorywindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 130, 121, 18));
        label_3 = new QLabel(theorywindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 230, 66, 18));
        pushButton = new QPushButton(theorywindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 540, 141, 31));
        pushButton_2 = new QPushButton(theorywindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 90, 181, 31));

        retranslateUi(theorywindow);

        QMetaObject::connectSlotsByName(theorywindow);
    } // setupUi

    void retranslateUi(QDialog *theorywindow)
    {
        theorywindow->setWindowTitle(QCoreApplication::translate("theorywindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("theorywindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\265\320\274\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("theorywindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("theorywindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("theorywindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        pushButton_2->setText(QCoreApplication::translate("theorywindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class theorywindow: public Ui_theorywindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORYWINDOW_H
