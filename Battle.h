#ifndef BATTLE_H
#define BATTLE_H

#include "Titan.h"
#include "Player.h"

class Battle {
public:
    void startBattle(Titan* playerTitan, Titan* opponent, Player* player); // startBattle() handles the battle system
    void playerTurn(Titan* playerTitan, Titan* opponent); // handles player's turn
    void opponentTurn(Titan* opponent, Titan* playerTitan); // handles opponent's turn
};

#endif
