/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QPushButton *addTopicButton;
    QPushButton *addTopicButton_2;
    QPushButton *addTopicButton_3;
    QPushButton *addTopicButton_4;
    QPushButton *addTopicButton_6;
    QPushButton *addTopicButton_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName("adminwindow");
        adminwindow->resize(800, 600);
        verticalLayout = new QVBoxLayout(adminwindow);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        widget = new QWidget(adminwindow);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        addTopicButton = new QPushButton(widget);
        addTopicButton->setObjectName("addTopicButton");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addTopicButton->sizePolicy().hasHeightForWidth());
        addTopicButton->setSizePolicy(sizePolicy);
        addTopicButton->setMinimumSize(QSize(200, 50));

        formLayout->setWidget(2, QFormLayout::LabelRole, addTopicButton);

        addTopicButton_2 = new QPushButton(widget);
        addTopicButton_2->setObjectName("addTopicButton_2");
        sizePolicy.setHeightForWidth(addTopicButton_2->sizePolicy().hasHeightForWidth());
        addTopicButton_2->setSizePolicy(sizePolicy);
        addTopicButton_2->setMinimumSize(QSize(200, 50));

        formLayout->setWidget(2, QFormLayout::FieldRole, addTopicButton_2);

        addTopicButton_3 = new QPushButton(widget);
        addTopicButton_3->setObjectName("addTopicButton_3");
        sizePolicy.setHeightForWidth(addTopicButton_3->sizePolicy().hasHeightForWidth());
        addTopicButton_3->setSizePolicy(sizePolicy);
        addTopicButton_3->setMinimumSize(QSize(200, 50));

        formLayout->setWidget(4, QFormLayout::LabelRole, addTopicButton_3);

        addTopicButton_4 = new QPushButton(widget);
        addTopicButton_4->setObjectName("addTopicButton_4");
        sizePolicy.setHeightForWidth(addTopicButton_4->sizePolicy().hasHeightForWidth());
        addTopicButton_4->setSizePolicy(sizePolicy);
        addTopicButton_4->setMinimumSize(QSize(200, 50));

        formLayout->setWidget(4, QFormLayout::FieldRole, addTopicButton_4);

        addTopicButton_6 = new QPushButton(widget);
        addTopicButton_6->setObjectName("addTopicButton_6");
        sizePolicy.setHeightForWidth(addTopicButton_6->sizePolicy().hasHeightForWidth());
        addTopicButton_6->setSizePolicy(sizePolicy);
        addTopicButton_6->setMinimumSize(QSize(200, 50));

        formLayout->setWidget(6, QFormLayout::LabelRole, addTopicButton_6);

        addTopicButton_5 = new QPushButton(widget);
        addTopicButton_5->setObjectName("addTopicButton_5");
        sizePolicy.setHeightForWidth(addTopicButton_5->sizePolicy().hasHeightForWidth());
        addTopicButton_5->setSizePolicy(sizePolicy);
        addTopicButton_5->setMinimumSize(QSize(200, 50));

        formLayout->setWidget(6, QFormLayout::FieldRole, addTopicButton_5);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacer_2);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(adminwindow);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(200, 50));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_4 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QCoreApplication::translate("adminwindow", "\320\234\320\265\320\275\321\216 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
        addTopicButton->setText(QCoreApplication::translate("adminwindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\202\320\265\320\274\321\203", nullptr));
        addTopicButton_2->setText(QCoreApplication::translate("adminwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\320\265\320\274\321\203", nullptr));
        addTopicButton_3->setText(QCoreApplication::translate("adminwindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        addTopicButton_4->setText(QCoreApplication::translate("adminwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        addTopicButton_6->setText(QCoreApplication::translate("adminwindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\200\320\276\320\273\320\270", nullptr));
        addTopicButton_5->setText(QCoreApplication::translate("adminwindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("adminwindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
