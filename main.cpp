#include "Oceania.h"
#include "Gaia.h"
#include "Prometheus.h"
#include "Atlas.h"
#include "Battle.h"
#include "Player.h"

#include <iostream>

using namespace std;

int main() {
    string playerName;
    int playerChoice;

    // Get player name
    cout << "Welcome to Clash Titans!!" << endl;
    cout << "Enter your name: ";
    cin >> playerName;

    // Display Titan choices
    cout << "Choose your Titan:" << endl;
    cout << "1. Oceania\n" << "\tType:Water\n\tHp:45\n\tAttack:49\n\tDefense:49\n"  << endl;
    cout << "1. Gaia\n" << "\tType:Ice\n\tHp:45\n\tAttack:49\n\tDefense:49\n"  << endl;
    cout << "1. Atlas\n" << "\tType:Earth\n\tHp:35\n\tAttack:55\n\tDefense:40\n"  << endl;
    cout << "1. Prometheus\n" << "\tType:Fire\n\tHp:39\n\tAttack:52\n\tDefense:43\n"  << endl;

    // Get player choice
    cout << "Enter the number of your chosen Titan: ";
    cin >> playerChoice;

    // Create Player object
    Player* player = new Player(playerName, playerChoice, 1);

    // Create Titan objects based on player choice
    Titan* playerTitan = nullptr;
    Titan* opponent1 = nullptr;
    Titan* opponent2 = nullptr;
    Titan* opponent3 = nullptr;

    switch (playerChoice) {
        case 1:
            playerTitan = new Oceania("Oceania", "Water", 45, 49, 49);
            opponent1 = new Gaia("Gaia", "Ice", 45, 49, 49);
            opponent2 = new Atlas("Atlas", "Earth", 35, 55, 40);  
            opponent3 = new Prometheus("Prometheus", "Fire", 39, 52, 43);   
            break;
        case 2:
            playerTitan = new Gaia("Gaia", "Ice", 45, 49, 49);
            opponent1 = new Oceania("Oceania", "Water", 45, 49, 49);
            opponent2 = new Atlas("Atlas", "Earth", 35, 55, 40);  
            opponent3 = new Prometheus("Prometheus", "Fire", 39, 52, 43);   
            break;
        case 3:
            playerTitan = new Atlas("Atlas", "Earth", 35, 55, 40);  
            opponent1 = new Oceania("Oceania", "Water", 45, 49, 49);
            opponent2 = new Gaia("Gaia", "Ice", 45, 49, 49);
            opponent3 = new Prometheus("Prometheus", "Fire", 39, 52, 43);     
            break;
        case 4:
            playerTitan = new Prometheus("Prometheus", "Fire", 39, 52, 43);   
            opponent1 = new Oceania("Oceania", "Water", 45, 49, 49);
            opponent2 = new Gaia("Gaia", "Ice", 45, 49, 49);
            opponent3 = new Atlas("Atlas", "Earth", 35, 55, 40);    
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    // Start battles
    Battle battle;
    
    battle.startBattle(playerTitan, opponent1, player);
    if (playerTitan->get_hp() > 0){
        battle.startBattle(playerTitan, opponent2, player);
    }
    if (playerTitan->get_hp() > 0){ 
        battle.startBattle(playerTitan, opponent3, player);
    }

    // Deleting pointers
    delete player;
    delete playerTitan;
    delete opponent1;
    delete opponent2;
    delete opponent3;

    return 0;
}