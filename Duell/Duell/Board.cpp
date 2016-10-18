#include "Board.h"
#include "KeyDie.h"
#include "NormalDie.h"



Board::Board()
{
  //Initialize Board to all nullptrs
  //die will be added by player
  for (auto i = 8; i > 0; i--) {
    for (auto j = 0; j < 9; j++) {
      
        grid_[i - 1][j] = nullptr;
      

    }

  }

}


Board::~Board()
{
}

string Board::getElement(int row, int column) const
{
  if(grid_[row - 1][column] == nullptr)
  {
    return "false";
  }
  else
  {
    return grid_[row - 1][column]->getName();
  }
}

void Board::CreatePlayerDie(char player_initial, int home_row, vector<Die*>& player_die_collection)
{
  //
  for (auto i = 0; i < 9; i++)
  {
    if (i == 4)
    {
      KeyDie *KD = new KeyDie(player_initial);
      grid_[home_row][i] = KD;
      player_die_collection.push_back(KD);
      if(home_row == 7)
      {
        player_1_die_collection_.push_back(KD);
      }
      player_2_die_collection_.push_back(KD);
    }else
    {
      NormalDie *ND = new NormalDie(set_up_[i], player_initial);
      grid_[home_row][i] = ND;
      player_die_collection.push_back(ND);
      if (home_row == 7)
      {
        player_1_die_collection_.push_back(ND);
      }
      player_2_die_collection_.push_back(ND);
    }
  }
}


//Based on the player's home row getPlayerDieCollection returns the other
//players die collection
vector<Die *> Board::getPlayerDieCollection(int home_row) const
{
  if(home_row == 7)
  {
    return player_2_die_collection_;
  }
  return player_1_die_collection_;
}
