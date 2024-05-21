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

public:
    // constructor override
    Player(string player_name, int player_choice);
    void set_name(string new_name); //set the name(new name) of current player
    void set_playerChoice(int new_playerChoice);// set the new player choice


    string get_name(); // return the name of current player
    int get_playerChoice(); // return the choice of current player

};

#endif