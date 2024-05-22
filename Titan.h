#ifndef TITAN_H
#define TITAN_H

#include <iostream>
#include <string>

using namespace std;

class Titan {
protected:
    string name;
    string type;
    int hp;
    int attack;
    int defense;
    bool isDefending;

public:
    Titan(string name, string type, int hp, int attack, int defense);
    virtual ~Titan() = default;

    virtual void doAttack(Titan* opponent); // handles attack to titan
    virtual void takeDamage(int amount); // handles the damage taken by the titan
    bool defend();  // sets the titan in defence state
    bool endTurn(); // resets the state of titan
    
    void set_hp(int new_hp); // sets a new hp to titan
    void set_attack(int new_attack); // sets attack to titan
    void set_type(string new_type); // sets the type to titan

    int get_hp();   // returns the hp of titan
    int get_attack(); // returns the attacck of titan
    string get_type();  // returns the type of titan
    string get_name();  // returns the name of the titan

    bool is_alive();    // checks whether titan is alive or not
};

#endif
