#include "statspage.h"
#include "ui_statspage.h"
#include "zoo.h"
#include "mainwindow.h"

statsPage::statsPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::statsPage)
{
    ui->setupUi(this);
    setFixedSize(400,400);
}

statsPage::~statsPage()
{
    delete ui;
}

void statsPage::on_btn_validateZooName_clicked()
{
    QString newName = ui->input_changeZooName->text();
    Zoo *myZoo = Zoo::getInstance();
    myZoo->setName(newName);
    emit validateName(newName);

}
