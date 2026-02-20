/********************************************************************************
** Form generated from reading UI file 'signuppage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPPAGE_H
#define UI_SIGNUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_signUpPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *notification;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *newUser;
    QLabel *label;
    QLineEdit *newPassword;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *signUpPage)
    {
        if (signUpPage->objectName().isEmpty())
            signUpPage->setObjectName("signUpPage");
        signUpPage->resize(614, 288);
        verticalLayout_2 = new QVBoxLayout(signUpPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        notification = new QLabel(signUpPage);
        notification->setObjectName("notification");
        notification->setMinimumSize(QSize(0, 50));
        notification->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(notification);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(signUpPage);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        newUser = new QLineEdit(signUpPage);
        newUser->setObjectName("newUser");

        verticalLayout->addWidget(newUser);

        label = new QLabel(signUpPage);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        newPassword = new QLineEdit(signUpPage);
        newPassword->setObjectName("newPassword");
        newPassword->setMinimumSize(QSize(500, 0));

        verticalLayout->addWidget(newPassword);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(signUpPage);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(signUpPage);

        QMetaObject::connectSlotsByName(signUpPage);
    } // setupUi

    void retranslateUi(QDialog *signUpPage)
    {
        signUpPage->setWindowTitle(QCoreApplication::translate("signUpPage", "Sign Up", nullptr));
        notification->setText(QString());
        label_2->setText(QCoreApplication::translate("signUpPage", "New username", nullptr));
        label->setText(QCoreApplication::translate("signUpPage", "New password", nullptr));
        pushButton->setText(QCoreApplication::translate("signUpPage", "Create an account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUpPage: public Ui_signUpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
