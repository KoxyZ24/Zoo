#include "zooanimal.h"
#include "zoo.h"
#include "zoohabitat.h"

ZooAnimal::ZooAnimal(ZooAnimals* parent): ZooObject("ZooAnimal"), parent(parent)
{

}
ZooAnimal::~ZooAnimal() {
    qDebug() << "Elimination de" <<  getName() << ": Equarrissage en cours...";
}

ZooAnimals *ZooAnimal::getParent() const
{
    return parent;
}

QString ZooAnimal::getName() {
    return _name;
}

void ZooAnimal::setName(QString name) {
    _name = name;
}

QString ZooAnimal::getType() const {
    return _type;
}

void ZooAnimal::setType(const QString &type) {
    _type = type;
}
QString ZooAnimal::getGender() const {
    return _gender;
}

void ZooAnimal::setGender(const QString &gender) {
    _gender = gender;
}

int ZooAnimal::getPrice() {
    return _price;
}

void ZooAnimal::setPrice(int price) {
    _price = price;
}

float ZooAnimal::getQtyFood()
{
    return _qteFood;
}

void ZooAnimal::setQtyFood(float qteFood)
{
    _qteFood = qteFood;
}

QString ZooAnimal::getFoodType()
{
    return _foodType;
}

ZooStock *ZooAnimal::getZooStock()
{
    Zoo* m_zoo = Zoo::getInstance("Tycoon");
    return m_foodStock = m_zoo->getStockByString(_foodType);
}

void ZooAnimal::setFoodType(const QString &foodType)
{
    _foodType = foodType;
}

bool ZooAnimal::eat()
{

    getZooStock();
    bool hasEaten = m_foodStock->removeQuantity(double (_qteFood*30));
    if (hasEaten == true)
    {
        qDebug() << _name << "s'est nourri de" << _qteFood*30 << _foodType;
    }else{
        qDebug() << _name << "ne s'est pas nourri";
    }
    return hasEaten;
}

void ZooAnimal::die()
{
    delete this;
}

void ZooAnimal::setParent(ZooAnimals *value)
{
    parent = value;
}

//ZooHabitat *ZooAnimal::getHabitat()
//{
//    return parent->getParent();
//}
