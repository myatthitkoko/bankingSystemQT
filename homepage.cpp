#include "homepage.h"
#include "ui_homepage.h"
#include <QFile>
#include <QTextStream>

homePage::homePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::homePage)
{
    ui->setupUi(this);
    QObject::connect(this, &homePage::refresh, this, &homePage::on_checkBal_clicked);
}

homePage::~homePage()
{
    delete ui;
}

void homePage::assignValues()
{
    QFile userFile("username.txt");
    if (userFile.open(QIODevice::ReadWrite))
    {
        QTextStream in(&userFile);
        while (!in.atEnd())
        {
            QString username = in.readLine();
            ui->name->setText(username);
        }
    }

}

void homePage::on_checkBal_clicked()
{
    QFile userFile("username.txt");
    if (userFile.open(QIODevice::ReadWrite))
    {
        QTextStream in(&userFile);
        while (!in.atEnd())
        {
            QString username = in.readLine();
            ui->name->setText(username);
            QFile CSVFile("Storage.csv");
            if (CSVFile.open(QIODevice::ReadWrite))
            {
                QTextStream Stream(&CSVFile);

                while (Stream.atEnd() == false)
                {
                    QString LineData = Stream.readLine();
                    QStringList Data = LineData.split(",");
                    if (username == Data.at(0))
                    {
                        QString balance = Data.at(2);
                        ui->name->setText(balance);
                    }
                }
            }
        }
    }
}


void homePage::on_deposit_clicked()
{
    QFile file("Temp.csv");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }
    file.close();
    ui->name->setText("Enter the amount to deposit. Then press deposit again. ");
    float amount = ui->lineEdit->text().toFloat();
    if ((ui->lineEdit->text()) != "")
    {
        if (amount <= 0) {
            ui->name->setText("Enter a valid amount. ");
        } else
        {
            QFile userFile("username.txt");
            if (userFile.open(QIODevice::ReadWrite))
            {
                QTextStream in(&userFile);
                while (!in.atEnd())
                {
                    QString username = in.readLine();
                    ui->name->setText(username);
                }
            }
            userFile.close();
            QString username = ui->name->text();
            QFile CSVFile("Storage.csv");
            if (CSVFile.open(QIODevice::ReadWrite))
            {
                QTextStream Stream(&CSVFile);
                while (Stream.atEnd() == false)
                {
                    QString LineData = Stream.readLine();
                    QStringList Data = LineData.split(",");
                    if (username == Data.at(0))
                    {
                        float balance = Data.at(2).toFloat();
                        balance = balance + amount;
                        QString updated = QString::number(balance);
                        LineData = Data.at(0) + "," + Data.at(1) + "," + updated;
                    }
                    QFile file("Temp.csv");
                    if (!file.open(QIODevice::Append | QIODevice::Text))
                    {
                        return;
                    }

                    QTextStream out(&file);
                    out << LineData << "\n";
                    file.close();
                }
            }
            QFile file("Temp.csv");
            if (file.open(QIODevice::ReadWrite))
            {
                QTextStream Stream(&file);
                while (Stream.atEnd() == false)
                {
                    QString LineData = Stream.readLine();
                    QFile fileUpdate("Storage.csv");
                    if (!fileUpdate.open(QIODevice::Append | QIODevice::Text))
                    {
                        return;
                    }

                    QTextStream out(&fileUpdate);
                    out << LineData << "\n";
                    fileUpdate.close();
                }
            }
            file.close();
            emit refresh();
        }
    }
}


void homePage::on_windraw_clicked()
{
    QFile file("Temp.csv");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }
    file.close();
    ui->name->setText("Enter the amount to withdraw. Then press withdraw again. ");
    float amount = ui->lineEdit->text().toFloat();
    if ((ui->lineEdit->text()) != "")
    {
        if (amount <= 0) {
            ui->name->setText("Enter a valid amount. ");
        } else
        {
            QFile userFile("username.txt");
            if (userFile.open(QIODevice::ReadWrite))
            {
                QTextStream in(&userFile);
                while (!in.atEnd())
                {
                    QString username = in.readLine();
                    ui->name->setText(username);
                }
            }
            userFile.close();
            QString username = ui->name->text();
            QFile CSVFile("Storage.csv");
            if (CSVFile.open(QIODevice::ReadWrite))
            {
                QTextStream Stream(&CSVFile);
                while (Stream.atEnd() == false)
                {
                    QString LineData = Stream.readLine();
                    QStringList Data = LineData.split(",");
                    if (username == Data.at(0))
                    {
                        float balance = Data.at(2).toFloat();
                        balance = balance - amount;
                        QString updated = QString::number(balance);
                        LineData = Data.at(0) + "," + Data.at(1) + "," + updated;
                    }
                    QFile file("Temp.csv");
                    if (!file.open(QIODevice::Append | QIODevice::Text))
                    {
                        return;
                    }

                    QTextStream out(&file);
                    out << LineData << "\n";
                    file.close();
                }
            }
            QFile file("Temp.csv");
            if (file.open(QIODevice::ReadWrite))
            {
                QTextStream Stream(&file);
                while (Stream.atEnd() == false)
                {
                    QString LineData = Stream.readLine();
                    QFile fileUpdate("Storage.csv");
                    if (!fileUpdate.open(QIODevice::Append | QIODevice::Text))
                    {
                        return;
                    }

                    QTextStream out(&fileUpdate);
                    out << LineData << "\n";
                    fileUpdate.close();
                }
            }
            file.close();
            emit refresh();
        }
    }
}


void homePage::on_transfer_clicked()
{
    ui->name->setText("Unavailable at the moment.");
}

