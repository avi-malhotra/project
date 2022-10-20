#include "UltimateTeam.h"
#include "ChoosingModule.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    ChoosingModule electable_players;
    electable_players.input_pointguard("PointGuard.txt");
    electable_players.input_shootingguard("ShootingGuard.txt");
    electable_players.input_smallforward("SmallForward.txt");
    electable_players.input_powerforward("PowerForward.txt");

    UltimateTeam nba_team;
    nba_team.set_teamPointG(electable_players.selecting_pg()[0]);
    nba_team.set_teamShootingG(electable_players.selecting_sg()[1]);
    nba_team.set_teamSmallF(electable_players.selecting_sf()[2]);
    nba_team.set_teamPowerF(electable_players.selecting_pf()[3]);
    nba_team.printing_playerNames();
    nba_team.set_teamName("Radhika");
    cout << nba_team.get_teamName() << endl;
    nba_team.get_teamMembers()[0]->printing_info();
}