#ifndef ANIMAUX_H
#define ANIMAUX_H


#include "zooobject.h"
#include <QVector>



class ZooAnimal;
class ZooHabitat;
typedef QVector<ZooAnimal*> AnimalList;

class ZooAnimals : public ZooObject
{
    static ZooAnimals *m_zooAnimals;
    AnimalList zooAnimalList;
//    ZooHabitat* parent = nullptr;
public:
    ~ZooAnimals();
    static ZooAnimals *getInstance();

    AnimalList getAnimals()const;
    void addAnimal(ZooAnimal *zooAnimal);
    void removeAnimal(ZooAnimal *zooAnimal);

    void allAnimalsEat();
//            (ZooHabitat* parent);
//    ZooHabitat *getParent() const;
//    void setParent(ZooHabitat *value);
private:
    ZooAnimals();

};

#endif // ANIMAUX_H
