#ifndef Eagle_hpp
#define Eagle_hpp

#include <stdio.h>
#include "IAnimal.hpp"

class Eagle : public IAnimal {
public:
    Eagle(int gender, int age);
    int type = EAGLE;
    string toString();
};

#endif /* Eagle_hpp */