#include <string>
#ifndef PLAYER_H
#define PLAYER_H

class Player{

 private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;
public:
    Player();
    Player(std::string name, int health, int attackPower);

    std::string getName()const;
    int getHealth()const;
    int getMaxHealth()const;
    int getAttackPower()const;

    void takeDamage(int damage);
    void displayStatus();
};

#endif