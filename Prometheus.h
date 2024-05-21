#include "Player.h"
#include "Titan.h"
#ifndef PROMETHEUS_H
#define PROMETHEU_H
using namespace std;
class Prometheus: public Titan{
    public:
    Prometheus(string name, string type, int damage, int hp, int attack,int defense);
    
    void doAttack(Titan* opponent) override;
    void takeDamage(int amount) override;
};
#endif