#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QDialog>

namespace Ui {
class signUpPage;
}

class signUpPage : public QDialog
{
    Q_OBJECT

public:
    explicit signUpPage(QWidget *parent = nullptr);
    ~signUpPage();
signals:
    void created(QString username, QString password);
private slots:
    void on_pushButton_clicked();
    void createAccount(QString username, QString password);

private:
    Ui::signUpPage *ui;
};

#endif // SIGNUPPAGE_H
