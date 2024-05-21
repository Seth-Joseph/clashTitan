#include"Player.h"
#include <string>
#include <iostream>

using namespace std;

// constructor
Player::Player(string player_name, int player_choice, int lvl){
    this -> name = player_name;
    this -> playerChoice = player_choice;
    this -> lvl = lvl;
}

string Player::get_name(){ // returns name of the player
    return name;
}
int Player::get_playerChoice(){ // returns the choice made by the player
    return playerChoice;
}
int Player::get_lvl(){ // returns the current level of the player
    return lvl;
}
void Player::set_name(string new_name){ // sets the name of the player
    this -> name = new_name;
}
void Player::set_playerChoice(int new_playerChoice){ // sets the choice made by the player
    this -> playerChoice = new_playerChoice;
}
void Player::set_lvl(int lvl){ // sets the level of the player
    this -> lvl = lvl;
}