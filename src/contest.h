#ifndef contest_H
#define contest_H
#include "UltimateTeam.h"
#include "Result.h"
#include "TeamBattle.h"
#include <iostream>
#include <string>

using namespace std;

class contest {
    private:
    UltimateTeam team_1;
    int team_1Score;
    UltimateTeam team_2;
    int team_2Score;
    UltimateTeam team_winning;
    Result contest_result;
    public:
    contest();
    contest(UltimateTeam _team_1, UltimateTeam _team_2);
    void set_the_teams(UltimateTeam _team_1, UltimateTeam _team_2);
   void play_nba();
    void increment(bool is_win);
    UltimateTeam get_team_winning();
    Result get_matchResult();
    // ~contest();
};

#endif