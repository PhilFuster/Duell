#pragma once
#include "Die.h"
#include <string>
#include <vector>

using namespace std;

class NormalDie :
    public Die
{
public:
    NormalDie(int up_face, char player_initial);
    virtual ~NormalDie();
    void Roll(char direction) override;
    void InitDieMap(int up_face);
    string getName() const override;
    

private:
  DieMap die_map_;
};

