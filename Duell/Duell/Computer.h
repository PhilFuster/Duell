#pragma once
#include "Player.h"
class Computer :
    public Player
{
public:
    //Used when just 1 human player
    Computer();
    //Used if wanted to see 2 computers play each other
    Computer(string name, int home_row);
    ~Computer();
};

