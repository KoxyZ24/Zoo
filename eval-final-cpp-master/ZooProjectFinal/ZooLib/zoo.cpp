#include "zoo.h"
#include "zoomessage.h"
#include <QDebug>
#include "zoohabitat.h"
#include "zoohabitats.h"
#include <QVector>

Zoo *Zoo::m_zoo = nullptr;

Zoo::Zoo(const QString &name)
    : ZooObject(name),
      m_turnCount(ZooTurnCount::getInstance()),
      m_messages(new ZooMessages),
      m_budget(ZooBudget::getInstance()),
      m_zooAnimals(ZooAnimals::getInstance()),
      m_zooHabitats(ZooHabitats::getInstance())


{
    qDebug() << Q_FUNC_INFO << getName();
    zoostockList["seed"] = new ZooStock("seed", 60);
    zoostockList["meat"] = new ZooStock("meat", 570);
    qDebug() << zoostockList["seed"] << zoostockList["meat"];
}

Zoo *Zoo::getInstance(const QString &name)
{
    if(m_zoo == nullptr) {
        m_zoo = new Zoo(name);
    }
    return m_zoo;
}

Zoo::~Zoo()
{
    qDebug() << Q_FUNC_INFO;
    delete m_budget;
    delete m_zooAnimals;
    delete m_zooHabitats;
    delete m_turnCount;
    delete m_messages;

    StockList::iterator i;
    for(i = zoostockList.begin(); i != zoostockList.end(); ++i){
        qDebug() << Q_FUNC_INFO << i.value()->getName();
        delete i.value();
    }
}

                        //Budget


int Zoo::addMoney(int amount)
{
    return m_budget->addMoney(amount);
}

bool Zoo::removeMoney(int amount)
{
    return m_budget->removeMoney(amount);
}

int Zoo::getMoney()
{
    return m_budget->getMoney();
}

                        //STOCK

double Zoo::getFood(ZooStock *stock)
{
    return stock->getQuantity();
}

double Zoo::addFood(ZooStock *stock, double amount)
{
    stock->addQuantity(amount);
    return  stock->getQuantity();

}

bool Zoo::removeFood(ZooStock *stock, double amount)
{
    if (stock->getQuantity()>amount)
    {
        stock->removeQuantity(amount);
        return true;
    }
    return false;
}


                        //Message


void Zoo::createMessage(ZooMessage *message)
{
    m_messages->addMessage(message);
}

ZooMessages* Zoo::getZooMessages()
{
    return m_messages;
}

                        //Animals


bool Zoo::buyAnimals(ZooVendor *vendor, int nb, QString type)
{

            //On cherche un habitat viable


    HabitatList freeHabitat = m_zooHabitats->getNotFull(type);
    HabitatList enoughSpace;
    ZooHabitat *usedHabitat = nullptr;

        if(freeHabitat.length() == 0)
        {
            qDebug() << "Vous n'avez pas d'habitat pour" << type << "disponible";
            return false;
        }
        else{
            foreach(ZooHabitat *habitat, freeHabitat)
            {
                if((habitat->getFreeSpace())-nb >= 0)
                {
                    enoughSpace.append(habitat);
                }

            }
            usedHabitat = enoughSpace.first();
        }


            //On verifie le budget


        int budget = Zoo::getMoney();
        bool enoughMoney = false;

        if(type == "Poule"){

            if ((budget-=20 * nb) < 0){
                qDebug() << "Vous n'avez pas assez d'argent pour acheter ces poules";
            }
            else{
                enoughMoney = true;
            }
        }
        else if(type == "Tigre"){
            if ((budget-=1000 * nb) < 0){
                qDebug() << "Vous n'avez pas assez d'argent pour acheter ces tigres";
            }
            else{
                enoughMoney = true;
            }
        }
        else if(type == "Aigle"){
            if ((budget-=150 * nb) < 0){
                qDebug() << "Vous n'avez pas assez d'argent pour acheter ces aigles";
            }
            else{
                enoughMoney = true;
            }
        }


            //On envoie la demande d'achat au vendeur


    if (enoughMoney == true){
        vendor->sellAnimal(type, nb, usedHabitat);
        return true;
    }
    return false;
}

void Zoo::addAnimal(ZooAnimal *animal, ZooHabitat *habitat)
{
    m_zooAnimals->addAnimal(animal);
    habitat->addAnimal(animal);
}

QVector<ZooAnimal *> Zoo::getAnimalList()
{
    return m_zooAnimals->getAnimals();
}

void Zoo::animalsEat()
{
    m_zooAnimals->allAnimalsEat();
}



                //Habitat

HabitatList Zoo::getHabitatList()
{
    return m_zooHabitats->getHabitats();
}


bool Zoo::buyHabitats(ZooVendor *vendor, int nb, QString type)
{
    int budget = Zoo::getMoney();
    bool enoughMoney = false;

        if(type == "Poule"){

            if ((budget-=300 * nb) < 0){
                qDebug() << "Vous n'avez pas assez d'argent pour acheter ces habitats pour poules";
                return false;
            }
            else{
                enoughMoney = true;
            }
        }
        else if(type == "Tigre"){
            if ((budget-=2000 * nb) < 0){
                qDebug() << "Vous n'avez pas assez d'argent pour acheter ces habitats pour tigres";
                return false;
            }
            else{
                enoughMoney = true;
            }
        }
        else if(type == "Aigle"){
            if ((budget-2000 * nb) < 0){
                qDebug() << "Vous n'avez pas assez d'argent pour acheter ces habitats pour aigles";
                return false;
            }
            else{
                enoughMoney = true;
            }
        }

    if (enoughMoney == true){
        vendor->sellHabitat(type, nb);
    }
    return true;
}

void Zoo::addHabitat(ZooHabitat *habitat)
{
    m_zooHabitats->addHabitat(habitat);
}

//bool Zoo::sellHabitat(ZooHabitat *zooHabitat)
//{
//   j'en suis ici
//   ZooBudget::getInstance()->addMoney(ZooHabitats::getInstance()->getHabitats()->contains(habitat));
//return false;
//}

//bool Zoo::destroyHabitat(ZooHabitat *zooHabitat)
//{
//    return   false;
//}




                    //Stock

ZooStock* Zoo::getStockByString(QString type)
{
    ZooStock *returnStock = zoostockList[type];
    return returnStock;
}

                    //Turn Count

void Zoo::nextTurn()
{
    animalsEat();
    m_turnCount->nextTurn();
}
