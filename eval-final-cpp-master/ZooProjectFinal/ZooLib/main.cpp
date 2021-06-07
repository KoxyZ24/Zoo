#include <QCoreApplication>
#include "zoo.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Zoo* zoo = Zoo::getInstance("Tycoon");
    zoo -> Zoo::addMoney(10000);

    ZooVendor *vendor = ZooVendor::getInstance();



    vendor->RegisterHabitat("HabitatPoule", &HabitatPoule::Create);
    vendor->RegisterHabitat("HabitatAigle", &HabitatAigle::Create);
    vendor->RegisterHabitat("HabitatTigre", &HabitatTigre::Create);

    //Création des habitats create(
    vendor->CreateHabitat(4, "HabitatPoule", 300, "Poule", 10);
    vendor->CreateHabitat(3, "HabitatAigle", 2000, "Aigle", 4);
    vendor->CreateHabitat(2, "HabitatTigre", 2000, "Tigre", 2);


    vendor->RegisterAnimal("Poule", &Poule::Create);
    vendor->RegisterAnimal("Aigle", &Aigle::Create);
    vendor->RegisterAnimal("Tigre", &Tigre::Create);

    // Creation des animaux create(nombre, type, prix_de_vente, qte_food, type_food);
    vendor->CreateAnimal(10, "Poule", 20, float(0.18), "seed");
    vendor->CreateAnimal(4, "Aigle", 150, float(0.25), "meat");
    vendor->CreateAnimal(5, "Tigre", 1000, float(12), "meat");

    // affichage des infos du vendeur dont son stock
    qDebug().noquote() << vendor;

    qDebug() << "Creation zoo, budget restant suppose 10.000 $. Budget reel :" << zoo->getMoney() << "$";

    // Achat des habitats : buy(vendeur, nb_habitats, type_animal)
    zoo->buyHabitats(vendor, 4, "Poule"); // 1200
    zoo->buyHabitats(vendor, 1, "Aigle"); // 2000
    zoo->buyHabitats(vendor, 1, "Tigre"); // 2000 -> total 5200 EUR

    qDebug() << "Premiere vente, budget restant suppose 4.800 $. Budget reel :" << zoo->getMoney() << "$";

    // Achat des animaux : buy(vendeur, nb_animaux, type)
    zoo->buyAnimals(vendor, 5, "Poule"); // 100
    zoo->buyAnimals(vendor, 4, "Aigle"); // 600
    zoo->buyAnimals(vendor, 2, "Tigre"); // 2000 -> total 2700 EUR -> sous-total 7900 EUR


    qDebug() << "Seconde vente, budget restant suppose 2.100 $. Budget reel :" << zoo->getMoney() << "$";

    zoo->buyAnimals(vendor, 5, "Poule"); // 100
    zoo->buyAnimals(vendor, 1, "Aigle"); // plus assez d'aigle
    zoo->buyAnimals(vendor, 0, "Tigre"); // 0 -> sous total 8000 EUR

    qDebug() << "Troisieme vente, budget restant suppose 2.000 $. Budget reel :" << zoo->getMoney() << "$";

    // Achat des habitats : buy(vendeur, nb_habitats, type_animal)
    zoo->buyHabitats(vendor, 4, "Poule"); // pas assez d'habitats
    zoo->buyHabitats(vendor, 1, "Aigle"); // 2000 -> sous-total 10000 EUR
    zoo->buyHabitats(vendor, 1, "Tigre"); // pas assez d'argent

    qDebug() << "Quatrieme vente, budget restant suppose 0 $. Budget reel :" << zoo->getMoney() << "$";

    zoo->nextTurn();

    // le vendeur et ses animaux sont detruits
    delete vendor;
    delete zoo;

    // affichage des infos du zoo dont son inventaire d'animaux et l'état de son budget
    qDebug().noquote() << zoo;

    return a.exec();
}
