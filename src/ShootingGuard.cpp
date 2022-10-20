#include "ShootingGuard.h"

#include <iostream>

using namespace std;

ShootingGuard::ShootingGuard() {}
// when the object of Point Guard is created with physical attribute
ShootingGuard::ShootingGuard(string _name, PhysicalAttribute _physicalAttributes_rates,
             CommonSkills _commonSkills_rates, float _salary, Attribute _leaping_ability,
             Attribute _on_the_ball){
                name = _name;
                 physicalAttribute_rates = _physicalAttributes_rates;
                 commonSkill_rates = _commonSkills_rates;
                 leaping_ability = _leaping_ability;
                 on_the_ball =_on_the_ball;
             }
             

// printing the attributes of the player with the postion of Small Forward
void ShootingGuard::printing_info() {
  Player::printing_info();
  cout << "Leaping Ability: " << leaping_ability.get_rates() << " ";
  cout << "|| On the Ball: " << on_the_ball.get_rates() << endl;
  cout << endl;
}

// returns average of all attributes player with the postion of Small Forward
float ShootingGuard::avg_playerRates() {
  return (float(physicalAttribute_rates.total_physicalAttributes_rates()) +
          float(commonSkill_rates.totalSkills_rates()) +
          float(leaping_ability.get_rates()) + float(on_the_ball.get_rates())) /
         10;  //
}
