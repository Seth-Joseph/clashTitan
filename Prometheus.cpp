
#include "Player.h"
#include "Titan.h"
#include "Prometheus.h"
using namespace std;
Prometheus::Prometheus(string name, string type, int damage, int hp, int attack,int defense): Titan(name, type, damage, hp, attack, defense){
    this-> name = "Prometheus";
    this -> type = "Fire";
    this -> damage = 60;
    this -> hp = 39;
    this -> attack = 52;
    this -> defense = 43;
} 
                                                                                                                                          

void Prometheus::doAttack(Titan* opponent) {
    int randomFactor = rand() % 10 + 1;  // Random number between 1 and 10
    int attackDamage = this->attack + randomFactor;
    cout << this->name << " attacks " << opponent->getName() << " for " << attackDamage << " damage." << endl;
    opponent->takeDamage(attackDamage);
}

void Prometheus::takeDamage(int amount) {
    int actualDamage = amount - this->defense;
    if (actualDamage < 0) actualDamage = 0;  // Defense cannot increase HP
    this->hp -= actualDamage;
    cout << this->name << " takes " << actualDamage << " damage, remaining HP: " << this->hp << endl;
}

