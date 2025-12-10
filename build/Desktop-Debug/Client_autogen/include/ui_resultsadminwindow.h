/********************************************************************************
** Form generated from reading UI file 'resultsadminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSADMINWINDOW_H
#define UI_RESULTSADMINWINDOW_H

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

class Ui_resultsadminwindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_6;
    QTableWidget *tableWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *resultsadminwindow)
    {
        if (resultsadminwindow->objectName().isEmpty())
            resultsadminwindow->setObjectName("resultsadminwindow");
        resultsadminwindow->resize(800, 600);
        resultsadminwindow->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        verticalLayout = new QVBoxLayout(resultsadminwindow);
        verticalLayout->setObjectName("verticalLayout");
        widget_2 = new QWidget(resultsadminwindow);
        widget_2->setObjectName("widget_2");
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        horizontalLayout_2->addWidget(label);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName("comboBox_3");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy);
        comboBox_3->setMinimumSize(QSize(200, 30));
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"       color: #000000;\n"
"       background-color: #ffffff; \n"
"}\n"
"QComboBox QAbstractItemView {\n"
"       color: #000000;\n"
"       background-color: #ffffff;\n"
"       selection-background-color: #3498db;\n"
"       selection-color: white;\n"
"}"));

        horizontalLayout_2->addWidget(comboBox_3);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName("comboBox_2");
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMinimumSize(QSize(200, 30));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"       color: #000000;\n"
"       background-color: #ffffff; \n"
"}\n"
"QComboBox QAbstractItemView {\n"
"       color: #000000;\n"
"       background-color: #ffffff;\n"
"       selection-background-color: #3498db;\n"
"       selection-color: white;\n"
"}"));

        horizontalLayout_2->addWidget(comboBox_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(100, 30));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: black;              \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout_5->addWidget(widget, 0, Qt::AlignHCenter);

        tableWidget_2 = new QTableWidget(widget_2);
        tableWidget_2->setObjectName("tableWidget_2");
        sizePolicy.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy);
        tableWidget_2->setMinimumSize(QSize(764, 360));
        tableWidget_2->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_5->addWidget(tableWidget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        label_3 = new QLabel(resultsadminwindow);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(resultsadminwindow);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(120, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: black;              \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
""));

        verticalLayout_2->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        widget_3 = new QWidget(resultsadminwindow);
        widget_3->setObjectName("widget_3");
        verticalLayout_6 = new QVBoxLayout(widget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(200, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; \n"
"    color: black;           \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}"));

        verticalLayout_6->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(200, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #e74c3c; \n"
"    color: black;               \n"
"    border-radius: 5px;      \n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #c0392b; \n"
"}"));

        verticalLayout_6->addWidget(pushButton_5);


        horizontalLayout->addWidget(widget_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(resultsadminwindow);

        QMetaObject::connectSlotsByName(resultsadminwindow);
    } // setupUi

    void retranslateUi(QDialog *resultsadminwindow)
    {
        resultsadminwindow->setWindowTitle(QCoreApplication::translate("resultsadminwindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        label->setText(QCoreApplication::translate("resultsadminwindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("resultsadminwindow", "\320\242\320\265\320\274\320\260", nullptr));
        pushButton_6->setText(QCoreApplication::translate("resultsadminwindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("resultsadminwindow", "(\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217)", nullptr));
        pushButton->setText(QCoreApplication::translate("resultsadminwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("resultsadminwindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_5->setText(QCoreApplication::translate("resultsadminwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultsadminwindow: public Ui_resultsadminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSADMINWINDOW_H
