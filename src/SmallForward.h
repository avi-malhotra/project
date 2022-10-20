#ifndef SmallForward_h
#define SmallForward_h

#include "Attribute.h"
#include "Player.h"
// A SmallForward is a class inherited from the class Player, representing a
// basketball player position: Small Forward
class SmallForward : public Player {
 public:
   // constructors
  SmallForward();
  SmallForward(string _name, PhysicalAttribute _physicalAttribute_rates,
               CommonSkills _commonSkill_rates, float salary,
               Attribute _one_on_one, Attribute _layups);

  // printing
  void printing_info() override;

  // return avg player rating
  float avg_playerRates() override;
};
#endif