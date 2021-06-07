#include "zooanimals.h"
#include "zooanimal.h"


ZooAnimals *ZooAnimals::m_zooAnimals = nullptr;

ZooAnimals::ZooAnimals(): ZooObject("ZooAnimals")
{

}
ZooAnimals::~ZooAnimals()
{
    foreach (auto animal, zooAnimalList) { delete animal; }
}
ZooAnimals *ZooAnimals::getInstance()
{
    if(m_zooAnimals == nullptr) {
        m_zooAnimals = new ZooAnimals();
    }
    return m_zooAnimals;

}
AnimalList ZooAnimals::getAnimals()const
{
    return zooAnimalList;
}
void ZooAnimals::addAnimal(ZooAnimal *zooAnimal)
{
    zooAnimalList.append(zooAnimal);
}

void ZooAnimals::removeAnimal(ZooAnimal *zooAnimal)
{
    zooAnimalList.removeOne(zooAnimal);
}

void ZooAnimals::allAnimalsEat()
{
    foreach(ZooAnimal *animal, zooAnimalList) {
        animal->eat();
    }
}
//ZooHabitat *ZooAnimals::getParent() const
//{
//    return parent;
//}

//void ZooAnimals::setParent(ZooHabitat *value)
//{
//    parent = value;
//}
//        (ZooHabitat* parent)


    //:ZooObject("Habitat"), parent(parent)


