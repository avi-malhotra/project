#include <iostream>
#include "TeamBuildUp.h"
#include "theTournament.h"
#include "NBA.h"
#include "ChoosingModule.h"

using namespace std;

int main() {
    ChoosingModule electable_players;
    electable_players.input_pointguard("PointGuard.txt");
    electable_players.input_shootingguard("ShootingGuard.txt");
    electable_players.input_smallforward("SmallForward.txt");
    electable_players.input_powerforward("PowerForward.txt");

    
    NBA nba;
    nba.input_teams(electable_players);

    // User creates team
    TeamBuildUp run(&electable_players, &nba);
    run.creating_userTeam();


    // Tournament is simulated
    theTournament nbatournament(nba);
    nbatournament.tournament_simulation();

    return 0;
}