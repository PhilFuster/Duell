#include "NormalDie.h"
#include <iostream>

using namespace std;



NormalDie::NormalDie(int up_face, char player_initial) : Die(player_initial)
{
  
  InitDieMap(up_face);
}


NormalDie::~NormalDie()
{
}


//TODO: Could return an 1 if successful 0 if not 
void NormalDie::Roll(char direction)
{
  int tmp;
  switch(direction)
  {
    case 'u':
      tmp = die_map_.back_face;
      die_map_.back_face = die_map_.bottom_face();
      die_map_.up_face = tmp;
      break;
    case 'd':
      tmp = die_map_.up_face;
      die_map_.up_face = die_map_.front_face();
      die_map_.back_face = tmp;
      break;
    case 'l':
      tmp = die_map_.right_face;
      die_map_.right_face = die_map_.bottom_face();
      die_map_.up_face = tmp;
      break;
    case 'r':
      tmp = die_map_.up_face;
      die_map_.up_face = die_map_.left_face();
      die_map_.right_face = tmp;
      break;
    
    default:
      cout << "Invalid direction" << endl;
      break;
      
  }
}

void NormalDie::InitDieMap(int up_face)
{
  die_map_.up_face = up_face;
  die_map_.back_face = 3;
  switch (up_face)
  {
  case 5:
    die_map_.right_face = 6;
    break;
  case 1:
    die_map_.right_face = 5;
      break;
  case 2:
    die_map_.right_face = 1;
    break;
  case 6:
    die_map_.right_face = 2;
    break;
  default:
    break;

  }

  
}

string NormalDie::getName() const
{
  string ret_val = getPlayerInitial() + to_string(die_map_.up_face) + to_string(die_map_.right_face);
  return ret_val;
}


