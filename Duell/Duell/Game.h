#pragma once

#include "Player.h"
#include "Computer.h"
#include "Human.h"

class Game
{
public:
    Game(int num_of_players);
    ~Game();
    void PlayGame();
    void IsFirst();
    void NextTurn(bool turn);

private:
  //true for player 1 false for player 2
  bool player_turn_;

  //An array of pointers to pointers of Player objects
  Player **player_array_ = new Player*[2];
};

