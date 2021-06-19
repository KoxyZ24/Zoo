#ifndef Tiger_hpp
#define Tiger_hpp

#include <stdio.h>
#include "IAnimal.hpp"

class Tiger : public IAnimal {
public:
    Tiger(int gender, int age);
    int type = Tiger;
    string toString();
};

#endif /* Tiger_hpp */