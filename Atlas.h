#ifndef ATLAS_H
#define ATLAS_H

#include "Player.h"
#include "Titan.h"

using namespace std;

class Atlas: public Titan{
    public:
    Atlas(string name, string type, int hp, int attack,int defense);    // Constructor

    void doAttack(Titan* opponent) override; // doAttack() for dealing attack on opponent.
    void takeDamage(int amount) override;   // takeDamage() for calculating damage recieved from opponent
};

#endif