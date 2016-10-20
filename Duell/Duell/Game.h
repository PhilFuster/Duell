#pragma once

#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "BoardView.h"
#include "Board.h"


class Game
{
public:
    Game();
    ~Game();
    void PlayGame();
    void IsFirst();
    void NextTurn() ;

private:
  //If true human turn false computer turn
  bool is_human_turn_;
  Board game_board_;
  BoardView view_;
  //An array of pointers to pointers of Player objects
  Player **player_array_ = new Player*[2];
  
};

