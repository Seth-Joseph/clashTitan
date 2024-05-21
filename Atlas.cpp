#include "Player.h"
#include "Titan.h"
#include "Atlas.h"
using namespace std;
Atlas::Atlas(string name, string type, int damage, int hp, int attack,int defense) :  Titan(name, type, damage, hp, attack, defense) 
{
    this-> name = "Atlas";
    this -> type = "Earth";
    this -> damage = 50;
    this -> hp = 35;
    this -> attack = 55;
    this -> defense = 40;
}                                                                                                                                           


void Atlas::doAttack(Titan* opponent) {
    int randomFactor = rand() % 10 + 1;  // Random number between 1 and 10
    int attackDamage = this->attack + randomFactor;
    cout << this->name << " attacks " << opponent->getName() << " for " << attackDamage << " damage." << endl;
    opponent->takeDamage(attackDamage);
}

void Atlas::takeDamage(int amount) {
    int actualDamage = amount - this->defense;
    if (actualDamage < 0) actualDamage = 0;  // Defense cannot increase HP
    this->hp -= actualDamage;
    cout << this->name << " takes " << actualDamage << " damage, remaining HP: " << this->hp << endl;
}