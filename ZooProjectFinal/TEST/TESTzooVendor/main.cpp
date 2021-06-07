#include <QCoreApplication>
#include "zoo.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
/*
    ZooVendor *vendor = ZooVendor::getInstance();
    vendor->Register("Poule", &Poule::Create);
    vendor->Register("Aigle", &Aigle::Create);
    vendor->Register("Tigre", &Tigre::Create);

    // Creation des animaux create(nombre, type, prix_de_vente);
    vendor->create(10, "Poule", 20);
    vendor->create(4, "Aigle", 150);
    vendor->create(5, "Tigre", 1000);

    // affichage des infos du vendeur dont son stock
    qDebug().noquote() << vendor;

    Zoo* zoo = Zoo::getInstance("Tycoon");
    zoo -> Zoo::addMoney(3000);


    // Achat des animaux : buy(vendeur, nb_animaux, type)
    zoo->buyAnimals(vendor, 5, "Poule"); // 100
    zoo->buyAnimals(vendor, 4, "Aigle"); // 600
    zoo->buyAnimals(vendor, 2, "Tigre"); // 2000 -> total 2700 EUR

    qDebug() << QString::number(zoo->getMoney());

    zoo->buyAnimals(vendor, 5, "Poule"); // 100
    zoo->buyAnimals(vendor, 1, "Aigle"); // plus assez d'aigle
    zoo->buyAnimals(vendor, 2, "Tigre"); // plus assez d'argent

    qDebug() << QString::number(zoo->getMoney());

    // le vendeur et ses animaux sont detruits
    delete vendor;

    // affichage des infos du zoo dont son inventaire d'animaux et l'=état de son budget
    qDebug().noquote() << zoo;

*/

    return a.exec();

}
