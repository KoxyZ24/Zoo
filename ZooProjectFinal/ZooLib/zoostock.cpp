#include "zoostock.h"


ZooStock *ZooStock::m_stock = nullptr;

ZooStock::ZooStock(const QString &name, double quantity)
    : ZooObject(name)
{
    setQuantity(quantity);
}

double ZooStock::getQuantity() const
{
    return quantity;
}

QString ZooStock::getType()
{
    return name;
}

void ZooStock::setQuantity(double value)
{
    quantity = value;
}

double ZooStock::addQuantity(double amount)
{
    quantity += amount;
    return quantity;
}

bool ZooStock::removeQuantity(double amount)
{
    if(quantity < amount){
        return false;
    }
    quantity -= amount;
    return true;
}

ZooStock *ZooStock::getInstance()
{
    if(m_stock == nullptr) {
        m_stock = new ZooStock("error", 0);
    }
    return m_stock;
}
