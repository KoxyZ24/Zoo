#include "Tiger.hpp"

Tiger::Tiger(int gender, int age)
        : IAnimal(Tiger, gender, CARNIVOROUS, 4*360, 45, 2, 14*365, 0.25, 10, 0.5, 25*360, age, 15, 7) {

    if(gender==FEMALE) {
        foodPerDay(.3);
    }
}

string Tiger::toString() {
    char str[255];
    sprintf(str, "Tiger (%d days old)", age());
    return str;
}