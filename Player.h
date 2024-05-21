//Player.h file
#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include<iostream>

using namespace std;

class Player{
protected:
    string name; // the name of player
    int playerChoice; // choose the number of titans
    int lvl;    // level of the player

public:
    // constructor 
    Player(string player_name, int player_choice, int lvl);
    
    void set_name(string new_name); //set the name of player
    void set_playerChoice(int new_playerChoice);// set the  player choice
    void set_lvl(int lvl);

    string get_name(); // return the name of  player
    int get_playerChoice(); // return the choice of  player
    int get_lvl(); // return the level of player

};

#endif