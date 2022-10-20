#ifndef UltimateTeam_h
#define UltimateTeam_h

#include <iostream>
#include <string>

#include "Player.h"
#include "PointGuard.h"
#include "PowerForward.h"
#include "ShootingGuard.h"
#include "SmallForward.h"

using namespace std;

// the UltimateTeam class is a class which stores the team name and team
// members. There are four players in each team, a PointGuard, ShootingGuard,
// SmallForward, and PowerForward.

class UltimateTeam {
 private:
  string NBA_teamName;
  Player** teamMembers;

 public:
  // constructors
  UltimateTeam();
  UltimateTeam(const UltimateTeam& team);
  UltimateTeam& operator=(UltimateTeam team);

  // various get/set functions
  string get_teamName() const;
  Player** get_teamMembers();
  Player** get_teamMembers() const;
  void set_teamName(string _new_teamName);
  void set_teamMembers(Player** _teamMembers);
  void set_teamPointG(PointGuard pointg);
  void set_teamShootingG(ShootingGuard shootingG);
  void set_teamSmallF(SmallForward smallF);
  void set_teamPowerF(PowerForward powerF);

  // a function that rests the team members of a team
  void reset_teamMembers();

  // a function that prints our the player names
  void printing_playerNames();
};

#endif