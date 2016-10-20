//
//Class to model the Duell game board
//Will have an 8 x 9 array of pointers to Die
//
#pragma once

#include "Die.h"
#include <vector>

using namespace std;
struct PlayerKeySquareLocation
{
  int row;
  int column;
  
};

class Board
{
  
public:
	Board();
	~Board();
  string getElement(int row, int column) const;
  void CreatePlayerDie(char player_initial, int home_row, vector<Die *>& player_die_collection);
  bool isWinner() const;
  bool isEmpty(int row, int column) const;
  vector<Die *> getOpponentDieCollection(int home_row)const;

private:
    Die *grid_[8][9];
    //Set up of the Die for a game of Duell(The top faces of the die)
    int set_up_[9]{ 5, 1, 2, 6, 1, 6, 2, 1, 5 };
    const int computer_home_row_ = 7;
    const int human_home_row_ = 0;
    const int key_square_column_ = 4;
    //Player 1 will always have home_row of 7
    vector<Die *> computer_die_collection_;
    //Player 2 will always be the player with a home_row of 0
    vector<Die *> human_die_collection_;

    PlayerKeySquareLocation computer_key_square_location_ = { computer_home_row_, key_square_column_ };
    PlayerKeySquareLocation human_key_square_location_ = { human_home_row_, key_square_column_ };
    
    
    
    

};

