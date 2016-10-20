//
//View of the Board class
//
#pragma once

#include "Board.h"
class BoardView
{
public:
    BoardView();
    ~BoardView();
    void PrintBoard(const Board &grid) const;
};

