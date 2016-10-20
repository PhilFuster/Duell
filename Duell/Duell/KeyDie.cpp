#include "KeyDie.h"



KeyDie::KeyDie(char player_initial) : Die(player_initial)
{
  
  
}


KeyDie::~KeyDie()
{
}

void KeyDie::Roll(char direction) 
{
}

string KeyDie::getName() const
{
  string ret_val = getPlayerInitial() + to_string(faces_) + to_string(faces_);
  return ret_val;
}


