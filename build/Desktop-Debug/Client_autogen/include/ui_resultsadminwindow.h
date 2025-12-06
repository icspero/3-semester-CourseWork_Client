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
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *resultsadminwindow)
    {
        if (resultsadminwindow->objectName().isEmpty())
            resultsadminwindow->setObjectName("resultsadminwindow");
        resultsadminwindow->resize(800, 600);
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

        horizontalLayout_2->addWidget(label);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName("comboBox_3");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy);
        comboBox_3->setMinimumSize(QSize(200, 30));

        horizontalLayout_2->addWidget(comboBox_3);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName("comboBox_2");
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMinimumSize(QSize(200, 30));

        horizontalLayout_2->addWidget(comboBox_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout_5->addWidget(widget, 0, Qt::AlignHCenter);

        tableWidget_2 = new QTableWidget(widget_2);
        tableWidget_2->setObjectName("tableWidget_2");
        sizePolicy.setHeightForWidth(tableWidget_2->sizePolicy().hasHeightForWidth());
        tableWidget_2->setSizePolicy(sizePolicy);
        tableWidget_2->setMinimumSize(QSize(764, 360));

        verticalLayout_5->addWidget(tableWidget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget_3 = new QWidget(resultsadminwindow);
        widget_3->setObjectName("widget_3");
        verticalLayout_6 = new QVBoxLayout(widget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(200, 50));

        verticalLayout_6->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(200, 50));

        verticalLayout_6->addWidget(pushButton_5);


        verticalLayout->addWidget(widget_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(resultsadminwindow);

        QMetaObject::connectSlotsByName(resultsadminwindow);
    } // setupUi

    void retranslateUi(QDialog *resultsadminwindow)
    {
        resultsadminwindow->setWindowTitle(QCoreApplication::translate("resultsadminwindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        label->setText(QCoreApplication::translate("resultsadminwindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("resultsadminwindow", "\320\242\320\265\320\274\320\260", nullptr));
        pushButton_6->setText(QCoreApplication::translate("resultsadminwindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("resultsadminwindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        pushButton_5->setText(QCoreApplication::translate("resultsadminwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resultsadminwindow: public Ui_resultsadminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSADMINWINDOW_H
