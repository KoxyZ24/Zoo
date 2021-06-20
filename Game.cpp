#include "Eagle.hpp"
#include "Chicken.hpp"
#include "Tiger.hpp"
#include "string"


    Eagle::Eagle(int gender, int age)
            : IAnimal(EAGLE, gender, CARNIVOROUS, 4*360, 45, 2, 14*365, 0.25, 10, 0.5, 25*360, age, 15, 7) {

    if(gender==FEMALE) {
        foodPerDay(.3);
    }
}

string Eagle::toString() {
    char str[255];
    sprintf(str, "Eagle (%d days old)", age());
    return str;
}



Chicken::Chicken(int gender, int age)
        : IAnimal(CHICKEN, gender, VEGAN, 0.5*360, 6*7, 200, 8*365, 0.15, 2, 0.5, 15*360, age, 2, 0.5) {

    if(gender==FEMALE) {
        foodPerDay(.15),DayBeforEat(2);
    }
}

string Chicken::toString() {
    char str[255];
    sprintf(str, "Chicken (%d days old)", age());
    return str;
}


Tiger::Tiger(int gender, int age)
        : IAnimal(TIGER, gender, CARNIVOROUS, 6*360, 90, 3, 14*365, 0.25, 12, 0.33, 25*360, age, 30, 5) {

    if(gender==FEMALE) {
        foodPerDay(10), SexualMajority(4);
    }
}

string Tiger::toString() {
    char str[255];
    sprintf(str, "Tiger (%d days old)", age());
    return str;
}

Bank::Bank(int Money)
        :