#include "player.h"
#include <iostream>

 Player::Player() : inventory(10){
    name= "Hero";
    health=100;
    maxHealth=100;
    attackPower=10;
    

 }
    Player::Player(std::string name, int health, int attackPower): inventory(10){
    this -> name=name;
    this -> health=health;
    this -> maxHealth=maxHealth;
    this -> attackPower=attackPower;
    this -> maxHealth=health;
    

    }

    Player::~Player(){
        std::cout<<"The object for Player" <<name<<" has been destroyed"<<std::endl;
    }
    
        

    std::string Player::getName()const{
        return name;

    }
    int Player::getHealth()const{

        return health;
    }
    int Player::getMaxHealth()const{
        return maxHealth;

    }
    int Player::getAttackPower()const{
        return attackPower;

    }

    void Player::takeDamage(int damage){
        if(damage>health){
            health=0;
        } else{
            health -=damage;
        }
        if (health<=0){
            std::cout<<name<<" falls to the ground, defeated."<<std::endl;
        }
    }
    void Player::displayStatus(){
        std::cout<<name<<" - HP: "<<health<<"/"<<maxHealth<<std::endl;
    }
     void Player::showInventory() const{
        inventory.display();
     }
    void Player::addItem(const Item& item){
        inventory.addItem(item);
    }