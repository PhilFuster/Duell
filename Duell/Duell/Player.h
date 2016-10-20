#pragma once

#include "Board.h"

class Player
{
public:
    Player(string name, int home_row);
    virtual ~Player();
    vector<Die *> getOpponentDieCollection(const Board& B, int home_row) const;
    virtual void SetMyDieCollection(Die * D);
    virtual void Play(Board & B);
    void AttachBoard(Board& B);
    virtual void CreateMove(Board& B)=0;
    bool isDieLocationValid(int row, int column);
    
    char getInitial() const;
    int getHomeRow() const;
    

private:
  vector<Die *> my_dice_;
  string player_type_;
  int home_row_;
};

