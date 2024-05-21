#include "Battle.h"
#include <iostream>
using namespace std;

void Battle::startBattle(Titan* titan1, Titan* titan2) {
    while (titan1->getHp() > 0 && titan2->getHp() > 0) {
        titan1->doAttack(titan2);
        if (titan2->getHp() <= 0) {
            cout << titan2->getName() << " has been defeated!" << endl;
            break;
        }
        titan2->doAttack(titan1);
        if (titan1->getHp() <= 0) {
            cout << titan1->getName() << " has been defeated!" << endl;
            break;
        }
    }
}