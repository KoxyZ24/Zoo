#include <iostream>
#include "zoo.h"
#include "aigle.h"
#include "poule.h"
#include "tigre.h"

using namespace std;

int main()
{
    Zoo zoo("Zoo de la Montagne");

    zoo.addAnimal(new Tigre("Tigre 1"));
    zoo.addAnimal(new Tigre("Tigre 2"));
    zoo.addAnimal(new Poule("poule 1"));
    zoo.addAnimal(new Poule("poule 2"));
    zoo.addAnimal(new Poule("poule 2"));
    zoo.addAnimal(new Poule("poule 3"));
    zoo.addAnimal(new Poule("poule 4"));
    zoo.addAnimal(new Poule("poule 5"));
    zoo.addAnimal(new Poule("poule 6"));
    zoo.addAnimal(new Poule("poule 7"));
    zoo.addAnimal(new Poule("poule 8"));
    zoo.addAnimal(new Poule("poule 9"));
    zoo.addAnimal(new Poule("poule 10"));
    zoo.addAnimal(new Aigle("aigle 1"));
    zoo.addAnimal(new Aigle("aigle 2"));

    return 0;
}
