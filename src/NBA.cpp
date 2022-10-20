#include "NBA.h"

#include "ChoosingModule.h"

// constructor
NBA::NBA() {
  NBA_teams = new UltimateTeam[17];
  selectedTeam_by_user = "";
  userTeam_index = 0;
}

NBA::NBA(NBA& nba) {
  NBA_teams = new UltimateTeam[8];
  for (int i = 0; i < 8; i++) {
    NBA_teams[i] = nba.get_teams()[i];
  }
  selectedTeam_by_user = nba.get_Userteam_name();
  userTeam_index = nba.get_userTeam_index();
}

void NBA::operator=(NBA nba) {
  NBA_teams = new UltimateTeam[17];
  for (int i = 0; i < 8; i++) {
    NBA_teams[i] = nba.get_teams()[i];
  }
  selectedTeam_by_user = nba.get_Userteam_name();
  userTeam_index = nba.userTeam_index = nba.get_userTeam_index();
}

string NBA::get_Userteam_name() {
  return NBA::selectedTeam_by_user;
}

// read in teams from file
void NBA::input_teams(ChoosingModule players_availabe) {
  for (int i = 0; i < 17; i++) {
    NBA::set_user_Team_pointG(players_availabe.get_pg_selection()[i]);
    NBA::set_user_team_shootingG(players_availabe.get_sg_selection()[i]);
    NBA::set_user_team_smallF(players_availabe.get_sf_selection()[i]);
    NBA::set_user_team_powerF(players_availabe.get_pf_selection()[i]);
  }

  NBA_teams[0].set_teamName("Boston Celtics");
  NBA_teams[1].set_teamName("Brooklyn Nets");
  NBA_teams[2].set_teamName("New York Knicks");
  NBA_teams[3].set_teamName("Philadelphia 76ers");
  NBA_teams[4].set_teamName("Toronto Raptors");
  NBA_teams[5].set_teamName("Golden State Warriors");
  NBA_teams[6].set_teamName("Los Angeles Lakers");
  NBA_teams[7].set_teamName("Phoenix Suns");
  NBA_teams[8].set_teamName("Sacramento Kings");
  NBA_teams[9].set_teamName("Chicago Bulls");
  NBA_teams[10].set_teamName("Atlanta Hawks");
  NBA_teams[11].set_teamName("Cleveland Cavaliers");
  NBA_teams[12].set_teamName("Charlotte Hornets");
  NBA_teams[13].set_teamName("Detroit Pistons");
  NBA_teams[14].set_teamName("Miami Heat");
  NBA_teams[15].set_teamName("Indiana Pacers");
  NBA_teams[16].set_teamName("Orlando Magic");
  NBA_teams[17].set_teamName("Milwaukee Bucks");
  NBA_teams[18].set_teamName("Washington Wizards");
  NBA_teams[19].set_teamName("Denver Nuggets");
  NBA_teams[20].set_teamName("Dallas Mavericks");
  NBA_teams[21].set_teamName("Minnesota Timberwolves");
  NBA_teams[22].set_teamName("Houston Rockets");
  NBA_teams[23].set_teamName("Oklahoma City Thunder");
  NBA_teams[24].set_teamName("Memphis Grizzlies");
  NBA_teams[25].set_teamName("Portland Trail Blazers");
  NBA_teams[26].set_teamName("New Orleans Pelicans");
  NBA_teams[27].set_teamName("Utah Jazz");
  NBA_teams[28].set_teamName("San Antonio Spurs");
  NBA_teams[29].set_teamName("LA Clippers");
}

//resets the user selected team name
void NBA::reset_userTeam() {
  NBA_teams[NBA::userTeam_index].reset_teamMembers();
}
// void NBA::reset_userTeam(){
//     NBA_teams[userTeam_index].reset_team_members();
// }

// get user selected team name

int NBA::get_userTeam_index(){return NBA::userTeam_index;}

// gets the team name
UltimateTeam* NBA::get_team(string team_name){
    int status = 0; // changes to one when selection successfull;
    while (status == 0){   
        for (int i = 0; i < 8; i++){
            if (NBA_teams[i].get_teamName() == team_name){
                return &NBA_teams[i];
                status = 1;
            }
        }
        if (status == 0){
            cout << "Invalid team name. Enter team name again: ";
            cin >> team_name;
        }
    }
    return &NBA_teams[0];
}

//returns NBA_teams
UltimateTeam* NBA::get_teams(){
    return NBA_teams;
}

//sets user team defender
void NBA::set_user_Team_pointG(PointGuard pointG){
    NBA_teams[NBA::userTeam_index].set_teamPointG(pointG);
}

//sets user team goalkeeper
void NBA::set_user_team_shootingG(ShootingGuard shootingG){
    NBA_teams[NBA::userTeam_index].set_teamShootingG(shootingG);
}    

//sets user team midfielder
void NBA::set_user_team_smallF(SmallForward smallF){
    NBA_teams[NBA::userTeam_index].set_teamSmallF(smallF);
}

//sets user team striker
void NBA::set_user_team_powerF(PowerForward powerG){
    NBA_teams[NBA::userTeam_index].set_teamPowerF(powerG);
}

//destructor
NBA::~NBA(){
    delete [] NBA_teams;
}