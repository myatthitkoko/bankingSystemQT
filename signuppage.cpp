#include "signuppage.h"
#include "ui_signuppage.h"
#include <QFile>
#include <QTextStream>

signUpPage::signUpPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signUpPage)
{
    ui->setupUi(this);
    QObject::connect(this, &signUpPage::created, this, &signUpPage::createAccount);
}

signUpPage::~signUpPage()
{
    delete ui;
}


void signUpPage::on_pushButton_clicked()
{
    ui->notification->setText("");
    QString username = (ui->newUser->text());
    QString password = (ui->newPassword->text());
    if (username == "" || password == "") {
        ui->notification->setText("Username or Password cannot be blank. ");
    } else {
        QFile CSVFile("Storage.csv");
        if (CSVFile.open(QIODevice::ReadWrite))
        {
            QTextStream Stream(&CSVFile);
            bool taken = false;
            while (Stream.atEnd() == false)
            {
                QString LineData = Stream.readLine();
                QStringList Data = LineData.split(",");
                if (username == Data.at(0))
                {
                    ui->notification->setText("Username is already taken. Try again. ");
                    break;
                }
            }
            QString noti = ui->notification->text();
            if (noti != "Username is already taken. Try again. ") {
                emit created(username, password);
            }
        }
    }
}

void signUpPage::createAccount(QString username, QString password)
{
    QFile file("Storage.csv");
    if (!file.open(QIODevice::Append | QIODevice::Text))
    {
        return;
    }

    QTextStream out(&file);
    QString info = "\n" + username + "," + password + ",0";
    out << info;
    file.close();
    ui->notification->setText("Your account has been created. Please close this window to log in.");
}

