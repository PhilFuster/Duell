/*
 * Move class represents a Player's Move.
 * Move class will do validation as well as create the Move
 */
#pragma once
#include <iostream>


using namespace std;
class Move
{
public:
  Move();
  ~Move();
  pair<int, int> getStartCoordinate() const;
  pair<int, int> getEndCoordinate() const;
  char getDirection() const;
  void setStartCoordinate(int row, int column);
  void setEndCoordinate(int row, int column);
  void setDirection();
  void setDieToMovie();
  

private:
  pair<int, int> start_coordinate_;
  pair<int, int> end_coordinate_;
  char direction_;

};

