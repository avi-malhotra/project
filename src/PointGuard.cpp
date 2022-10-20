#include "PointGuard.h"

#include <iostream>

using namespace std;

PointGuard::PointGuard() {}
// when the object of Point Guard is created with physical attribute
PointGuard::PointGuard(string _name,
                       PhysicalAttribute _physicalAttributes_rates,
                       CommonSkills _commonSkills_rates, float _salary,
                       Attribute _speed, Attribute _agility,
                       Attribute _core_strength) {
  name = _name;
  physicalAttribute_rates = _physicalAttributes_rates;
  commonSkill_rates = _commonSkills_rates;
  requiredSalary_for_player = _salary;
  speed = _speed;
  agility = _agility;
  core_strength = _core_strength;
}

// printing the attributes of the player with the postion of Small Forward
void PointGuard::printing_info() {
  Player::printing_info();
  cout << "Speed: " << speed.get_rates() << " ";
  cout << "|| Agiltiy: " << agility.get_rates() << " ";
  cout << "|| Core Strength: "<< core_strength.get_rates() << endl;
  cout << endl;
}

// returns average of all attributes player with the postion of Small Forward
float PointGuard::avg_playerRates() {
  return (float(physicalAttribute_rates.total_physicalAttributes_rates()) +
          float(commonSkill_rates.totalSkills_rates()) +
          float(speed.get_rates()) + float(agility.get_rates())+ float(core_strength.get_rates())) /
         10;  //
}
