/********************************************************************************
** Form generated from reading UI file 'deletetopicwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETOPICWINDOW_H
#define UI_DELETETOPICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletetopicwindow
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *deletetopicwindow)
    {
        if (deletetopicwindow->objectName().isEmpty())
            deletetopicwindow->setObjectName("deletetopicwindow");
        deletetopicwindow->resize(800, 600);
        deletetopicwindow->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        verticalLayout = new QVBoxLayout(deletetopicwindow);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        widget_2 = new QWidget(deletetopicwindow);
        widget_2->setObjectName("widget_2");
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(250, 30));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"       color: #000000;\n"
"       background-color: #ffffff; \n"
"}\n"
"QComboBox QAbstractItemView {\n"
"       color: #000000;\n"
"       background-color: #ffffff;\n"
"       selection-background-color: #3498db;\n"
"       selection-color: white;\n"
"}"));

        verticalLayout_3->addWidget(comboBox);


        verticalLayout->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget = new QWidget(deletetopicwindow);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
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

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(200, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #e74c3c; \n"
"    color: black;               \n"
"    border-radius: 5px;      \n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #c0392b; \n"
"}"));

        verticalLayout_2->addWidget(pushButton_2);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_2 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(deletetopicwindow);

        QMetaObject::connectSlotsByName(deletetopicwindow);
    } // setupUi

    void retranslateUi(QDialog *deletetopicwindow)
    {
        deletetopicwindow->setWindowTitle(QCoreApplication::translate("deletetopicwindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\202\320\265\320\274\321\213", nullptr));
        label->setText(QCoreApplication::translate("deletetopicwindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\202\320\265\320\274\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("deletetopicwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("deletetopicwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletetopicwindow: public Ui_deletetopicwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETOPICWINDOW_H
