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
  int bottom_face;
  int right_face;
  int left_face;
  int front_face;
  int back_face;
  DieMap()
  {
    up_face = bottom_face = right_face = left_face = front_face = back_face = 0;
  }
  
  
};
class Die
{
  
  //TODO: What else belongs in a base Die class?
 public:
  Die();
  virtual ~Die();
  //Roll will be different depending on the type of Die calling the roll function
  //TODO: Will roll take any parameters? 
  virtual void Roll() = 0;
  virtual string getName() const = 0;
  
protected:
  //Constructor for derived classes to use in order to 
  //initialize player_initial_
  Die(char player_initial);
  char player_initial_;
 


private:
  


};

