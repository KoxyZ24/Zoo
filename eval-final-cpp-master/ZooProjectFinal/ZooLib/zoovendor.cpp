#include "zoovendor.h"

#include "zoo.h"


ZooVendor::ZooVendor()
    : ZooObject("Vendor")
{

}
ZooVendor::~ZooVendor(){
    foreach (auto animal, vendoranimalList) { delete animal; }
}

ZooVendor *ZooVendor::getInstance()
{

    static ZooVendor *m_vendor;
    if(m_vendor == nullptr) {
        m_vendor = new ZooVendor();
    }
    return m_vendor;
}

Zoo *ZooVendor::getZoo(QString zooName)
{
    Zoo *m_zoo = Zoo::getInstance(zooName);
    return m_zoo;
}


    //Animal vendor part

void ZooVendor::RegisterAnimal(QString animalName, ZooVendor::CreateAnimalFn fn) {
    m_factoryMapAnimal[animalName] = fn;
}
AnimalList ZooVendor::CreateAnimal(int nbr, QString animalName, int fprice, float foodQty, QString foodStock) {


    int i=1;
//    int nb = nbr;
//    int price = fprice;
    while( i<nbr+1){
        // on recupere le pointeur sur fonction de la Map
        CreateAnimalFn fn = m_factoryMapAnimal[animalName];
        if (fn == nullptr) {
            throw AnimalException("Unable to create " + animalName);
        }
        // on appel la fonction désignée par le pointeur 'fn'
        ZooAnimal *animal = fn();

        // on assigne le type et on nomme l'objet


        animal->setType(animalName);
        animal->setName(QString(animalName + "#%1" ).arg(vendoranimalList.size()));
        animal->setPrice(fprice);
        animal->setGender(QString("male"));
        animal->setQtyFood(float (foodQty));
        animal->setFoodType(QString(foodStock));
        // on le rajoute à la liste des objets de la Factory
        vendoranimalList.append(animal);
        i++;
    }
    qDebug() << "Le vendeur a" << nbr << animalName
             << "pour" << fprice << "$ chacun.";
    return vendoranimalList;

}

AnimalList ZooVendor::getAnimalList() const{
    return vendoranimalList;
}

AnimalList ZooVendor::getZooAnimalList()
{
    m_zoo = getZoo("Tycoon");
    return *m_zooAnimalList = m_zoo->getAnimalList();
}

void ZooVendor::sellAnimal(QString type, int nb, ZooHabitat *habitat)
{
    m_zoo = getZoo("Tycoon");
    int stock=0;
    foreach(ZooAnimal *animal, vendoranimalList) {
        if(animal->getType() == type){
            stock+=1;
        }
    }
    if (stock<nb){
        qDebug() << "pas assez de"<< type << "en stock" ;
    }
    else{
        qDebug() << "Les" << nb << type << "sont installes dans" << habitat->getName();
        for(int i=1; i<=nb ; i++){
            foreach(ZooAnimal *animal, vendoranimalList) {
                if(animal->getType() == type)
                {
                    vendoranimalList.removeOne(animal);
                    m_zoo->removeMoney(animal->getPrice());
                    m_zoo->addAnimal(animal, habitat);
                    qDebug() << "Le vendeur a vendu" << animal->getName();
                    break;
                }
            }

        }

    }
}

    //Habitat vendor part

void ZooVendor::RegisterHabitat(QString habitatName, ZooVendor::CreateHabitatFm fm)
{
    m_factoryMapHabitat[habitatName] = fm;
}

HabitatList ZooVendor::CreateHabitat(int nbr, QString habitatName, int price, QString animalType, int capacity)
{
    int i=1;

    while ( i<nbr+1)
    {
        CreateHabitatFm fm = m_factoryMapHabitat[habitatName];
        if (fm == nullptr)
        {
            throw HabitatException("Unable to create " + habitatName);
        }
        m_zoo = getZoo("Tycoon");

                //      Arranger les noms de des habitats celons le nombre
                //      déjà present dans le zoo

//        HabitatList list = m_zoo->getHabitatList();
//        int nbrInZoo = 0;


//        foreach(ZooHabitat *habitat, vendorhabitatList)
//        {
//            if(habitat->getAnimalType() == animalType)
//            {
//                nbrInZoo+=1;
//            }
//        }


        ZooHabitat *habitat = fm();

        habitat->setName(QString(habitatName+ "#%1" ).arg(vendorhabitatList.size()));
        habitat->setPrice(price);
        habitat->setAnimalType(animalType);
        habitat->setCapacity(capacity);

        vendorhabitatList.append(habitat);
        i++;
    }
    qDebug() << "Le vendeur a"<< nbr << habitatName
             << "pour" << price << "$ chacun";
    return vendorhabitatList;
}

HabitatList ZooVendor::getHabitatList() const
{
    return vendorhabitatList;
}

HabitatList ZooVendor::getZooHabitatList()
{
    m_zoo = getZoo("Tycoon");
    return *m_zooHabitatList = m_zoo->getHabitatList();
}

void ZooVendor::sellHabitat(QString type, int nb)
{
    m_zoo = getZoo("Tycoon");
    int stock=0;
    foreach(ZooHabitat *habitat, vendorhabitatList)
    {
        if(habitat->getAnimalType() == type)
        {
            stock+=1;
        }
    }
    if (stock<nb)
    {
        qDebug() << "pas assez de" << type << "habitat en stock";
    }else{
        for(int i=1; i<=nb; i++)
        {
            foreach(ZooHabitat *habitat, vendorhabitatList)
            {
                if(habitat->getAnimalType() == type)
                {
                    vendorhabitatList.removeOne(habitat);
                    m_zoo->removeMoney(habitat->getPrice());
                    m_zoo->addHabitat(habitat);
                    qDebug() << "Le vendeur a vendu" << habitat->getName();
                    break;
                }
            }

        }
    }
}

void ZooVendor::sellFood(QString type, int nb)
{

}

