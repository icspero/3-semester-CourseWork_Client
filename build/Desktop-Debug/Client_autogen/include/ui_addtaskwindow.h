/********************************************************************************
** Form generated from reading UI file 'addtaskwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKWINDOW_H
#define UI_ADDTASKWINDOW_H

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

class Ui_addtaskwindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QTextEdit *textEdit;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *addtaskwindow)
    {
        if (addtaskwindow->objectName().isEmpty())
            addtaskwindow->setObjectName("addtaskwindow");
        addtaskwindow->setEnabled(true);
        addtaskwindow->resize(800, 605);
        addtaskwindow->setMouseTracking(false);
        addtaskwindow->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        verticalLayout = new QVBoxLayout(addtaskwindow);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(addtaskwindow);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(label_4, 0, Qt::AlignHCenter);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
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

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(widget_4);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_4->addWidget(label_2, 0, Qt::AlignHCenter);

        textEdit = new QTextEdit(widget_4);
        textEdit->setObjectName("textEdit");
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(600, 200));
        textEdit->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_4->addWidget(textEdit, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(widget_4);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);
        widget_3->setMinimumSize(QSize(80, 0));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_5->addWidget(label_3, 0, Qt::AlignHCenter);

        textEdit_2 = new QTextEdit(widget_3);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(textEdit_2->sizePolicy().hasHeightForWidth());
        textEdit_2->setSizePolicy(sizePolicy1);
        textEdit_2->setMinimumSize(QSize(300, 25));
        QFont font;
        font.setBold(false);
        textEdit_2->setFont(font);
        textEdit_2->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_5->addWidget(textEdit_2);


        verticalLayout_2->addWidget(widget_3, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(addtaskwindow);
        widget_2->setObjectName("widget_2");
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; \n"
"    color: black;           \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}"));

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(200, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #e74c3c; \n"
"    color: black;               \n"
"    border-radius: 5px;      \n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #c0392b; \n"
"}"));

        verticalLayout_3->addWidget(pushButton_2);


        verticalLayout->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(addtaskwindow);

        QMetaObject::connectSlotsByName(addtaskwindow);
    } // setupUi

    void retranslateUi(QDialog *addtaskwindow)
    {
        addtaskwindow->setWindowTitle(QCoreApplication::translate("addtaskwindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("addtaskwindow", "\320\222\321\213\320\261\320\276\321\200 \321\202\320\265\320\274\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("addtaskwindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("addtaskwindow", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\320\271 \320\276\321\202\320\262\320\265\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("addtaskwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addtaskwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addtaskwindow: public Ui_addtaskwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKWINDOW_H
