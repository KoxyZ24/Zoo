#ifndef ZOOVENDOR_H
#define ZOOVENDOR_H


#include "animalexception.h"
#include "zooanimal.h"
#include "zooanimals.h"
#include "zoohabitat.h"
#include "zoohabitats.h"
#include "zoostock.h"

class Zoo;

class ZooVendor : public ZooObject {

    typedef ZooAnimal *(*CreateAnimalFn)();
    QMap<QString, CreateAnimalFn> m_factoryMapAnimal;
    AnimalList               vendoranimalList;

    typedef ZooHabitat *(*CreateHabitatFm)();
    QMap<QString, CreateHabitatFm> m_factoryMapHabitat;
    HabitatList              vendorhabitatList;

    StockList                vendorStockList;


    Zoo *m_zoo;
    AnimalList *m_zooAnimalList;
    HabitatList *m_zooHabitatList;

public:

        ~ZooVendor();
        static ZooVendor *getInstance();

        void RegisterAnimal(QString animalName, CreateAnimalFn fn);
        AnimalList CreateAnimal(int nbr, QString animalName, int fprice, float foodQty, QString foodStock);
        AnimalList getAnimalList()const;
        AnimalList getZooAnimalList();
        void sellAnimal(QString type, int nb, ZooHabitat *habitat);

        void RegisterHabitat(QString habitatName, CreateHabitatFm fm);
        HabitatList CreateHabitat(int nbr, QString habitatName, int price, QString animalType, int capacity);
        HabitatList getHabitatList()const;
        HabitatList getZooHabitatList();
        void sellHabitat(QString type, int nb);

        void sellFood(QString type, int nb);

private:

        Zoo *getZoo(QString zooName);
        ZooVendor();
};


#endif // ZOOVENDOR_H
