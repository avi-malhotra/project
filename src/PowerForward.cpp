#include "PowerForward.h"

#include <iostream>

using namespace std;

PowerForward::PowerForward() {}
// when the object of Power is created with physical attribute
PowerForward::PowerForward(string _name, PhysicalAttribute _physicalAttributes_rates,
             CommonSkills _commonSkills_rates, float _salary, Attribute _dunks,
             Attribute _dives, Attribute _cordination) {
  name = _name;
  physicalAttribute_rates = _physicalAttributes_rates;
  commonSkill_rates = _commonSkills_rates;
  requiredSalary_for_player = _salary;
  dunks = _dunks;
  dives = _dives;
  cordination = _cordination;
}

// printing the attributes of the player with the postion of Small Forward
void PowerForward::printing_info() {
  Player::printing_info();
  cout << "Dunks: " << dunks.get_rates() << " ";
  cout << "|| Divws: " << dives.get_rates() << " ";
  cout << "|| Cordination: "<< cordination.get_rates() << endl;
  cout << endl;
}

// returns average of all attributes player with the postion of Small Forward
float PowerForward::avg_playerRates() {
  return (float(physicalAttribute_rates.total_physicalAttributes_rates()) +
          float(commonSkill_rates.totalSkills_rates()) +
          float(dunks.get_rates()) + float(dives.get_rates())+ float(cordination.get_rates())) /
         10;  //
}
