#include "zoohabitat.h"
#include "zoo.h"

ZooHabitats *ZooHabitat::getParent() const
{
    return parent;
}

void ZooHabitat::setParent(ZooHabitats *value)
{
    parent = value;
}

int ZooHabitat::getPrice() const
{
    return _price;
}

void ZooHabitat::setPrice(int value)
{
    _price = value;
}


QString ZooHabitat::getAnimalType() const
{
    return _animalType;
}

void ZooHabitat::setAnimalType(const QString &type)
{
    _animalType = type;
}

int ZooHabitat::getCapacity() const
{
    return _capacity;
}

void ZooHabitat::setCapacity(int value)
{
    _capacity = value;
}

QString ZooHabitat::getName() const
{
    return _habitatName;
}

void ZooHabitat::setName(const QString &name)
{
    _habitatName = name;
}

int ZooHabitat::getFreeSpace()
{

    return _capacity - (zooAnimalList.length)();
}

            //Operation Liste

AnimalList ZooHabitat::getAnimals() const
{
    return zooAnimalList;
}

void ZooHabitat::addAnimal(ZooAnimal *animal)
{
    zooAnimalList.append(animal);
}

void ZooHabitat::removeAnimal(ZooAnimal *animal)
{
    zooAnimalList.removeOne(animal);
}


            //Constructeur-Destructeur

ZooHabitat::ZooHabitat(ZooHabitats* parent)
    :ZooObject("Habitats"), parent(parent)
{
    
}

ZooHabitat::~ZooHabitat()
{
    qDebug() << "Destroying" << getName();
}
