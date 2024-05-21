#ifndef ATLAS_H
#define ATLAS_H

#include "Player.h"
#include "Titan.h"

using namespace std;
class Atlas: public Titan{
    public:
    Atlas(string name, string type, int damage, int hp, int attack,int defense);

    void doAttack(Titan* opponent) override;
    void takeDamage(int amount) override;
};

#endif