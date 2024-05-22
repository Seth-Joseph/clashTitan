
// NOT COMPLETE .......

#include "Titan.h"
#include <iostream>

using namespace std;


int main() {
    // Create Titan
    Titan* titan = new Titan("TestTitan", "TestType", 50, 20, 30);

    // Test getters
    cout << "Testing getter methods." << endl;
    if (titan->get_name() == "TestTitan") {
        cout << "Passed: getName() == TestTitan" << endl;
    } else {
        cout << "Failed: getName() != TestTitan" << endl;
    }
    if (titan->get_type() == "TestType") {
        cout << "Passed: get_type() == TestType" << endl;
    } else {
        cout << "Failed: get_type() != TestType" << endl;
    }

    if (titan->get_hp() == 50) {
        cout << "Passed: get_hp() == 50" << endl;
    } else {
        cout << "Failed: get_hp() != 50" << endl;
    }
    if (titan->get_attack() == 20) {
        cout << "Passed: get_attack() == 20" << endl;
    } else {
        cout << "Failed: get_attack() != 20" << endl;
    }
    


    // Test setters
    cout << "Testing setter methods..." << endl;
    titan->set_hp(100);
    titan->set_attack(50);
    titan->set_type("NewType");
    if (titan->get_hp() == 100) {
        cout << "Passed: set_hp(100) and get_hp() == 100" << endl;
    } else {
        cout << "Failed: set_hp(100) and get_hp() != 100" << endl;
    }
    if (titan->get_attack() == 50) {
        cout << "Passed: set_attack(50) and get_attack() == 50" << endl;
    } else {
        cout << "Failed: set_attack(50) and get_attack() != 50" << endl;
    }
    if (titan->get_type() == "NewType") {
        cout << "Passed: set_type(NewType) and get_type() == NewType" << endl;
    } else {
        cout << "Failed: set_type(NewType) and get_type() != NewType" << endl;
    }

    // Test attack
    Titan* opponent = new Titan("OpponentTitan", "OpponentType", 100, 40, 20);
    cout << "Testing doAttack()." << endl;
    titan->doAttack(opponent);
    if (opponent->get_hp() >= 100){
        cout << "Failed: Attack" << endl;
    }else{
        cout << "Passed: Attack" << endl;
    }
    
    // Test take damage
    cout << "Testing takeDamage()." << endl;
    opponent->takeDamage(20);
    if (opponent->get_hp()  != 80){
        cout << "Passed: Opponent gets damaged" << endl;
    }else{
        cout << "Failed: Oppenent doesnt get damaged" << endl;
    }

    // Test defend
    cout << "Testing defend()." << endl;
    if (opponent->endTurn()){
        cout << "Failed: Reseting the Titans defence state" << endl;
    }else{
        cout << "Passed: Reseting the Titans defence state" << endl;

    }

    // Test endTurn
    cout << "Testing endTurn()." << endl;
    if (opponent->endTurn()){
        cout << "Failed: Reseting the Titans defence state" << endl;
    }else{
        cout << "Passed: Reseting the Titans defence state" << endl;

    }
    
    

    // Test is_alive
    cout << "Testing is_alive()." << endl;
    while (titan->is_alive()){
        titan->takeDamage(10);
    }
    
    if (titan->is_alive()){
        cout << "Failed: Titan is Alive" << endl;
    }else{
        cout << "Passed: Titan is not Alive" << endl;
    }

    delete titan;
    delete opponent;

    cout << "All Titan tests passed!" << endl;    
    return 0;
}