/*
 * GameState records a games state. 
 * Which player is next to make move
 * and if there is a winner it will determine who it is
 * based on the playerTurn passed 
 * 
 */
#pragma once
#include <string>

using namespace std;


class GameState
{
public:
  GameState();
  GameState(bool player_turn, bool is_winner);
  ~GameState();

  bool getPlayerTurn() const;
  bool getIsWinner() const;
  void setPlayerTurn(bool turn);
  void SetWinner() ;


private:
  //true player 1, false player 2
  bool player_turn_;
  // True if somebody has won
  bool is_winner_;
  //1 if player 1 won, 2 if player 2 won, 0 if is_winner_ == false
  int winner_;
};

