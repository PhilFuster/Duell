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
      KD->setDieLocation(home_row, i);
      grid_[home_row][i] = KD;
      player_die_collection.push_back(KD);
      if(home_row == 7)
      {
        computer_die_collection_.push_back(KD);
      }
      human_die_collection_.push_back(KD);
    }else
    {
      NormalDie *ND = new NormalDie(set_up_[i], player_initial);
      ND->setDieLocation(home_row, i);
      grid_[home_row][i] = ND;
      player_die_collection.push_back(ND);
      if (home_row == 7)
      {
        computer_die_collection_.push_back(ND);
      }
      human_die_collection_.push_back(ND);
    }
  }
}

bool Board::isWinner() const
{
  if( ( !isEmpty(computer_key_square_location_.row, computer_key_square_location_.column) ) 
     && ( grid_[computer_key_square_location_.row][computer_key_square_location_.column]->getPlayerInitial() == human_die_collection_[0]->getPlayerInitial() ) 
     ||  computer_die_collection_[4]->isCaptured() || (!isEmpty(human_key_square_location_.row, human_key_square_location_.column))
     && (grid_[human_key_square_location_.row][human_key_square_location_.column]->getPlayerInitial() == computer_die_collection_[0]->getPlayerInitial())
     || human_die_collection_[4]->isCaptured())
  {
    //Last player to move has won the game
    return true;
  }
  //No winner
  return false;
}


bool Board::isEmpty(int row, int column) const
{
  if(grid_[row - 1][column] == nullptr)
  {
    return true;
  }
  return false;
}

//Based on the player's home row getPlayerDieCollection returns the other
//players die collection
vector<Die *> Board::getOpponentDieCollection(int home_row) const
{
  if(home_row == computer_home_row_)
  {
    return human_die_collection_;
  }
  return computer_die_collection_;
}
