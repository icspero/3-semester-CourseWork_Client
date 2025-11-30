/********************************************************************************
** Form generated from reading UI file 'addtopicwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOPICWINDOW_H
#define UI_ADDTOPICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addtopicwindow
{
public:
    QTextEdit *theoryEdit;
    QLineEdit *cipherEdit;
    QTextEdit *descEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addtopicwindow)
    {
        if (addtopicwindow->objectName().isEmpty())
            addtopicwindow->setObjectName("addtopicwindow");
        addtopicwindow->resize(660, 462);
        theoryEdit = new QTextEdit(addtopicwindow);
        theoryEdit->setObjectName("theoryEdit");
        theoryEdit->setGeometry(QRect(130, 130, 391, 181));
        cipherEdit = new QLineEdit(addtopicwindow);
        cipherEdit->setObjectName("cipherEdit");
        cipherEdit->setGeometry(QRect(130, 30, 391, 31));
        descEdit = new QTextEdit(addtopicwindow);
        descEdit->setObjectName("descEdit");
        descEdit->setGeometry(QRect(130, 80, 391, 31));
        label = new QLabel(addtopicwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 41, 41));
        label_2 = new QLabel(addtopicwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 81, 31));
        label_3 = new QLabel(addtopicwindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 130, 61, 18));
        pushButton = new QPushButton(addtopicwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 340, 221, 61));
        pushButton_2 = new QPushButton(addtopicwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 410, 181, 31));

        retranslateUi(addtopicwindow);

        QMetaObject::connectSlotsByName(addtopicwindow);
    } // setupUi

    void retranslateUi(QDialog *addtopicwindow)
    {
        addtopicwindow->setWindowTitle(QCoreApplication::translate("addtopicwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addtopicwindow", "\320\242\320\265\320\274\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("addtopicwindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", nullptr));
        label_3->setText(QCoreApplication::translate("addtopicwindow", "\320\242\320\265\320\276\321\200\320\270\321\217:", nullptr));
        pushButton->setText(QCoreApplication::translate("addtopicwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addtopicwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addtopicwindow: public Ui_addtopicwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOPICWINDOW_H
