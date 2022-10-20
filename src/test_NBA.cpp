#include "NBA.h"
#include "ChoosingModule.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    ChoosingModule electable_players;
    electable_players.input_pointguard("Striker.txt");
    electable_players.input_shootingguard("Midfielder.txt");
    electable_players.input_smallforward("Defender.txt");
    electable_players.input_powerforward("Goalkeeper.txt");

    NBA nba;
    nba.input_teams(electable_players);
    nba.get_team("Arsenal")->print_player_names();    
    nba.get_teams()[0].get_team_members()[0]->print_info();
    nba.set_user_team_name();

    return 0;
}