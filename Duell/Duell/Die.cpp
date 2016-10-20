#include "Die.h"




Die::Die(char player_initial)
{
  player_initial_ = player_initial;
  is_captured_ = false;
}

char Die::getPlayerInitial() const
{
  return player_initial_;
}




Die::~Die()
{
}

bool Die::isCaptured() const
{
  return is_captured_;
}

pair<int, int> Die::getDieLocation() const
{
  return die_location_;
}

void Die::setDieLocation(int row, int column)
{
  //assuming all validation has been done before setDieLocation is called
  die_location_.first = row;
  die_location_.second = column;
}






