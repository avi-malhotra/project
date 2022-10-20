#ifndef TeamBattle_H
#define TeamBattle_H
#include "PointGuard.h"
#include "ShootingGuard.h"
#include "SmallForward.h"
#include "PowerForward.h"
#include "UltimateTeam.h"
#include <string>

using namespace std;

class TeamBattle {
    private:
    UltimateTeam team_one;
    UltimateTeam team_two;
    
    public:
    
    TeamBattle(UltimateTeam _team_one, UltimateTeam _team_two);
    bool who_won_pg_vs_sf();
    bool who_win_sg_vs_sg();
    bool who_won_sf_vs_pg();
    bool who_won_pf_vs_pf();
    // ~TeamBattle();
};

#endif