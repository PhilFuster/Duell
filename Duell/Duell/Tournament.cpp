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
  p1_wins_ = 0;
  p2_wins_ = 0;
}


Tournament::~Tournament()
{
}

void Tournament::TournamentStart()
{
  cout << "Welcome to Philip Fuster's implementation of Duell in c++ :)" << endl;
  string line;
  int num;
  while (cout << "How many players?(1 or 2) " && getline(cin, line))
  {
    istringstream is{ line };

    if (is >> num && !(is >> line))
    {
      break;
    }
  }

  Game round(num);


}


int main(int argc, char* argv[])
{
  //Tournament T;
  //T.TournamentStart();

  
  Board game_board;
  BoardView view(game_board);
  Human H;
  Computer C;
  C.AttachBoard(game_board);
  H.AttachBoard(game_board);
  view.PrintBoard(game_board);
}