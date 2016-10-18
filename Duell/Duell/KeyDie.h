#pragma once
#include "Die.h"
class KeyDie :
    public Die
{
public:
    KeyDie(char player_initial);
    virtual ~KeyDie();
    void Roll() override;
    string getName() const override;
    

private:
  //Key die all faces are 1
  int faces_ = 1;
};

