/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userwindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_3;

    void setupUi(QDialog *userwindow)
    {
        if (userwindow->objectName().isEmpty())
            userwindow->setObjectName("userwindow");
        userwindow->resize(800, 600);
        userwindow->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        verticalLayout = new QVBoxLayout(userwindow);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(userwindow);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: black;"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; \n"
"    color: black;           \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}"));

        verticalLayout_2->addWidget(pushButton, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(200, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: black;              \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
""));

        verticalLayout_2->addWidget(pushButton_2, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(200, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1c40f; \n"
"    color: black;               \n"
"    border-radius: 5px;      \n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #d4ac0d; \n"
"}"));

        verticalLayout_2->addWidget(pushButton_4, 0, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(200, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #e74c3c; \n"
"    color: black;               \n"
"    border-radius: 5px;      \n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #c0392b; \n"
"}"));

        verticalLayout_2->addWidget(pushButton_3, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(userwindow);

        QMetaObject::connectSlotsByName(userwindow);
    } // setupUi

    void retranslateUi(QDialog *userwindow)
    {
        userwindow->setWindowTitle(QCoreApplication::translate("userwindow", "\320\234\320\265\320\275\321\216 \320\277\320\276\321\201\320\265\321\202\320\270\321\202\320\265\320\273\321\217", nullptr));
        label->setText(QCoreApplication::translate("userwindow", "\360\237\223\230\320\237\320\260\320\275\320\265\320\273\321\214 \320\277\320\276\321\201\320\265\321\202\320\270\321\202\320\265\320\273\321\217\360\237\221\244", nullptr));
        pushButton->setText(QCoreApplication::translate("userwindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("userwindow", "\320\227\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        pushButton_4->setText(QCoreApplication::translate("userwindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        pushButton_3->setText(QCoreApplication::translate("userwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userwindow: public Ui_userwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
