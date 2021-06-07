#ifndef ZOOITEMS_H
#define ZOOITEMS_H

#include "zooanimals.h"
#include "zoostock.h"


typedef QVector<ZooAnimal*> AnimalList;
typedef QVector<ZooHabitat*> HabitatList;
typedef QMap<QString, ZooStock*> StockList;

class ZooItems
{
    static ZooItems *m_zooItems;

public:

    ~ZooItems();
    static ZooItems *getInstance();

    AnimalList GetZooAnimals();
    AnimalList GetVendorAnimals();

    HabitatList GetZooHabitats();
    HabitatList GetVendorHabitats();

    StockList GetZooStock();
    StockList GetVendorStock();

private:
    ZooItems();

};

#endif // ZOOITEMS_H
