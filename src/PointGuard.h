#ifndef PointGuard_h
#define PointGuard_h

#include "Attribute.h"
#include "Player.h"

// A PointGuard is a class inherited from the class Player, representing a
// basketball player position: Point Guard
class PointGuard : public Player {
 public:
  // constructors
  PointGuard();
  PointGuard(string _name, PhysicalAttribute _physicalAttributes_rates,
             CommonSkills _commonSkills_rates, float _salary, Attribute _speed,
             Attribute _agility, Attribute _core_strength);

  // printing
  void printing_info();
  
  // return avg player rating
  float avg_playerRates() override;
  // ~PointGuard();
};

#endif
