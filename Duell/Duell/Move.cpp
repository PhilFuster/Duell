#include "Move.h"



Move::Move()
{
}


Move::~Move()
{
}

pair<int, int> Move::getStartCoordinate() const
{
  return start_coordinate_;
}

pair<int, int> Move::getEndCoordinate() const
{
  return end_coordinate_;
}

char Move::getDirection() const
{
  return direction_;
}

void Move::setStartCoordinate(int row, int column)
{
  start_coordinate_.first = row;
  start_coordinate_.second = column;
}

void Move::setEndCoordinate(int row, int column)
{
  end_coordinate_.first = row;
  end_coordinate_.second = column;
}

void Move::setDirection()
{
}

void Move::setDieToMovie()
{
}
