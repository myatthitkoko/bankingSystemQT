/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_homePage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *name;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *transfer;
    QPushButton *deposit;
    QPushButton *windraw;
    QPushButton *checkBal;
    QSpacerItem *verticalSpacer_2;
    QPushButton *logOut;

    void setupUi(QDialog *homePage)
    {
        if (homePage->objectName().isEmpty())
            homePage->setObjectName("homePage");
        homePage->resize(518, 284);
        verticalLayout_2 = new QVBoxLayout(homePage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(homePage);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        name = new QLabel(homePage);
        name->setObjectName("name");

        verticalLayout_2->addWidget(name);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        lineEdit = new QLineEdit(homePage);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(500, 0));

        verticalLayout_2->addWidget(lineEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        transfer = new QPushButton(homePage);
        transfer->setObjectName("transfer");

        gridLayout->addWidget(transfer, 2, 1, 1, 1);

        deposit = new QPushButton(homePage);
        deposit->setObjectName("deposit");

        gridLayout->addWidget(deposit, 0, 0, 1, 1);

        windraw = new QPushButton(homePage);
        windraw->setObjectName("windraw");

        gridLayout->addWidget(windraw, 0, 1, 1, 1);

        checkBal = new QPushButton(homePage);
        checkBal->setObjectName("checkBal");

        gridLayout->addWidget(checkBal, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        logOut = new QPushButton(homePage);
        logOut->setObjectName("logOut");

        verticalLayout->addWidget(logOut);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(homePage);
        QObject::connect(logOut, &QPushButton::clicked, homePage, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(homePage);
    } // setupUi

    void retranslateUi(QDialog *homePage)
    {
        homePage->setWindowTitle(QCoreApplication::translate("homePage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("homePage", "Welcome", nullptr));
        name->setText(QCoreApplication::translate("homePage", "User", nullptr));
        transfer->setText(QCoreApplication::translate("homePage", "Transfer", nullptr));
        deposit->setText(QCoreApplication::translate("homePage", "Deposit", nullptr));
        windraw->setText(QCoreApplication::translate("homePage", "Withdraw", nullptr));
        checkBal->setText(QCoreApplication::translate("homePage", "Check Balance", nullptr));
        logOut->setText(QCoreApplication::translate("homePage", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homePage: public Ui_homePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
