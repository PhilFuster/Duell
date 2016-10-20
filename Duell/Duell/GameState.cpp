#include "GameState.h"



GameState::GameState()
{
  player_turn_ = false;
  is_winner_ = false;
  winner_ = 1;

}

GameState::GameState(bool player_turn, bool is_winner) : player_turn_(player_turn), is_winner_(is_winner)
{
  if(is_winner_)
  {
    SetWinner();
  }
  else
  {
    winner_ = 0;
  }

}


GameState::~GameState()
{
}

bool GameState::getPlayerTurn() const
{
  return player_turn_;
}

bool GameState::getIsWinner() const
{
  return is_winner_;
}

void GameState::setPlayerTurn(bool turn)
{
  player_turn_ = turn;
}

void GameState::SetWinner() 
{
  if(player_turn_)
  {
    winner_ = 1;

  }
  if (!player_turn_)
  {
    winner_ = 2;
  }
  
}
