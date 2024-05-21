#include <iostream>

#include "Battle.h"
#include "Player.h"

using namespace std;

// startBattle() starts the battle between playerTitan and the opponent
void Battle::startBattle(Titan* playerTitan, Titan* opponent, Player* player) {
    cout << "Level " << player->get_lvl() <<": " << "Your opponent is " << opponent->get_name() << " Good Luck!" << endl;
    // Battle will continue until either titan is defeated
    while (playerTitan->is_alive() && opponent->is_alive()) {
        playerTurn(playerTitan, opponent);
        if (opponent->is_alive()) {
            opponentTurn(opponent, playerTitan);
        }
    }

    // this is to check the result of the battle
    if (playerTitan->is_alive()) {
        cout << "Congratulations!" <<  playerTitan->get_name() << " has won the battle!" << endl;
        int currentLvl = player->get_lvl();
        player->set_lvl(currentLvl + 1); // Player gets promoted to next level if he wins the battle.

        if (player->get_lvl() > 3){ // This is to check whether the player has reached final level
            cout << "You are the Grand Champion!!\n Thank you for playing :)" << endl;
        }
        
    } else {
        cout << "Game Over!" << playerTitan->get_name() << " has lost the battle against " << opponent->get_name() << endl;
    }
}

// playerTurn() is to handle the player's turn 
void Battle::playerTurn(Titan* playerTitan, Titan* opponent) {
    // Player can choose either Attack or Defend
    cout << "Your turn! Choose an action:" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Defend" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            playerTitan->doAttack(opponent);
            break;
        case 2:
            playerTitan->defend();
            break;
        default:
            cout << "Invalid choice!" << endl;
            playerTurn(playerTitan, opponent);
            return;
    }
    playerTitan->endTurn();
}

// opponentTurn() is to handle the opponents turn
void Battle::opponentTurn(Titan* opponent, Titan* playerTitan) {
    // AI to determine opponents choice. This is based on the rand()
    int choice = rand() % 2 + 1;
    if (choice == 1) {
        opponent->doAttack(playerTitan);
    } else {
        opponent->defend();
    }
    opponent->endTurn();
}
