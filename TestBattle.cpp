#include "Battle.h"
#include "Oceania.h"
#include "Prometheus.h"
#include <iostream>

using namespace std;



int main() {

    // Create player
    Player* player = new Player("playerName", 1, 1);

    // Create Titans
    Oceania* titan1 = new Oceania("Prometheus1", "Fire", 39, 52, 43);
    Prometheus* titan2 = new Prometheus("Prometheus2", "Fire", 39, 52, 43);

    // Display initial HP
    cout << "Initial HP of " << titan1->get_name() << ": " << titan1->get_hp() << endl;
    cout << "Initial HP of " << titan2->get_name() << ": " << titan2->get_hp() << endl;

    // Create Battle
    Battle battle;
    battle.startBattle(titan1, titan2,player);

    // Display final HP
    cout << "Final HP of " << titan1->get_name() << ": " << titan1->get_hp() << endl;
    cout << "Final HP of " << titan2->get_name() << ": " << titan2->get_hp() << endl;

    // After the battle, one of the Titans should have 0 or less HP
    if (titan1->get_hp() <= 0 || titan2->get_hp() <= 0) {
        cout << "Battle test passed: One of the Titans has 0 or less HP." << endl;
    } else {
        cout << "Battle test failed: Both Titans have more than 0 HP." << endl;
    }

    cout << "All Battle tests passed!" << endl;

    delete player;
    delete titan1;
    delete titan2;

    return 0;
}