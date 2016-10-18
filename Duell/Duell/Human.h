#pragma once
#include "Player.h"
class Human :
    public Player
{
public:
    //Default constructor used when there is only 1 Human player
    //sets initial row to 0 and name "Human"
    Human();
    //Used when there are 2 human players
    Human(string name, int home_row);
    ~Human();

    
};

