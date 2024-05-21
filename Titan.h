#ifndef TITAN_H
#define TITAN_H

#include <iostream>
#include <string>

using namespace std;

class Titan {
protected:
    string name;
    string type;
    int damage;
    int hp;
    int attack;
    int defense;

public:
    Titan(string name, string type, int damage, int hp, int attack, int defense);
    virtual ~Titan();  // Virtual destructor

    virtual void takeDamage(int amount) = 0;     // Pure virtual function
    virtual void doAttack(Titan* opponent) = 0;  // Pure virtual function

    void setHp(int hp);
    void setAttack(int attack);
    void setDamage(int damage);
    void setType(string type);

    int getHp() const;
    int getAttack() const;
    int getDamage() const;
    string getType() const;
    int getDefense() const;
    string getName() const;  // Added to get the name of the Titan
};

#endif
