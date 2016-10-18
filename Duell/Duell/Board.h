//
//Class to model the Duell game board
//Will have an 8 x 9 array of pointers to Die
//
#pragma once

#include "Die.h"
#include <vector>

using namespace std;

class Board
{
public:
	Board();
	~Board();
  string getElement(int row, int column) const;
  void CreatePlayerDie(char player_initial, int home_row, vector<Die *>& player_die_collection);
  vector<Die *> getPlayerDieCollection(int home_row)const;

private:
    Die *grid_[8][9];
    //Set up of the Die for a game of Duell(The top faces of the die)
    int set_up_[9]{ 5, 1, 2, 6, 1, 6, 2, 1, 5 };

    //Player 1 will always have home_row of 7
    vector<Die *> player_1_die_collection_;
    //Player 2 will always be the player with a home_row of 0
    vector<Die *> player_2_die_collection_;
    
    
    

};

