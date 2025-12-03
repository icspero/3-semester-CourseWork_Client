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
#include <QtWidgets/QDialog>
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
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addtopicwindow)
    {
        if (addtopicwindow->objectName().isEmpty())
            addtopicwindow->setObjectName("addtopicwindow");
        addtopicwindow->resize(800, 600);
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

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(500, 25));

        verticalLayout_2->addWidget(textEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2, 0, Qt::AlignHCenter);

        descEdit = new QTextEdit(widget);
        descEdit->setObjectName("descEdit");
        sizePolicy1.setHeightForWidth(descEdit->sizePolicy().hasHeightForWidth());
        descEdit->setSizePolicy(sizePolicy1);
        descEdit->setMinimumSize(QSize(500, 110));

        verticalLayout_2->addWidget(descEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3, 0, Qt::AlignHCenter);

        theoryEdit = new QTextEdit(widget);
        theoryEdit->setObjectName("theoryEdit");
        sizePolicy1.setHeightForWidth(theoryEdit->sizePolicy().hasHeightForWidth());
        theoryEdit->setSizePolicy(sizePolicy1);
        theoryEdit->setMinimumSize(QSize(500, 200));

        verticalLayout_2->addWidget(theoryEdit);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        widget_2 = new QWidget(addtopicwindow);
        widget_2->setObjectName("widget_2");
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(200, 50));

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(200, 50));

        verticalLayout_3->addWidget(pushButton_2);


        verticalLayout->addWidget(widget_2, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(addtopicwindow);

        QMetaObject::connectSlotsByName(addtopicwindow);
    } // setupUi

    void retranslateUi(QDialog *addtopicwindow)
    {
        addtopicwindow->setWindowTitle(QCoreApplication::translate("addtopicwindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\265\320\274\321\213", nullptr));
        label->setText(QCoreApplication::translate("addtopicwindow", "\320\242\320\265\320\274\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("addtopicwindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("addtopicwindow", "\320\242\320\265\320\276\321\200\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("addtopicwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addtopicwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addtopicwindow: public Ui_addtopicwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOPICWINDOW_H
