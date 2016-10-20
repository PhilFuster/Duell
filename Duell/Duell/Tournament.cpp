#include "Tournament.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Board.h"
#include "Computer.h"
#include "Player.h"
#include "BoardView.h"
#include "NormalDie.h"
#include "KeyDie.h"
#include "Human.h"
#include "Game.h"

using namespace std;



Tournament::Tournament()
{
  round_num_ = 0;
  human_wins_ = 0;
  computer_wins_ = 0;
  InitializeTournament();
}


Tournament::~Tournament()
{
}

void Tournament::InitializeTournament()
{
  cout << "Welcome to Philip Fuster's implementation of Duell in c++ :)" << endl;
  


}

void Tournament::PrintResults() const
{
  cout << p1_name_ << " Wins: " << human_wins_ << endl;
  cout << p2_name_ << " Wins: " << computer_wins_ << endl;
  string winner;

  
  if (human_wins_ > computer_wins_)
  {
    winner = p1_name_;
  }
  if (computer_wins_ > human_wins_)
  {
    winner = p2_name_;
  }
  else
  {
    cout << "The tournament resulted in a draw!" << endl;
    return;
  }

  cout << "Winner is " << winner << ". Congratulations!" << endl;
}

void Tournament::RunTournament()
{
  Game round();
  round.PlayGame();
  while(TournamentContinue())
  {
    round.PlayGame();
  }
}

bool Tournament::TournamentContinue() const
{
  string line;
  while(cout << "Would you like to player another round?(y or n) " && getline(cin, line) )
  {
    if (line == "y" || line == "n")
    {
      break;
    }
  }

  if (line == "y") return true;
  return false;
  


}


int main(int argc, char* argv[])
{
  Tournament t;
  t.RunTournament();
  
  

  
  
}