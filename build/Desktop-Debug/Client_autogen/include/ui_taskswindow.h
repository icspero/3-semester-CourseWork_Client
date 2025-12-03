/********************************************************************************
** Form generated from reading UI file 'taskswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKSWINDOW_H
#define UI_TASKSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_taskswindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;

    void setupUi(QDialog *taskswindow)
    {
        if (taskswindow->objectName().isEmpty())
            taskswindow->setObjectName("taskswindow");
        taskswindow->resize(800, 600);
        verticalLayout = new QVBoxLayout(taskswindow);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(taskswindow);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(250, 30));

        verticalLayout_2->addWidget(comboBox, 0, Qt::AlignHCenter);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(175, 30));

        verticalLayout_2->addWidget(pushButton, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget_2 = new QWidget(taskswindow);
        widget_2->setObjectName("widget_2");
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        textEdit = new QTextEdit(widget_2);
        textEdit->setObjectName("textEdit");
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMinimumSize(QSize(500, 230));

        verticalLayout_3->addWidget(textEdit, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget_3 = new QWidget(taskswindow);
        widget_3->setObjectName("widget_3");
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(175, 30));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(175, 30));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addWidget(widget_3, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget_4 = new QWidget(taskswindow);
        widget_4->setObjectName("widget_4");
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_4);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2, 0, Qt::AlignVCenter);

        lineEdit = new QLineEdit(widget_4);
        lineEdit->setObjectName("lineEdit");
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(200, 30));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout->addWidget(widget_4, 0, Qt::AlignHCenter);

        pushButton_6 = new QPushButton(taskswindow);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(pushButton_6, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(taskswindow);

        QMetaObject::connectSlotsByName(taskswindow);
    } // setupUi

    void retranslateUi(QDialog *taskswindow)
    {
        taskswindow->setWindowTitle(QCoreApplication::translate("taskswindow", "\320\227\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("taskswindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\265\320\274\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("taskswindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("taskswindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\265\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("taskswindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("taskswindow", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        pushButton_4->setText(QCoreApplication::translate("taskswindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("taskswindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class taskswindow: public Ui_taskswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKSWINDOW_H
