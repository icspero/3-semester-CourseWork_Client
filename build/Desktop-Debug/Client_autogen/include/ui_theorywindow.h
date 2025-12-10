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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_theorywindow
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *theorywindow)
    {
        if (theorywindow->objectName().isEmpty())
            theorywindow->setObjectName("theorywindow");
        theorywindow->resize(800, 600);
        theorywindow->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        verticalLayout = new QVBoxLayout(theorywindow);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        widget = new QWidget(theorywindow);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        comboBox = new QComboBox(widget);
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

        verticalLayout_2->addWidget(comboBox, 0, Qt::AlignHCenter);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(125, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; \n"
"    color: black;           \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_2, 0, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(0, 80));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignHCenter);

        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName("textEdit");
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMinimumSize(QSize(600, 30));
        textEdit->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_3->addWidget(textEdit, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_2->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter);

        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName("textEdit_2");
        sizePolicy.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy);
        textEdit_2->setMinimumSize(QSize(700, 270));
        textEdit_2->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_2->addWidget(textEdit_2, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(theorywindow);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #e74c3c; \n"
"    color: black;               \n"
"    border-radius: 5px;      \n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #c0392b; \n"
"}"));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(theorywindow);

        QMetaObject::connectSlotsByName(theorywindow);
    } // setupUi

    void retranslateUi(QDialog *theorywindow)
    {
        theorywindow->setWindowTitle(QCoreApplication::translate("theorywindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("theorywindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\265\320\274\321\203", nullptr));
        pushButton_2->setText(QCoreApplication::translate("theorywindow", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\265\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("theorywindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("theorywindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("theorywindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class theorywindow: public Ui_theorywindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEORYWINDOW_H
