#include "zoobudget.h"
#include "zoomessage.h"
#include "zoo.h"
#include <QDebug>

ZooBudget *ZooBudget::m_budget = nullptr;

ZooBudget::ZooBudget(const QString &name)
    : ZooObject(name)
    , money(0)
{
    qDebug() << Q_FUNC_INFO << getName();
}

ZooBudget::~ZooBudget()
{

}

int ZooBudget::addMoney(int amount)
{
    money += amount;
    return money;
}

bool ZooBudget::removeMoney(int amount)
{
    if(money < amount){
        Zoo *myZoo = Zoo::getInstance();
        myZoo->createMessage(new ZooMessage(ZooErrorLevel::ERROR, "Vous n'avez pas assez d'argent", this));
        return false;
    }
    money -= amount;
    return true;
}

int ZooBudget::getMoney()
{
    return money;
}

void ZooBudget::setMoney(int value)
{
    money = value;
}


ZooBudget *ZooBudget::getInstance()
{
    if(m_budget == nullptr) {
        m_budget = new ZooBudget("Mon budget");
    }
    return m_budget;
}
