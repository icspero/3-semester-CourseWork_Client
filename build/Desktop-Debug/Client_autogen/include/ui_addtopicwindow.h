/********************************************************************************
** Form generated from reading UI file 'addtopicwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOPICWINDOW_H
#define UI_ADDTOPICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addtopicwindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QTextEdit *descEdit;
    QLabel *label_3;
    QTextEdit *theoryEdit;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *addtopicwindow)
    {
        if (addtopicwindow->objectName().isEmpty())
            addtopicwindow->setObjectName("addtopicwindow");
        addtopicwindow->resize(800, 600);
        addtopicwindow->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        verticalLayout = new QVBoxLayout(addtopicwindow);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(addtopicwindow);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(500, 25));
        textEdit->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_2->addWidget(textEdit, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter);

        descEdit = new QTextEdit(widget);
        descEdit->setObjectName("descEdit");
        sizePolicy1.setHeightForWidth(descEdit->sizePolicy().hasHeightForWidth());
        descEdit->setSizePolicy(sizePolicy1);
        descEdit->setMinimumSize(QSize(600, 50));
        descEdit->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_2->addWidget(descEdit, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter);

        theoryEdit = new QTextEdit(widget);
        theoryEdit->setObjectName("theoryEdit");
        sizePolicy1.setHeightForWidth(theoryEdit->sizePolicy().hasHeightForWidth());
        theoryEdit->setSizePolicy(sizePolicy1);
        theoryEdit->setMinimumSize(QSize(700, 260));
        theoryEdit->setStyleSheet(QString::fromUtf8("color: #000000;background-color: #ffffff;"));

        verticalLayout_2->addWidget(theoryEdit, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_4 = new QLabel(addtopicwindow);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QString::fromUtf8("color: #2c3e50;\n"
"font-weight: bold;"));

        verticalLayout_5->addWidget(label_4, 0, Qt::AlignHCenter);

        comboBox = new QComboBox(addtopicwindow);
        comboBox->setObjectName("comboBox");
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setMinimumSize(QSize(230, 30));
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

        verticalLayout_5->addWidget(comboBox, 0, Qt::AlignHCenter);

        pushButton_3 = new QPushButton(addtopicwindow);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(100, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;\n"
"    color: black;              \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;\n"
"}\n"
""));

        verticalLayout_5->addWidget(pushButton_3, 0, Qt::AlignHCenter);


        horizontalLayout->addLayout(verticalLayout_5);

        widget_2 = new QWidget(addtopicwindow);
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

        verticalLayout_3->addWidget(pushButton, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

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

        verticalLayout_3->addWidget(pushButton_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(250, 80, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(addtopicwindow);

        QMetaObject::connectSlotsByName(addtopicwindow);
    } // setupUi

    void retranslateUi(QDialog *addtopicwindow)
    {
        addtopicwindow->setWindowTitle(QCoreApplication::translate("addtopicwindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\265\320\274\321\213", nullptr));
        label->setText(QCoreApplication::translate("addtopicwindow", "\320\242\320\265\320\274\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("addtopicwindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("addtopicwindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("addtopicwindow", "\320\242\320\265\320\274\320\260 \320\264\320\273\321\217 \321\200\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("addtopicwindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("addtopicwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addtopicwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addtopicwindow: public Ui_addtopicwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOPICWINDOW_H
