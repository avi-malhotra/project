#ifndef ShootingGuard_h
#define ShootingGuard_h

#include "Attribute.h"
#include "Player.h"

// A ShootingGuard is a class inherited from the class Player, representing a
// basketball player position: Shooting Guard
class ShootingGuard : public Player {
 public:
  // constructors
  ShootingGuard();
  ShootingGuard(string _name, PhysicalAttribute _physicalAttributes_rates,
             CommonSkills _commonSkills_rates, float _salary, Attribute _leaping_ability,
             Attribute _on_the_ball);

  // printing
  void printing_info();
  
  // return avg player rating
  float avg_playerRates() override;
  // ~ShootingGuard();
};

#endif
