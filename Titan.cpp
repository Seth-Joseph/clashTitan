#include "Titan.h"

// constructor
Titan::Titan(string name, string type, int hp, int attack, int defense): name(name), type(type), hp(hp), attack(attack), defense(defense), isDefending(false) {}

// doAttack() is to calculate and deal damage to the opponent
void Titan::doAttack(Titan* opponent) {
    int attackDamage = attack - opponent->defense;
    if (attackDamage < 0){
         attackDamage = 0;
    }
    cout << this->name << " uses " << this->get_type() << " on " << opponent->get_name() << " and dealt a damage of " << attackDamage << endl;
    opponent->takeDamage(attackDamage);
}

// takeDamage() is to calculate the damage recieved
void Titan::takeDamage(int amount) {
    if (isDefending) {
        amount /= 2;  // Half of the damage if defending
    }
    hp -= amount;
    if (hp < 0){
        hp = 0;
    }
    cout << name << " takes " << amount << " damage! Remaining HP: " << hp << endl;
}

// defend() sets the Titan in defence state
bool Titan::defend() {
    isDefending = true;
    cout << name << " is defending!" << endl;
    return isDefending;
}

// resetting the defence state of titan at the end of the turn
bool Titan::endTurn() {
    isDefending = false;
    return isDefending;
}

// setting new hp
void Titan::set_hp(int new_hp) {
    hp = new_hp;
}

// setting the attack
void Titan::set_attack(int new_attack) {
    attack = new_attack;
}

// setting the type of titan
void Titan::set_type(string new_type) {
    type = new_type;
}

// getting the hp of titan
int Titan::get_hp(){
    return hp;
}

// getting the attack of titan
int Titan::get_attack(){
    return attack;
}

// getting the type of titan
string Titan::get_type(){
    return type;
}

// getting the name of titan
string Titan::get_name(){
    return name;
}

// checking whether the titan is alive
bool Titan::is_alive(){
    return hp > 0;
}
