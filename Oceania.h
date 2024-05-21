#ifndef OCEANIA_H
#define OCEANIA_H

#include "Titan.h"

class Oceania : public Titan {
public:
    Oceania(string name, string type, int damage, int hp, int attack, int defense);

    void doAttack(Titan* opponent) override;
    void takeDamage(int amount) override;
};

#endif
