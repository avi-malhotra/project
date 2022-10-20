#ifndef PowerForward_h
#define PowerForward_h

#include "Attribute.h"
#include "Player.h"

// A PowerForward is a class inherited from the class Player, representing a
// basketball player position: Power Forward
class PowerForward : public Player {
 public:
  // constructors
  PowerForward();
  PowerForward(string _name, PhysicalAttribute _physicalAttributes_rates,
             CommonSkills _commonSkills_rates, float _salary, Attribute _dunks,
             Attribute _dives, Attribute _cordination);

  // printing
  void printing_info();
  
  // return avg player rating
  float avg_playerRates() override;
  // ~PowerForward();
};

#endif
