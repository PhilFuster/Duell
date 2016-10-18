#include "NormalDie.h"

using namespace std;



NormalDie::NormalDie(int up_face, char player_initial)
{
  player_initial_ = player_initial;
  InitDieMap(up_face);
}


NormalDie::~NormalDie()
{
}

void NormalDie::Roll()
{
}

void NormalDie::InitDieMap(int up_face)
{
  die_map_.up_face = up_face;
  die_map_.bottom_face = 7 - up_face;
  die_map_.back_face = 3;
  die_map_.front_face = 7 - die_map_.back_face;
  switch (up_face)
  {
  case 5:
    die_map_.right_face = 6;
    die_map_.left_face = 7 - die_map_.right_face;
    break;
  case 1:
    die_map_.right_face = 5;
    die_map_.left_face = 7 - die_map_.right_face;
      break;
  case 2:
    die_map_.right_face = 1;
    die_map_.left_face = 7 - die_map_.right_face;
    break;
  case 6:
    die_map_.right_face = 2;
    die_map_.left_face = 7 - die_map_.right_face;
    break;
  default:
    break;

  }

  
}

string NormalDie::getName() const
{
  string ret_val = player_initial_ + to_string(die_map_.up_face) + to_string(die_map_.right_face);
  return ret_val;
}


