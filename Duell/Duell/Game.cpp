#include "Game.h"
#include "Tournament.h"
#include "Computer.h"
#include "Human.h"
#include "Board.h"
#include <iostream>
#include <ctime>



Game::Game(int num_of_players)
{
  IsFirst();
  if (num_of_players == 2)
  {
    player_array_[0] = new Human("Player", 7);
    player_array_[1] = new Human("Human", 0);

  }
  else if (num_of_players == 1)
  {
    player_array_[0] = new Computer;
    player_array_[1] = new Human;
  }
  PlayGame();

}


Game::~Game()
{
}

void Game::PlayGame()
{

}

void Game::IsFirst()
{
  srand(time(NULL));
  int player1Roll = (rand() % 6) + 1;
  int player2Roll = (rand() % 6) + 1;
  while (player1Roll == player2Roll)
  {
    player1Roll = (rand() % 6) + 1;
    player2Roll = (rand() % 6) + 1;
  }

  if (player1Roll > player2Roll)
  {
    
    player_turn_ = true;
  }
  else
  {
    
    player_turn_ = false;
  }

}

void Game::NextTurn(bool turn)
{
}
