/********************************************************************************
** Form generated from reading UI file 'user_rolewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_ROLEWINDOW_H
#define UI_USER_ROLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_user_rolewindow
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QDialog *user_rolewindow)
    {
        if (user_rolewindow->objectName().isEmpty())
            user_rolewindow->setObjectName("user_rolewindow");
        user_rolewindow->resize(694, 499);
        pushButton = new QPushButton(user_rolewindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 190, 211, 61));
        textEdit = new QTextEdit(user_rolewindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(220, 140, 271, 31));
        pushButton_2 = new QPushButton(user_rolewindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 270, 211, 61));
        pushButton_3 = new QPushButton(user_rolewindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 350, 171, 31));
        label = new QLabel(user_rolewindow);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 140, 111, 21));

        retranslateUi(user_rolewindow);

        QMetaObject::connectSlotsByName(user_rolewindow);
    } // setupUi

    void retranslateUi(QDialog *user_rolewindow)
    {
        user_rolewindow->setWindowTitle(QCoreApplication::translate("user_rolewindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("user_rolewindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\200\320\276\320\273\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user_rolewindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user_rolewindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QCoreApplication::translate("user_rolewindow", "\320\237\321\203\321\202\321\214 \320\264\320\276 \321\204\320\260\320\271\320\273\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_rolewindow: public Ui_user_rolewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_ROLEWINDOW_H
