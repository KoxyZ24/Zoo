#include "mainwindow.h"
#include "QDebug"
#include "zoo.h"

#include <QApplication>
#include <QDesktopWidget>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
/*
    ZooVendor *vendor = ZooVendor::getInstance();
    vendor->Register("Poule", &Poule::Create);
    vendor->Register("Aigle", &Aigle::Create);
    vendor->Register("Tigre", &Tigre::Create);

    // Creation des animaux create(nombre, type, prix_de_vente);
    vendor->create(10, "Poule", 20);
    vendor->create(4, "Aigle",150);
    vendor->create(5, "Tigre", 1000);

    // affichage des infos du vendeur dont son stock
    qDebug().noquote() << vendor;

    Zoo* zoo = new Zoo();

    zoo->setBugdetAmount(3000);


    // Achat des animaux : buy(vendeur, nb_animaux, type)
    zoo->buy(vendor, 5, "Poule"); // 100
    zoo->buy(vendor, 4, "Aigle"); // 600
    zoo->buy(vendor, 2, "Tigre"); // 2000 -> total 2700 EUR

    zoo->getBudget();

    zoo->buy(vendor, 5, "Poule"); // 100
    zoo->buy(vendor, 1, "Aigle"); // plus assez d'aigle
    zoo->buy(vendor, 2, "Tigre"); // plus assez d'argent

    zoo->getBudget();

    // le vendeur et ses animaux sont detruits
    delete vendor;

    // affichage des infos du zoo dont son inventaire d'animaux et l'=état de son budget
    qDebug().noquote() << zoo;

*/

    return a.exec();
}
