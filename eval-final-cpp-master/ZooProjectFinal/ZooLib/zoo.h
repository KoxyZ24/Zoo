#ifndef ZOO_H
#define ZOO_H

#include "zoobudget.h"
#include "zooobject.h"
#include "zooturncount.h"
#include "zoostock.h"
#include "zoomessages.h"
#include "zoohabitat.h"
#include "zoohabitats.h"
#include "zoovendor.h"
#include "animalexception.h"
#include "habitatexception.h"
#include "zooanimal.h"
#include "zooanimals.h"
#include <QMap>
#include <QVector>

typedef QMap<QString, ZooStock*> StockList;
typedef QVector<ZooAnimal *> AnimalList;
typedef QVector<ZooHabitat *> HabitatList;

class Zoo : public ZooObject
{

    ZooTurnCount *m_turnCount;
    ZooMessages *m_messages;
    ZooBudget *m_budget;
    ZooAnimals *m_zooAnimals;
    StockList zoostockList;
    static Zoo *m_zoo;
    ZooHabitats *m_zooHabitats;


public:
        //Instanciation
    static Zoo *getInstance(const QString &name = "");
    ~Zoo();

        //MONEY
    int addMoney(int amount);
    bool removeMoney(int amount);
    int getMoney();

        //STOCK
    double getFood(ZooStock *stock);
    double addFood(ZooStock *stock, double amount);
    bool removeFood(ZooStock *stock, double amount);

        //MESSAGES
    void createMessage(ZooMessage *message);
    ZooMessages* getZooMessages();

        //ANIMALS
    bool buyAnimals(ZooVendor *vendor, int nb, QString type);
    void addAnimal(ZooAnimal *animal, ZooHabitat *habitat);
    AnimalList getAnimalList();

        //ANIMALS ACTION
    void animalsEat();

        //HABITATS
    bool buyHabitats(ZooVendor *vendor, int nb, QString type);
    void addHabitat(ZooHabitat *habitat);
    bool sellHabitat(ZooHabitat* zooHabitat);
    bool destroyHabitat(ZooHabitat* zooHabitat);
    HabitatList getHabitatList();

    ZooStock *getStockByString(QString type);

        //TURNCOUNT
    void nextTurn();


private:
    Zoo(const QString &name);
};

#endif // ZOO_H
