#include "Oceania.h"
#include <iostream>
#include <cstdlib>  // For rand()

using namespace std;

Oceania::Oceania(string name, string type, int damage, int hp, int attack, int defense)
    : Titan(name, type, damage, hp, attack, defense) {
    this->name = "Oceania";
    this->type = "Water";
    this->damage = 65;
    this->hp = 45;
    this->attack = 49;
    this->defense = 49;
}

void Oceania::doAttack(Titan* opponent) {
    int randomFactor = rand() % 10 + 1;  // Random number between 1 and 10
    int attackDamage = this->attack + randomFactor;
    cout << this->name << " attacks " << opponent->getName() << " for " << attackDamage << " damage." << endl;
    opponent->takeDamage(attackDamage);
}

void Oceania::takeDamage(int amount) {
    int actualDamage = amount - this->defense;
    if (actualDamage < 0) actualDamage = 0;  // Defense cannot increase HP
    this->hp -= actualDamage;
    cout << this->name << " takes " << actualDamage << " damage, remaining HP: " << this->hp << endl;
}
