#include "Player.h"
#include "KeyDie.h"
#include "Move.h"


Player::Player(string name, int home_row)
{
  player_type_ = name;
  home_row_ = home_row;
}
Player::~Player()
{
}

void Player::Play(Board & B)
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

void Player::CreateMove(Board & B)
{
  Move M;
  string line;
  
  
}

bool Player::isDieLocationValid(int row, int column)
{
  cout << my_dice_[1]->getDieLocation().first << my_dice_[1]->getDieLocation().second;
  for(auto D: my_dice_)
  {
    //cout << D->getDieLocation().first << D->getDieLocation().second << endl;
    if (D->getDieLocation() == make_pair(row - 1, column))
    {
      return true;
    }
  }
  return false;
}

vector<Die*> Player::getOpponentDieCollection(const Board & B, int home_row) const
{
  
  return B.getOpponentDieCollection(home_row);
}

char Player::getInitial() const
{
  
  return player_type_[0];
}

int Player::getHomeRow() const
{
  return home_row_;
}


