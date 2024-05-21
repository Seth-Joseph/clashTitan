#ifndef GAIA_H
#define GAIA_H

#include "Titan.h"

class Gaia : public Titan {
public:
    Gaia(string name, string type, int damage, int hp, int attack, int defense);

    void doAttack(Titan* opponent) override;
    void takeDamage(int amount) override;
};

#endif