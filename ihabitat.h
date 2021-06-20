#ifndef ZOOPROJECT_IHABITAT_H
#define ZOOPROJECT_IHABITAT_H

#include "../zoo.h"
#include <iostream>

using namespace std;

class Zoo;

class House {
    Zoo *m_house;
    static string houseName;
    int capacity = 0;
public:
    House(Zoo *);

    virtual ~House();

    Zoo *getHouse() const;

    virtual string typeHouse();
};

#endif //ZOOPROJECT_IHABITAT_H
