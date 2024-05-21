#include <iostream>
#include <cstdlib> // For rand()

#include "Player.h"
#include "Titan.h"
#include "Atlas.h"

using namespace std;

// Constructor for the Atlas Class
Atlas::Atlas(string name, string type, int hp, int attack,int defense) :  Titan(name, type, hp, attack, defense) {
    this -> name = name;
    this -> type = type;
    this -> hp = hp;
    this -> attack = attack;
    this -> defense = defense;
}                                                                                                                                           

// doAttack() is to calculate and deal damage to the opponent
void Atlas::doAttack(Titan* opponent) {
    int randomNum = rand() % 10 + 1;  // Generating a random number between 1 and 10
    int attackDamage = this->attack + randomNum; // Adding randomly generated number for more versatility
    cout << this->name << " uses " << this->get_type() << " on " << opponent->get_name() << " and dealt a damage of " << attackDamage << endl;
    opponent->takeDamage(attackDamage);
}

// takeDamage() is to calculate the damage recieved
void Atlas::takeDamage(int amount) {
    int actualDamage = amount - this->defense; // Calcuting the actual damage 

    // If the actualDamage is negative then forcefully setting it as zero
    if (actualDamage < 0){
         actualDamage = 0;
    }
    this->set_hp(this->hp - actualDamage);
    cout << this->name << " takes " << actualDamage << " damage, remaining HP: " << this->hp << endl;
}