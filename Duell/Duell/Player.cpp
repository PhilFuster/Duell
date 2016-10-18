#include "Player.h"
#include "KeyDie.h"


Player::Player(string name, int home_row)
{
  player_type_ = name;
  home_row_ = home_row;
}
Player::~Player()
{
}

void Player::Play()
{
}

//Takes a Die * and pushes it into player die collection(my_die_)
void Player::SetMyDieCollection(Die * D)
{
  my_dice_.push_back(D);
}

void Player::AttachBoard(Board &B)
{
  B.CreatePlayerDie(getInitial(), getHomeRow(), my_dice_);
}

vector<Die*> Player::getOpponentDieCollection(const Board & B, int home_row) const
{
  
  return B.getPlayerDieCollection(home_row);
}

char Player::getInitial() const
{
  
  return player_type_[0];
}

int Player::getHomeRow() const
{
  return home_row_;
}


