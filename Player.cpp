#include"Player.h"
#include <string>
#include <iostream>

using namespace std;
Player::Player(string player_name, int player_choice){
    name = player_name;
    playerChoice = player_choice;
}
string Player::get_name(){
    return name;
}
int Player::get_playerChoice(){
    return playerChoice;
}
void Player::set_name(string new_name){
    name = new_name;
}
void Player::set_playerChoice(int new_playerChoice){
    playerChoice = new_playerChoice;
}