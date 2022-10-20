#ifndef ChoosingModule_h
#define ChoosingModule_h

#include <iostream>
#include <string>

#include "Player.h"
#include "PointGuard.h"
#include "PowerForward.h"
#include "ShootingGuard.h"
#include "SmallForward.h"
#include "UltimateTeam.h"

using namespace std;

// ChoosingModule is a class where all the possible players in the NBA simulation are loaded into the
// program.

class ChoosingModule {
 private:
  // various player selections
  PointGuard* pg_selection;
  ShootingGuard* sg_selection;
  SmallForward* sf_selection;
  PowerForward* pf_selection;


 public:
  // constructors
  ChoosingModule();

  ChoosingModule(ChoosingModule& choose_module);

  void operator=(ChoosingModule choose_module);

  // various get/set functions
  void input_pointguard(string filename);
  void input_shootingguard(string filename);
  void input_smallforward(string filename);
  void input_powerforward(string filename);
  
  PointGuard* get_pg_selection();
  ShootingGuard* get_sg_selection();
  SmallForward* get_sf_selection();
  PowerForward* get_pf_selection();

  // Printing the possible player selection options
  void printing_possiblePlayers(const string position);

  // selection functions
  PointGuard selecting_pg(string name);
  ShootingGuard selecting_sg(string name);
  SmallForward selecting_sf(string name);
  PowerForward selecting_pf(string name);

  ~ChoosingModule();  // destructor
};

#endif
