#ifndef Chiken_hpp
#define Chiken_hpp

#include <stdio.h>
#include "IAnimal.hpp"

class Chicken : public IAnimal {
public:
    Chicken(int gender, int age);
    int type = Chicken;
    string toString();
};

#endif /* Chicken_hpp */