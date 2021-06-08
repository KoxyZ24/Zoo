#include <iostream>

using namespace std;
void ActionShopFood() {
    bool back = false;
    Game& game = Game::getInstance();
    while(!back) {
        displayMenuHeader("Shop");
        MENU_Action action = chooseAction({
                                                  {'1', "Viande 1kg (5€)", nullptr},
                                                  {'2', "Viande 10kg (50€)", nullptr},
                                                  {'3', "Graines 1kg (2.5€)", nullptr},
                                                  {'4', "Graines 10kg (25€)", nullptr},
                                                  {'B', "Retour Menu Principal", nullptr}
                                          });

        if(action.function == nullptr) {
            switch (action.choice) {
                case '1': {
                    cout << "Vous avez acheté 1kg de viande" << endl;
                    if(game.bank.money() >= 5) {
                        game.addFood(1, VIANDE);
                        game.bank.decrementMoney(5);
                        break;
                    }
                    cout << "Vous n'avez pas assé de money" <<endl;
                    break;
                }
                case '2': {
                    cout << "Vous avez acheté 10kg de viande" << endl;
                    if(game.bank.money() >= 50) {
                        game.addFood(10, VIANDE);
                        game.bank.decrementMoney(50);
                        break;
                    }
                    cout << "Vous n'avez pas assé de money" <<endl;
                    break;
                }

                case '3': {
                    cout << "Vous avez acheté 1kg de graines" << endl;
                    if(game.bank.money() >= 2.5) {
                        game.addFood(1, GRAINE);
                        game.bank.decrementMoney(2.5);
                        break;
                    }
                    cout << "Vous n'avez pas assé de money" <<endl;
                    break;
                }

                case '4': {
                    cout << "Vous avez acheté 10kg de graines" << endl;
                    if(game.bank.money() >= 25) {
                        game.addFood(10, GRAINE);
                        game.bank.decrementMoney(25);
                        break;
                    }
                    cout << "Vous n'avez pas assé d'argent" <<endl;
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
                                                  {'1', "Tigre Male 6 mois (3000€)", nullptr},
                                                  {'2', "Tigre Female 6 mois (3000€)", nullptr},
                                                  {'3', "Poule 6 mois (20€)", nullptr},
                                                  {'4', "Coq 6 mois (100€)", nullptr},
                                                  {'5', "Aigle Male 6 mois (1000€)", nullptr},
                                                  {'6', "Aigle Female 6 mois (1000€)", nullptr},
                                                  {'7', "Tigre Male 4 ans (120000€)", nullptr},
                                                  {'8', "Tigre Female 4 ans (120000€)", nullptr},
                                                  {'9', "Aigle Male 4 ans (4000€)", nullptr},
                                                  {'A', "Aigle Female 4 ans (4000€)", nullptr},
                                                  {'Z', "Tigre Male 14 ans (60000€)", nullptr},
                                                  {'E', "Tigre Female 14 ans (60000€)", nullptr},
                                                  {'R', "Aigle Male 14 ans (2000€)", nullptr},
                                                  {'T', "Aigle Female 14 ans (2000€)", nullptr},
                                                  {'B', "Retour Menu Principal", nullptr}
                                          });

        if(action.function == nullptr) {
            int race = -1;
            int gender = 0;
            int age = 0;
            double price = 0.0;
            switch (action.choice) {
                case '1': {
                    cout << "Vous venez d'acheté un tigre male de 6 mois" << endl;
                    race = TIGER;
                    gender = MALE;
                    age = 30*6;
                    price = 3000;
                    break;
                }

                case '2': {
                    cout << "Vous venez d'acheté un tigre femelle de 6 mois" << endl;
                    race = TIGER;
                    gender = FEMALE;
                    age = 30*6;
                    price = 3000;
                    break;
                }
                case '3': {
                    cout << "Vous venez d'acheté une poule de 6 mois" << endl;
                    race = CHICKEN;
                    gender = FEMALE;
                    age = 30*6;
                    price = 20;
                    break;
                }

                case '4': {
                    cout << "Vous venez d'acheté un coq de 6 mois" << endl;
                    race = CHICKEN;
                    gender = FEMALE;
                    age = 30*6;
                    price = 100;
                    break;
                }

                case '5': {
                    cout << "Vous venez d'acheté un aigle male de 6 mois" << endl;
                    race = EAGLE;
                    gender = MALE;
                    age = 30*6;
                    price = 1000;
                    break;
                }
                case '6': {
                    cout << "Vous venez d'acheté un aigle femelle de 6 mois" << endl;
                    race = EAGLE;
                    gender = FEMALE;
                    age = 30*6;
                    price = 1000;
                    break;
                }
                case '7': {
                    cout << "Vous venez d'acheté un tigre male de 4 ans" << endl;
                    race = TIGER;
                    gender = MALE;
                    age = 4*360;
                    price = 120000;
                    break;
                }

                case '8': {
                    cout << "Vous venez d'acheté un tigre femelle de 4 ans" << endl;
                    race = TIGER;
                    gender = FEMALE;
                    age = 4*360;
                    price = 120000;
                    break;
                }
                case '9': {
                    cout << "Vous venez d'acheté un aigle male de 4 ans" << endl;
                    race = EAGLE;
                    gender = MALE;
                    age = 4*360;
                    price = 4000;
                    break;
                }
                case 'A': {
                    cout << "Vous venez d'acheté un aigle femelle de 4 ans" << endl;
                    race = EAGLE;
                    gender = FEMALE;
                    age = 4*360;
                    price = 4000;
                    break;
                }
                case 'Z': {
                    cout << "Vous venez d'acheté un tigre male de 14 ans" << endl;
                    race = TIGER;
                    gender = MALE;
                    age = 14*360;
                    price = 60000;
                    break;
                }
                case 'E': {
                    cout << "Vous venez d'acheté un tigre femelle de 14 ans" << endl;
                    race = TIGER;
                    gender = FEMALE;
                    age = 14*360;
                    price = 60000;
                    break;
                }
                case 'R': {
                    cout << "Vous venez d'acheté un aigle male de 14 ans" << endl;
                    race = EAGLE;
                    gender = MALE;
                    age = 14*360;
                    price = 2000;
                    break;
                }
                case 'T': {
                    cout << "Vous venez d'acheté un aigle femelle de 14 ans" << endl;
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
                    cout << "Vous n'avez pas assez d'argent pour cet animal" <<endl;
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
