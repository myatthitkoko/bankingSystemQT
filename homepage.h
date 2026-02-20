#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>

namespace Ui {
class homePage;
}

class homePage : public QDialog
{
    Q_OBJECT

public:
    explicit homePage(QWidget *parent = nullptr);
    ~homePage();
signals:
    void refresh();
public slots:
    void assignValues();

private slots:
    void on_checkBal_clicked();

    void on_deposit_clicked();

    void on_windraw_clicked();

    void on_transfer_clicked();

private:
    Ui::homePage *ui;
};

#endif // HOMEPAGE_H
