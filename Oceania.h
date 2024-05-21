#ifndef OCEANIA_H
#define OCEANIA_H

#include "Titan.h"

class Oceania : public Titan {
public:
    Oceania(string name, string type, int hp, int attack, int defense); // Constructor

    void doAttack(Titan* opponent) override; // doAttack() for dealing attack on opponent.
    void takeDamage(int amount) override;   // takeDamage() for calculating damage recieved from opponent
};


#endif
