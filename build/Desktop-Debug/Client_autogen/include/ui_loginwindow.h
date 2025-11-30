/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *loginEdit;
    QLineEdit *passwordEdit;
    QLabel *loginLabel;
    QLabel *passwordLabel;
    QPushButton *loginButton;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(683, 524);
        loginEdit = new QLineEdit(login);
        loginEdit->setObjectName("loginEdit");
        loginEdit->setGeometry(QRect(300, 180, 113, 26));
        passwordEdit = new QLineEdit(login);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(300, 220, 113, 26));
        passwordEdit->setEchoMode(QLineEdit::Password);
        loginLabel = new QLabel(login);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(220, 180, 66, 18));
        passwordLabel = new QLabel(login);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(220, 220, 66, 18));
        loginButton = new QPushButton(login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(150, 280, 361, 81));
        pushButton = new QPushButton(login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 390, 111, 26));
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 390, 111, 20));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 480, 131, 31));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        loginLabel->setText(QCoreApplication::translate("login", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("login", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("login", "\320\235\320\265\321\202 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
