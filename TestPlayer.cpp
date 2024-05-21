#include "Player.h"
#include <iostream>



int main() {
        // Create Player
    Player* player = new Player("Ishaan", 1, 1);

    // Test get_name, get_playerChoice and get_lvl()
    std::cout << "Testing get_name(), get_playerChoice() and get_lvl()" << std::endl;
    std::string expectedName = "Ishaan";
    int expectedChoice = 1;
    int expectedLvl = 1;
    std::string actualName = player->get_name();
    int actualChoice = player->get_playerChoice();
    int actualLvl = player->get_lvl();


    if (actualName != expectedName) {
        std::cout << "Error: Expected name: " << expectedName << ", but got: " << actualName << std::endl;
    } else {
        std::cout << "Passed: Expected name: " << expectedName << ", Actual name: " << actualName << std::endl;
    }

    if (actualChoice != expectedChoice) {
        std::cout << "Error: Expected choice: " << expectedChoice << ", but got: " << actualChoice << std::endl;
    } else {
        std::cout << "Passed: Expected choice: " << expectedChoice << ", Actual choice: " << actualChoice << std::endl;
    }

    if (actualLvl != expectedLvl) {
        std::cout << "Error: Expected level: " << expectedLvl << ", but got: " << actualLvl << std::endl;
    } else {
        std::cout << "Passed: Expected level: " << expectedLvl << ", Actual level: " << actualLvl << std::endl;
    }

    // Test set_name, set_playerChoice and set_lvl()
    std::cout << "Testing set_name(), set_playerChoice() and set_lvl()" << std::endl;
    player->set_name("Seth");
    player->set_playerChoice(2);
    player->set_lvl(3);
    expectedName = "Seth";
    expectedChoice = 2;
    expectedLvl = 3;
    actualName = player->get_name();
    actualChoice = player->get_playerChoice();
    actualLvl = player->get_lvl();

    if (actualName != expectedName) {
        std::cout << "Error: Expected new name: " << expectedName << ", but got: " << actualName << std::endl;
    } else {
        std::cout << "Passed: Expected new name: " << expectedName << ", Actual new name: " << actualName << std::endl;
    }

    if (actualChoice != expectedChoice) {
        std::cout << "Error: Expected new choice: " << expectedChoice << ", but got: " << actualChoice << std::endl;
    } else {
        std::cout << "Passed: Expected new choice: " << expectedChoice << ", Actual new choice: " << actualChoice << std::endl;
    }

    if (actualLvl != expectedLvl) {
        std::cout << "Error: Expected new level: " << expectedLvl << ", but got: " << actualLvl << std::endl;
    } else {
        std::cout << "Passed: Expected new level: " << expectedLvl << ", Actual new level: " << actualLvl << std::endl;
    }
    
    delete player;

    std::cout << "All Player tests passed!" << std::endl;
    return 0;

}