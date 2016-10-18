//
//View of the Board class
//
#pragma once

#include "Board.h"
class BoardView
{
public:
    BoardView(Board &grid);
    ~BoardView();
    void PrintBoard(const Board &grid) const;
};

