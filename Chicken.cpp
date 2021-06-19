#include "Chicken.hpp"

Chicken::Chicken(int gender, int age)
        : IAnimal(Chicken, gender, VEGAN, 4*360, 45, 2, 14*365, 0.25, 10, 0.5, 25*360, age, 15, 7) {

    if(gender==FEMALE) {
        foodPerDay(.3);
    }
}

string Chicken::toString() {
    char str[255];
    sprintf(str, "Chicken (%d days old)", age());
    return str;
}