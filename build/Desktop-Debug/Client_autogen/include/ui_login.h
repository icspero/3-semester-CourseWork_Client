/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(683, 524);
        loginEdit = new QLineEdit(login);
        loginEdit->setObjectName("loginEdit");
        loginEdit->setGeometry(QRect(270, 180, 113, 26));
        passwordEdit = new QLineEdit(login);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(270, 220, 113, 26));
        passwordEdit->setEchoMode(QLineEdit::Password);
        loginLabel = new QLabel(login);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(190, 180, 66, 18));
        passwordLabel = new QLabel(login);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(190, 220, 66, 18));
        loginButton = new QPushButton(login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(240, 290, 151, 41));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        loginLabel->setText(QCoreApplication::translate("login", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("login", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
