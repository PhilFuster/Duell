#include "Game.h"
#include "Computer.h"
#include "Human.h"
#include "Board.h"
#include <iostream>
#include <ctime>



Game::Game()
{
  IsFirst();
  
  player_array_[0] = new Computer("Computer", 7);
  player_array_[1] = new Human("Human", 0);
  
  player_array_[0]->AttachBoard(game_board_);
  player_array_[1]->AttachBoard(game_board_);

}


Game::~Game()
{
}

void Game::PlayGame()
{
  //view_.PrintBoard(game_board_);

  //TODO: Serialization and a function maybe ContinueGame()
  //After a player makes a move ask the user whether they would like to continue 
  //or save game and exit
  while(!game_board_.isWinner())
  {
    NextTurn();
    is_human_turn_ = !is_human_turn_;
  }
  


}

void Game::IsFirst()
{
  srand(time(NULL));
  int human_roll = (rand() % 6) + 1;
  int computer_roll = (rand() % 6) + 1;
  while (human_roll == computer_roll)
  {
    human_roll = (rand() % 6) + 1;
    computer_roll = (rand() % 6) + 1;
  }


  human_roll > computer_roll ? is_human_turn_ = true : is_human_turn_ = false;
  //TODO: Don't forget to set back to the ternary above
  //is_human_turn_ = false;

}

void Game::NextTurn() 
{

  if(is_human_turn_)
  {
    player_array_[0]->Play(game_board_);
    
  }

  player_array_[1]->Play(game_board_);
  
}
