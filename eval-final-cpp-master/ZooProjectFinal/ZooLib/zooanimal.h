#ifndef ANIMAL_H
#define ANIMAL_H

#include "zooanimals.h"
#include "zooobject.h"
#include "zoostock.h"
#include <QDebug>


typedef ZooAnimal *(*CreateAnimalFn)();
typedef QMap<QString, ZooStock*> StockList;

class Zoo;
class ZooHabitat;

class ZooAnimal : public ZooObject
{


    ZooAnimals* parent = nullptr;
    QString _name;
    QString _type;
    int _price;
    float _qteFood;
    QString _gender;
    Zoo *m_zoo;
    ZooStock *m_foodStock;
    QString _foodType;


public:
    ZooAnimal(ZooAnimals* parent = nullptr);
    virtual ~ZooAnimal();

    // Le Nom de l'animal
            virtual QString getName();
            virtual void setName(QString name);
    //le Type d'animal
            virtual QString getType() const;
            virtual void setType(const QString &type);
    //le sexe de l'annimal
            virtual QString getGender() const;
            virtual void setGender(const QString &gender);
    //le prix de l'animal
            virtual int getPrice();
            virtual void setPrice(int price);
    //la Qte de nourriture de l'animal
            virtual float getQtyFood();
            virtual void setQtyFood(float qteFood);
    //le type de nourriture consomer
            virtual QString getFoodType();
            virtual ZooStock *getZooStock();
            virtual void setFoodType(const QString &foodType);


    // Manger
            virtual bool eat();
    // Mourir ("explicitation")
            virtual void die();


    ZooAnimals *getParent() const;
    void setParent(ZooAnimals *value);
    ZooHabitat* getHabitat();
};


// On crée le template pour la fabrication automatique des classes animales
template <class T>
class TZooAnimal : public ZooAnimal {
  public:
    static ZooAnimal *Create() {
        return new T;
    }
};

    #define CREATE_ZOOANIMAL_CLASS(animal) \
    class animal : public TZooAnimal<animal>{};

    CREATE_ZOOANIMAL_CLASS(Poule);
    CREATE_ZOOANIMAL_CLASS(Aigle);
    CREATE_ZOOANIMAL_CLASS(Tigre);

#endif // ANIMAL_H
