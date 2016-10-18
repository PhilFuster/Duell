//
//Class for a Tournament of Duell Games 
#pragma once

#include "Player.h"

class Tournament
{
public:
    Tournament();
    ~Tournament();
    void TournamentStart();
    void TournamentContinue();
private:
  int round_num_;
  int p1_wins_;
  int p2_wins_;

};

