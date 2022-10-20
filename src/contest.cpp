#include "contest.h"

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

contest::contest(UltimateTeam _team_1, UltimateTeam _team_2)
    : team_1(_team_1), team_2(_team_2), team_winning(_team_1) {}

contest::contest() { team_winning = team_1; }

void contest::set_the_teams(UltimateTeam _team_1, UltimateTeam _team_2) {
  team_1 = _team_1;
  team_2 = _team_2;
}

void contest::increment(bool is_win) {if (is_win) { team_1Score++; }
else { team_2Score++;}}

// runs the match
void contest::play_nba(){
    TeamBattle battle(team_1, team_2);

    // team one goalkeeper vs team two goalkeeper
    increment(battle.who_won_pg_vs_sf());
    
    // team one striker vs team two defender
    increment(battle.who_win_sg_vs_sg());
   
    // team one midfielder vs team two midfielder
    increment(battle.who_won_sf_vs_pg());

    // team one midfielder vs team two midfielder
    increment(battle.who_won_sf_vs_pg());

    // team one defender vs team two striker
    increment(battle.who_won_pf_vs_pf());


    // Draw situation
    srand(2022);
    if (team_1Score == team_2Score) {
        int randomInteger_team_1 = 0;
        int randomInteger_team_2 = 0;

        while (randomInteger_team_1 == randomInteger_team_2) {
            randomInteger_team_1 = round(rand() % 11);
            randomInteger_team_2 = round(rand() % 11);
        }

        if (randomInteger_team_1 > randomInteger_team_2) {
            increment(true);
        }else{
            increment(false);
        }
    }
   
    if (team_1Score > team_2Score) {
        team_winning = team_1;
        contest_result.set_winnerName(team_1.get_teamName());
        contest_result.set_loserName(team_2.get_teamName());
        contest_result.set_winnersScore(team_1Score);
        contest_result.set_losersScore(team_2Score);
    }else{
        team_winning = team_2;
        contest_result.set_winnerName(team_1.get_teamName());
        contest_result.set_loserName(team_2.get_teamName());
        contest_result.set_winnersScore(team_1Score);
        contest_result.set_losersScore(team_2Score);
    }
}

// returns winning team
UltimateTeam contest::get_team_winning(){return   team_winning = team_1;
;}

// returns match result
Result contest::get_matchResult(){return contest_result;}
