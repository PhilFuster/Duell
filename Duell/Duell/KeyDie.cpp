#include "KeyDie.h"



KeyDie::KeyDie(char player_initial)
{
  player_initial_ = player_initial;
  
}


KeyDie::~KeyDie()
{
}

void KeyDie::Roll()
{
}

string KeyDie::getName() const
{
  string ret_val = player_initial_ + to_string(faces_) + to_string(faces_);
  return ret_val;
}


