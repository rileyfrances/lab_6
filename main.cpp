#include <iostream>
#include "player.h"
using namespace std;
int main(){
    Player Hero;

    Item sword(Sword, 50);
    Item bonnet(Bonnet, 150);
    Item boots(Boots,10);
    Item junk;

    hero.addItem(sword);
    hero.addItem(bonnet);
    hero.addItem(boots);
    hero.addItem(junk);

    cout<<" The total number of items is "<<Item::getTotalItems()<<endl;

    Player Wizard("James", 120, 15);

    Hero.displayStatus();
    Wizard.displayStatus();

    Hero.takeDamage(25);
    Hero.displayStatus();

    Wizard.takeDamage(150);
    Wizard.displayStatus();


    return 0;
}