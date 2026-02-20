#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class homePage;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void granted(QString username);
public slots:
    void on_signInButton_clicked();
    void on_signUpButton_clicked();

    void storeUser(QString username);

private:
//    void newAcc();
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
