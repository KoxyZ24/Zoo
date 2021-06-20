#include "../zoo.h"
#include "house.h"


#include <iostream>

using namespace std;

class Zoo;

Zoo zoo;

string House::houseName;

Zoo *House::getHouse() const {
    return m_house;
}

string House::typeHouse() {
    return houseName;
}

House::House(Zoo *zoo) {

}

House::~House() {

}


