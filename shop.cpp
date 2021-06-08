#include <iostream>

using namespace std;

void ActionShopFood() {
    bool back = false;
    Game& game = Game::getInstance();
    while(!back) {
        displayMenuHeader("Shop");
        MENU_Action action = chooseAction({
                                                  {'1', "Meat 1kg (5€)", nullptr},
                                                  {'2', "Meat 10kg (50€)", nullptr},
                                                  {'3', "Seeds 1kg (2.5€)", nullptr},
                                                  {'4', "Seeds 10kg (25€)", nullptr},
                                                  {'B', "Back to main menu", nullptr}
                                          });

        if(action.function == nullptr) {
            switch (action.choice) {
                case '1': {
                    cout << "You just bought 1kg of meat" << endl;
                    if(game.bank.money() >= 5) {
                        game.addFood(1, MEAT);
                        game.bank.decrementMoney(5);
                        break;
                    }
                    cout << "You dont have enought money" <<endl;
                    break;
                }
                case '2': {
                    cout << "You just bought 10kg of meat" << endl;
                    if(game.bank.money() >= 50) {
                        game.addFood(10, MEAT);
                        game.bank.decrementMoney(50);
                        break;
                    }
                    cout << "You dont have enought money" <<endl;
                    break;
                }

                case '3': {
                    cout << "You just bought 1kg of seeds" << endl;
                    if(game.bank.money() >= 2.5) {
                        game.addFood(1, SEED);
                        game.bank.decrementMoney(2.5);
                        break;
                    }
                    cout << "You dont have enought money" <<endl;
                    break;
                }

                case '4': {
                    cout << "You just bought 10kg of seeds" << endl;
                    if(game.bank.money() >= 25) {
                        game.addFood(10, SEED);
                        game.bank.decrementMoney(25);
                        break;
                    }
                    cout << "You dont have enought money" <<endl;
                    break;
                }


                case 'B': {
                    back = true;
                    break;
                }
            }
        }
    }
}
void ActionShopAnimals() {
    bool back = false;
    Game& game = Game::getInstance();
    while(!back) {
        displayMenuHeader("Shop");
        MENU_Action action = chooseAction({
                                                  {'1', "Tiger Male 6 mois (3000€)", nullptr},
                                                  {'2', "Tiger Female 6 mois (3000€)", nullptr},
                                                  {'3', "Chicken 6 mois (20€)", nullptr},
                                                  {'4', "Rooster 6 mois (100€)", nullptr},
                                                  {'5', "Eagle Male 6 mois (1000€)", nullptr},
                                                  {'6', "Eagle Female 6 mois (1000€)", nullptr},
                                                  {'7', "Tiger Male 4 ans (120000€)", nullptr},
                                                  {'8', "Tiger Female 4 ans (120000€)", nullptr},
                                                  {'9', "Eagle Male 4 ans (4000€)", nullptr},
                                                  {'A', "Eagle Female 4 ans (4000€)", nullptr},
                                                  {'Z', "Tiger Male 14 ans (60000€)", nullptr},
                                                  {'E', "Tiger Female 14 ans (60000€)", nullptr},
                                                  {'R', "Eagle Male 14 ans (2000€)", nullptr},
                                                  {'T', "Eagle Female 14 ans (2000€)", nullptr},
                                                  {'B', "Back to main menu", nullptr}
                                          });

        if(action.function == nullptr) {
            int race = -1;
            int gender = 0;
            int age = 0;
            double price = 0.0;
            switch (action.choice) {
                case '1': {
                    cout << "You just bought a 6 month old male tiger" << endl;
                    race = TIGER;
                    gender = MALE;
                    age = 30*6;
                    price = 3000;
                    break;
                }

                case '2': {
                    cout << "You just bought a 6 month old female tiger" << endl;
                    race = TIGER;
                    gender = FEMALE;
                    age = 30*6;
                    price = 3000;
                    break;
                }
                case '3': {
                    cout << "You just bought a 6 month old chicken" << endl;
                    race = CHICKEN;
                    gender = FEMALE;
                    age = 30*6;
                    price = 20;
                    break;
                }

                case '4': {
                    cout << "You just bought a 6 month old rooster" << endl;
                    race = CHICKEN;
                    gender = FEMALE;
                    age = 30*6;
                    price = 100;
                    break;
                }

                case '5': {
                    cout << "You just bought a 6 month old male eagle" << endl;
                    race = EAGLE;
                    gender = MALE;
                    age = 30*6;
                    price = 1000;
                    break;
                }
                case '6': {
                    cout << "You just bought a 6 month old female eagle" << endl;
                    race = EAGLE;
                    gender = FEMALE;
                    age = 30*6;
                    price = 1000;
                    break;
                }
                case '7': {
                    cout << "You just bought a 4 years old male tiger" << endl;
                    race = TIGER;
                    gender = MALE;
                    age = 4*360;
                    price = 120000;
                    break;
                }

                case '8': {
                    cout << "You just bought a 4 years old female tiger" << endl;
                    race = TIGER;
                    gender = FEMALE;
                    age = 4*360;
                    price = 120000;
                    break;
                }
                case '9': {
                    cout << "You just bought a 4 years old male eagle" << endl;
                    race = EAGLE;
                    gender = MALE;
                    age = 4*360;
                    price = 4000;
                    break;
                }
                case 'A': {
                    cout << "You just bought a 4 years old female eagle" << endl;
                    race = EAGLE;
                    gender = FEMALE;
                    age = 4*360;
                    price = 4000;
                    break;
                }
                case 'Z': {
                    cout << "You just bought a 14 years old male tiger" << endl;
                    race = TIGER;
                    gender = MALE;
                    age = 14*360;
                    price = 60000;
                    break;
                }
                case 'E': {
                    cout << "You just bought a 14 years old female tiger" << endl;
                    race = TIGER;
                    gender = FEMALE;
                    age = 14*360;
                    price = 60000;
                    break;
                }
                case 'R': {
                    cout << "You just bought a 14 years old male eagle" << endl;
                    race = EAGLE;
                    gender = MALE;
                    age = 14*360;
                    price = 2000;
                    break;
                }
                case 'T': {
                    cout << "You just bought a 14 years old female eagle" << endl;
                    race = EAGLE;
                    gender = FEMALE;
                    age = 14*360;
                    price = 2000;
                    break;
                }
                case 'B': {
                    back = true;
                    break;
                }
            }
            if(race!=-1) {
                if(game.bank.money() >= price) {
                    game.addAnimal(race, gender, age);
                    game.bank.decrementMoney(price);
                }else{
                    cout << "You dont have enought money to buy this animal" <<endl;
                }
            }
        }
    }
}
void ActionShop()  {
    bool back = false;
    while(!back) {
        displayMenuHeader("Shop");
        MENU_Action action = chooseAction({
                                                  {'1', "Food", ActionShopFood},
                                                  {'2', "Animals", ActionShopAnimals},
                                                  {'B', "Back to main menu", nullptr}
                                          }, true);

        if(action.function == nullptr) {
            switch (action.choice) {
                case '1': {
                    cout << "Food Here (-1000 on your account" << endl;
                    Game::getInstance().bank.decrementMoney(1000);
                    break;
                }
                case 'B': {
                    back = true;
                    break;
                }
            }
        }

    }
}
