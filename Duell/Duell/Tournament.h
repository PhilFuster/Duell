//
//Class for a Tournament of Duell Games 
#pragma once
#include <string>

using namespace std;

class Tournament
{
public:
    Tournament();
    ~Tournament();
    void InitializeTournament();
    void PrintResults() const;
    void RunTournament();
    bool TournamentContinue() const;
private:
  int round_num_;
  int human_wins_;
  int computer_wins_;
};

