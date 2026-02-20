/********************************************************************************
** Form generated from reading UI file 'homePage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_signInPage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *signUp;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *signIn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *username;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Access;

    void setupUi(QDialog *signInPage)
    {
        if (signInPage->objectName().isEmpty())
            signInPage->setObjectName("signInPage");
        signInPage->resize(618, 465);
        verticalLayout = new QVBoxLayout(signInPage);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        signUp = new QPushButton(signInPage);
        signUp->setObjectName("signUp");

        horizontalLayout_6->addWidget(signUp);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_6, 9, 1, 1, 1);

        label = new QLabel(signInPage);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(label, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        signIn = new QPushButton(signInPage);
        signIn->setObjectName("signIn");

        horizontalLayout->addWidget(signIn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 5, 1);

        label_3 = new QLabel(signInPage);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(label_3, 8, 1, 1, 1);

        password = new QLineEdit(signInPage);
        password->setObjectName("password");
        password->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(password, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        label_2 = new QLabel(signInPage);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 50));

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        username = new QLineEdit(signInPage);
        username->setObjectName("username");
        username->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(username, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 5, 1);

        Access = new QLabel(signInPage);
        Access->setObjectName("Access");

        gridLayout->addWidget(Access, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(signInPage);

        QMetaObject::connectSlotsByName(signInPage);
    } // setupUi

    void retranslateUi(QDialog *signInPage)
    {
        signInPage->setWindowTitle(QCoreApplication::translate("signInPage", "Sign In", nullptr));
        signUp->setText(QCoreApplication::translate("signInPage", "SIgn up", nullptr));
        label->setText(QCoreApplication::translate("signInPage", "Username", nullptr));
        signIn->setText(QCoreApplication::translate("signInPage", "Sign in", nullptr));
        label_3->setText(QCoreApplication::translate("signInPage", "New user?", nullptr));
        label_2->setText(QCoreApplication::translate("signInPage", "Password", nullptr));
        Access->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signInPage: public Ui_signInPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
