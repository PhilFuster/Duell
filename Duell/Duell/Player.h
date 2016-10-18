#pragma once

#include "Board.h"

class Player
{
public:
    Player(string name, int home_row);
    virtual ~Player();
    virtual void Play();
    virtual void SetMyDieCollection(Die * D);
    void AttachBoard(Board& B);
    vector<Die *> getOpponentDieCollection(const Board& B, int home_row) const;
    char getInitial() const;
    int getHomeRow() const;
    

private:
  vector<Die *> my_dice_;
  string player_type_;
  int home_row_;
};

