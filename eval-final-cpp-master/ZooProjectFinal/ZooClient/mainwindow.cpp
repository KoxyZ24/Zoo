#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamepage.h"
#include "zoo.h"

#include <QDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setFixedSize(800,500);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{


    if(ui->input_zooName->text() != nullptr){
        Zoo *myZoo = Zoo::getInstance(ui->input_zooName->text());
        myZoo->addMoney(ui->input_moneyAmount->value());

        gamePage *gameWindow = new gamePage();
        this->close();
        gameWindow->show();

    }
    else{
        ui->label_error->setText("Veuillez entrer un nom valide");
        ui->label_error->setStyleSheet("QLabel{color: red;}");
    }

}
