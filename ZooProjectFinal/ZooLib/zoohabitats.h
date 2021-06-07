#ifndef HABITATS_H
#define HABITATS_H


#include "zooobject.h"
#include <QVector>

class ZooHabitat;

typedef QVector<ZooHabitat*> HabitatList;

class ZooHabitats : public ZooObject
{

    static ZooHabitats *m_zooHabitats;
    HabitatList zooHabitatList;


public:
    ~ZooHabitats();
    static ZooHabitats *getInstance();

    HabitatList getHabitats() const;
    void addHabitat(ZooHabitat* zooHabitat);
    void removeHabitat(ZooHabitat* zooHabitat);

    HabitatList getNotFull(QString animalType);


private:
    ZooHabitats();
};

#endif // HABITATS_H
