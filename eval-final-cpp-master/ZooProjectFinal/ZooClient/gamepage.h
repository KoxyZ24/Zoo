#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include "statspage.h"

#include <QMainWindow>

namespace Ui {
class gamePage;
}

class gamePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit gamePage(QWidget *parent = nullptr);
    bool buySellState = 0; // Buy = 0 Sell = 1
    void updateBudgetDisplay();
    ~gamePage();


public slots:
    void changeName(QString newName);
    void updateMessagesDisplay();
    void updateDisplay();

private slots:
    void on_btn_showStats_clicked();

    void on_btn_spend_clicked();

    void on_btn_show_clicked();

    void on_btn_buyHabitat_clicked();

    void on_btn100Meat_clicked();

private:
    Ui::gamePage *ui;

//    statsPage* statsWindow;
};

#endif // GAMEPAGE_H
