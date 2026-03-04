#include "player.h"
#include <iostream>

 Player::Player();{
    name= "Hero";
    health=100;
    maxHealth=100;
    attackPower=10;

 };
    Player(std::string name, int health, int attackPower){
    this->name=name;
    this-> health=health;
    this->maxHealth=maxHealth;
    this->attackPower=attackPower;

    }
    Player::
        

    std::string Player::getName()const{

    }
    int Player::getHealth()const{

    }
    int Player::getMaxHealth()const{

    }
    int Player::getAttackPower()const{

    }

    void Player::takeDamage(int damage){
        if(damage>health){
            health=0
        } else{
            health -=damage;
        }
        if (health<=0){
            std::cout<<name<<" falls to the ground, defeated."<<std::endl;
        }
    }
    void Player::displayStatus(){
        std::cour<<name<<" - HP: "<<health<<"/"<<maxHealth<<std::endl;
    }