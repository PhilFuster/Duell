//
//Base class for Die objects
//
#pragma once
#include <string>


using namespace std;

//Struct DieMap represents the faces of a die
struct DieMap
{
  int up_face;
  int bottom_face() const { return 7 - up_face; };
  int right_face;
  int left_face() const { return 7 - right_face; };
  int back_face;
  int front_face() const { return 7 - back_face; }; 
  
};
class Die
{
  
  //TODO: What else belongs in a base Die class?
 public:
  Die(char player_initial);
  char getPlayerInitial() const;
  virtual ~Die();
  
  //Roll will be different depending on the type of Die calling the roll function
  //TODO: Will roll take any parameters?
  //direction?
  virtual void Roll(char direction) = 0;
  
  virtual string getName() const = 0;
  bool isCaptured() const;

  pair<int, int> getDieLocation() const;

  //Assumes validation has been done before this point and sets die_location_
  void setDieLocation(int row, int column);

private:
  char player_initial_;
  bool is_captured_;
  pair<int, int> die_location_;


};

