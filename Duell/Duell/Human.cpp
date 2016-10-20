#include "Human.h"
#include "KeyDie.h"
#include "NormalDie.h"
#include "Move.h"
#include <sstream>


Human::Human() : Player("Human", 0)
{
  
}

Human::Human(string name,int home_row) : Player(name, home_row)
{
  
  
}


Human::~Human()
{
}

void Human::Play(Board & B)
{
  CreateMove(B);
}

void Human::CreateMove(Board & B)
{
  Move M;
  string line;
  pair<int, int> loc;
  while ((cout << "Please enter the location of the die you wish to move.\n"
    << "Formatted as coordinates and entered as follows: row followed by column with a space in between\n"
    << "ie: 2 5\n") && getline(cin, line))
  {//Loop runs till broken out of which means user input is valid
    istringstream is{ line };
    if((is >> loc.first >> loc.second) && !(is>>line))
    {
      //Since user input was 2 integers and there was nothing following them
      // I now check to see if the dieLocation is valid and it belong to this player
      if(isDieLocationValid(loc.first, loc.second))
      {
        //if DieLocation is valid break
        break;
      }
    }
  }



}


