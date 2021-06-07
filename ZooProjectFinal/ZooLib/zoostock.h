#ifndef ZOOSTOCK_H
#define ZOOSTOCK_H

#include "zooobject.h"



class ZooStock : public ZooObject
{
    const QString name;
    double quantity;   
    static ZooStock *m_stock;

public:

    ZooStock(const QString &name, double quantity);
    static ZooStock *getInstance();

    void setQuantity(double value);
    double getQuantity() const;
    QString getType();

    double addQuantity(double amount);
    bool removeQuantity(double amount);
};

#endif // ZOOSTOCK_H
