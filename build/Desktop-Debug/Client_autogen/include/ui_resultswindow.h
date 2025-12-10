/********************************************************************************
** Form generated from reading UI file 'resultswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSWINDOW_H
#define UI_RESULTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultswindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *resultswindow)
    {
        if (resultswindow->objectName().isEmpty())
            resultswindow->setObjectName("resultswindow");
        resultswindow->resize(800, 600);
        resultswindow->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        verticalLayout = new QVBoxLayout(resultswindow);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(resultswindow);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(200, 30));
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

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(100, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: black;              \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget_2 = new QWidget(resultswindow);
        widget_2->setObjectName("widget_2");
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        tableWidget = new QTableWidget(widget_2);
        tableWidget->setObjectName("tableWidget");
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(764, 380));
        tableWidget->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_4->addWidget(tableWidget);


        verticalLayout->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        label = new QLabel(resultswindow);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_4 = new QPushButton(resultswindow);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(120, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: black;              \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
""));

        verticalLayout_2->addWidget(pushButton_4, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer = new QSpacerItem(25, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);

        widget_3 = new QWidget(resultswindow);
        widget_3->setObjectName("widget_3");
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(200, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; \n"
"    color: black;           \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(widget_3);
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

        verticalLayout_3->addWidget(pushButton);


        horizontalLayout_2->addWidget(widget_3, 0, Qt::AlignHCenter);

        horizontalSpacer_2 = new QSpacerItem(250, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(resultswindow);

        QMetaObject::connectSlotsByName(resultswindow);
    } // setupUi

    void retranslateUi(QDialog *resultswindow)
    {
        resultswindow->setWindowTitle(QCoreApplication::translate("resultswindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        pushButton_2->setText(QCoreApplication::translate("resultswindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("resultswindow", "(\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217)", nullptr));
        pushButton_4->setText(QCoreApplication::translate("resultswindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("resultswindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        pushButton->setText(QCoreApplication::translate("resultswindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultswindow: public Ui_resultswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSWINDOW_H
