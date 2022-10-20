#ifndef NBA_h
#define NBA_h

#include <string>

#include "ChoosingModule.h"
#include "UltimateTeam.h"

using namespace std;

class NBA {
 private:
  UltimateTeam* NBA_teams;
  string selectedTeam_by_user;
  int userTeam_index;

 public:
  // constructors
  NBA();

  NBA(NBA& nba);

  // assignment operator
  void operator=(NBA nba);

  // function to read in teams from player pool
  void input_teams(ChoosingModule players_availabe);

  // set/get user team name
  // void set_Userteam_name();
  string get_Userteam_name();

  // clear user team
  void reset_userTeam();

  // get user team index in football league teams array.
  int get_userTeam_index();

  // get a singular team
  UltimateTeam* get_team(string team_name);

  // get all teams
  UltimateTeam* get_teams();

  // set user team players
  void set_user_Team_pointG(PointGuard pointG);
  void set_user_team_shootingG(ShootingGuard shootingG);
  
  void set_user_team_smallF(SmallForward smallF);
  void set_user_team_powerF(PowerForward powerG);
  
  ~NBA();
};

#endif
