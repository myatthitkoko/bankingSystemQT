#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <signuppage.h>
#include <QFile>
#include <QTextStream>
#include <homepage.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(this, &MainWindow::granted, this, &MainWindow::storeUser);
    //connect(ui->actionSign_Up, &QAction::triggered, this, &MainWindow::newAcc);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
void MainWindow::newAcc()
{
    signUpPage dialog;
    dialog.exec();
}
*/

void MainWindow::on_signInButton_clicked()
{
    QString Username = (ui->username->text());
    QString Password = (ui->password->text());
    QFile CSVFile("Storage.csv");
    if (CSVFile.open(QIODevice::ReadWrite))
    {
        QTextStream Stream(&CSVFile);

        while (Stream.atEnd() == false)
        {
            QString LineData = Stream.readLine();
            QStringList Data = LineData.split(",");
            if (Username == Data.at(0))
            {
                if (Password == Data.at(1))
                {
                    ui->Access->setText("Access Granted");
                    this->close();
                    emit granted(Username);
                }
                else
                {
                    ui->Access->setText("Access Denied");
                }
            }
        }
    }
}

void MainWindow::on_signUpButton_clicked()
{
    signUpPage dialog;
    dialog.exec();
}

void MainWindow::storeUser(QString username)
{
    QFile file("username.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }
    QTextStream out(&file);
    out << username;
    file.close();

    homePage dialog;
    dialog.exec();
}

