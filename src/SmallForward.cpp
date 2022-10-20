#include "SmallForward.h"

#include <iostream>

using namespace std;

// constructors
SmallForward::SmallForward() {}
// when the object of Small Forward is created with physical attribute

SmallForward::SmallForward(string _name,
                           PhysicalAttribute _physicalAttribute_rates,
                           CommonSkills _commonSkill_rates, float _salary,
                           Attribute _one_on_one, Attribute _layups) {
  name = _name;
  physicalAttribute_rates = _physicalAttribute_rates;
  commonSkill_rates = _commonSkill_rates;
  requiredSalary_for_player = _salary;
  one_on_one = _one_on_one;
  layups = _layups;
}

// printing the attributes of the player with the postion of Small Forward
void SmallForward::printing_info() {
  Player::printing_info();
  cout << "One to One's: " << one_on_one.get_rates() << " ";
  cout << "|| Layups: " << layups.get_rates() << endl;
  cout << endl;
}

// returns average of all attributes player with the postion of Small Forward
float SmallForward::avg_playerRates() {
  return (float(physicalAttribute_rates.total_physicalAttributes_rates()) +
          float(commonSkill_rates.totalSkills_rates()) +
          float(one_on_one.get_rates()) + float(layups.get_rates())) /
         10;
}
