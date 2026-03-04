#include <iostream>
#include "player.h"
int main(){
    Player Hero;
    Player Wizard("James", 120, 15);

    Hero.displayStatus();
    Wizard.displayStatus();

    Hero.takeDamage(25);
    Hero.displayStatus();

    Wizard.takeDamage(150);
    Wizard.displayStatus();


    return 0;
}