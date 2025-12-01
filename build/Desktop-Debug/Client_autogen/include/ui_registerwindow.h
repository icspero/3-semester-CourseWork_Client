/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registerwindow
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;

    void setupUi(QDialog *registerwindow)
    {
        if (registerwindow->objectName().isEmpty())
            registerwindow->setObjectName("registerwindow");
        registerwindow->resize(646, 515);
        lineEdit = new QLineEdit(registerwindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 100, 191, 31));
        lineEdit_2 = new QLineEdit(registerwindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(210, 180, 191, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label = new QLabel(registerwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 70, 91, 21));
        label_2 = new QLabel(registerwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 150, 91, 21));
        pushButton = new QPushButton(registerwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 320, 231, 61));
        pushButton_2 = new QPushButton(registerwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 400, 231, 61));
        lineEdit_3 = new QLineEdit(registerwindow);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(210, 260, 191, 31));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(registerwindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 230, 151, 21));

        retranslateUi(registerwindow);

        QMetaObject::connectSlotsByName(registerwindow);
    } // setupUi

    void retranslateUi(QDialog *registerwindow)
    {
        registerwindow->setWindowTitle(QCoreApplication::translate("registerwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("registerwindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("registerwindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("registerwindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("registerwindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("registerwindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\275\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerwindow: public Ui_registerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
