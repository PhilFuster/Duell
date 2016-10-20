#include "Computer.h"


//This constructor for computer creates a player object and passes
// the player type and the initial row
//computer will always be farthest rows
Computer::Computer() : Player("Computer", 7)
{
  
}

Computer::Computer(string name, int home_row) : Player(name, home_row)
{
}


Computer::~Computer()
{
}

void Computer::CreateMove(Board & B)
{
}
