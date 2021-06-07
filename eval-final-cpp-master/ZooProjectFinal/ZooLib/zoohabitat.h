#ifndef HABITAT_H
#define HABITAT_H

#include "zoohabitats.h"
#include "zooobject.h"
#include "zooanimal.h"
#include "zooanimals.h"
#include <QVector>


typedef ZooHabitat *(*CreateHabitatFm)();
typedef QVector<ZooAnimal*> AnimalList;

class Zoo;
class ZooAnimals;

class ZooHabitat : public ZooObject
{
    int _price;
    int _capacity;
    QString _animalType;
    QString _habitatName;
    AnimalList zooAnimalList;

    ZooHabitats* parent = nullptr;

public:
    ZooHabitat(ZooHabitats* parent = nullptr);
    virtual ~ZooHabitat();

    virtual ZooHabitats *getParent() const;
    virtual void setParent(ZooHabitats *value);

    virtual int getPrice() const;
    virtual void setPrice(int value);

    virtual QString getAnimalType() const;
    virtual void setAnimalType(const QString &type);

    virtual int getCapacity() const;
    virtual void setCapacity(int value);

    virtual QString getName() const;
    virtual void setName(const QString &name);

    virtual int getFreeSpace();

    virtual AnimalList getAnimals() const;
    virtual void addAnimal(ZooAnimal *animal);
    virtual void removeAnimal(ZooAnimal *animal);

};

// On crée le template pour la fabrication automatique des classes animales
template <class T>
class TZooHabitat : public ZooHabitat {
  public:
    static ZooHabitat *Create() {
        return new T;
    }
};
    #define CREATE_ZOOHABITAT_CLASS(habitat) \
    class habitat : public TZooHabitat<habitat>{};

    CREATE_ZOOHABITAT_CLASS(HabitatPoule);
    CREATE_ZOOHABITAT_CLASS(HabitatAigle);
    CREATE_ZOOHABITAT_CLASS(HabitatTigre);

#endif // HABITAT_H
