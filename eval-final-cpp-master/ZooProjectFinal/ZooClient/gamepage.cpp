#include "gamepage.h"
#include "ui_gamepage.h"
#include "zoo.h"
#include "statspage.h"

#include <QDebug>
#include <QWidget>
#include <QVector>
#include <QApplication>
#include <QDesktopWidget>
#include <QObject>

gamePage::gamePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gamePage)
{
    this->setFixedSize(1000, 625);
    ui->setupUi(this);
    ui->label_zooName->setText(Zoo::getInstance()->getName());

     // Center the window
    QSize availableSize = qApp->desktop()->availableGeometry().size();
    int width = availableSize.width()/2 - this->width()/2;
    int height = availableSize.height()/2 - this->height()/2;

    Zoo *zoo = Zoo::getInstance();
    ui->label_money->setText("Money : " + QString::number(zoo->getMoney()));
    this->move(width,height);
    ui->scrollArea_history->setWidgetResizable(true);
}

gamePage::~gamePage()
{
    delete ui;
}

void gamePage::on_btn_showStats_clicked()
{
    qDebug() << "Opened stats page";

    statsPage *statsWindow = new statsPage();
    connect(statsWindow, SIGNAL(validateName(QString)), this, SLOT(changeName(QString)));
    statsWindow->show();
    statsWindow->move(0, qApp->desktop()->availableGeometry().size().height()/2 - statsWindow->height()/2 );
}

void gamePage::changeName(QString newName){
    Zoo::getInstance()->setName(newName);
    qDebug() << Zoo::getInstance()->getName() << " est le nouveau nom du ZOO";
    ui->label_zooName->setText(newName); // IL FAUT LE SORTIRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
}

void gamePage::updateMessagesDisplay()
{
    Zoo *zoo = Zoo::getInstance();
    QVector<ZooMessage*> messages = zoo->getZooMessages()->getMessages();
    QGridLayout * layout = new QGridLayout();

    // delete all the error messages shown before showing the new list
    if(messages.length() > 0){
        qDeleteAll(ui->scrollAreaHistoryContent->findChildren<QWidget*>("", Qt::FindDirectChildrenOnly));
    }

    for(int i = 0; i < messages.length() ; i++){
        QLabel *label = new QLabel(messages.at(i)->getMessage());
        ui->scrollAreaHistoryContent->layout()->addWidget(label);
    }
    if(!ui->scrollAreaHistoryContent->layout()){
        ui->scrollAreaHistoryContent->setLayout(layout);
    }
}

void gamePage::updateDisplay()
{
    updateBudgetDisplay();
    updateMessagesDisplay();
}

void gamePage::on_btn_spend_clicked()
{
    Zoo *zoo = Zoo::getInstance();
    zoo->removeMoney(300);
    updateDisplay();
}
void gamePage::updateBudgetDisplay(){
    Zoo *zoo = Zoo::getInstance();
    ui->label_money->setText("Money : " + QString::number(zoo->getMoney()));
}

void gamePage::on_btn_show_clicked()
{
    if(ui->scrollArea_history->isHidden()){
        ui->scrollArea_history->show();
    } else {
        ui->scrollArea_history->hide();
    }
}

void gamePage::on_btn_buyHabitat_clicked()
{
}

void gamePage::on_btn100Meat_clicked()
{

    Zoo *zoo = Zoo::getInstance();
    if (zoo->getMoney()<2000){
    } else {
        zoo->removeMoney(2000);

    }

}
