#pragma once
#include "Die.h"
class KeyDie :
    public Die
{
public:
    KeyDie(char player_initial);
    ~KeyDie();
    void Roll(char direction) override;
    string getName() const override;
    

private:
  //Key die all faces are 1
  int faces_ = 1;
};

