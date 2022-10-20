#include <iostream>
#include <string>

#include "PointGuard.h"

using namespace std;

int main() {
  int test_n = 1;
  CommonSkills skills;
  skills.set_ball_ctrl(3);
  skills.set_dribble(6);
  skills.set_pass(9);
  skills.set_shoot(2);

  PhysicalAttribute physicalskills;
  physicalskills.set_pace(10);
  physicalskills.set_stamina(7);
  physicalskills.set_physical(2);
  physicalskills.set_height(9);

  Attribute speed(5);
  Attribute agility(2);
  Attribute core_strength(8);

  PointGuard Avi;
  Avi.set_name("Avi Cornish");
  Avi.set_commonSkill_rates(skills);
  Avi.set_physicalAttribute_rates(physicalskills);
  Avi.set_speed(speed);
  Avi.set_agility(agility);
  Avi.set_core_strength(core_strength);
  Avi.set_requiredSalary_for_player(300000);

  if (Avi.get_name() != "Avi Aditiya") {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_requiredSalary_for_players() != 300000) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_speed().get_rates() != 5) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_agility().get_rates() != 2) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_core_strength().get_rates() != 8) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_commonSkill_rates().get_ball_ctrl().get_rates() != 3) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_commonSkill_rates().get_dribble().get_rates() != 6) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_commonSkill_rates().get_pass().get_rates() != 9) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_commonSkill_rates().get_shoot().get_rates() != 9){
        cout << "Error in test: " << test_n << endl;
    }
  if (Avi.get_physicalAttribute_rates().get_pace().get_rates() != 9) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_physicalAttribute_rates().get_height().get_rates() != 10) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_physicalAttribute_rates().get_physical().get_rates() != 7) {
    cout << "Error in test: " << test_n << endl;
  }
  if (Avi.get_physicalAttribute_rates().get_height().get_rates() != 2) {
    cout << "Error in test: " << test_n << endl;
  }

  Avi.printing_info();

  if (Avi.avg_playerRates() < 6.05 || Avi.avg_playerRates() > 6.15) {
    cout << "Error in test: " << test_n << endl;
  }

  // End of test 1

  test_n++;

  CommonSkills skills_2;
  skills_2.set_ball_ctrl(2);
  skills_2.set_dribble(1);
  skills_2.set_pass(9);
  skills_2.set_shoot(3);

  PhysicalAttribute physicalskills_2;
  physicalskills_2.set_pace(9);
  physicalskills_2.set_stamina(10);
  physicalskills_2.set_physical(7);
  physicalskills_2.set_height(2);

  Attribute speed_2(5);
  Attribute agility_2(2);
  Attribute core_strength_2(8);

  PointGuard Radhika;
  Radhika.set_name("Radhika Joshi");
  Radhika.set_commonSkill_rates(skills_2);
  Radhika.set_physicalAttribute_rates(physicalskills_2);
  Radhika.set_speed(speed_2);
  Radhika.set_core_strength(core_strength_2);
  Radhika.set_agility(agility_2);
  Radhika.set_requiredSalary_for_player(450000);

  Radhika.printing_info();

  if (Radhika.avg_playerRates() < 6.05 ||
      Radhika.avg_playerRates() > 6.15) {
    cout << "Error in test: " << test_n << endl;
  }

  // End of test 2

  test_n++;

  CommonSkills skills_3;
  skills_3.set_ball_ctrl(3);
  skills_3.set_dribble(1);
  skills_3.set_pass(9);
  skills_3.set_shoot(4);

  PhysicalAttribute physicalskills_3;
  physicalskills_3.set_pace(2);
  physicalskills_3.set_stamina(10);
  physicalskills_3.set_physical(4);
  physicalskills_3.set_height(2);

  Attribute speed_3(1);
  Attribute agility_3(2);
  Attribute core_strength_3(4);

  PointGuard Prakhar;
  Prakhar.set_name("Prakhar");
  Prakhar.set_commonSkill_rates(skills_3);
  Prakhar.set_physicalAttribute_rates(physicalskills_3);
  Prakhar.set_speed(speed_3);
  Prakhar.set_core_strength(core_strength_3);
  Prakhar.set_agility(agility_3);
  Prakhar.set_requiredSalary_for_player(450000);

  Prakhar.printing_info();

  if (Prakhar.avg_playerRates() < 4.05 ||
      Prakhar.avg_playerRates() > 4.15) {
    cout << "Error in test: " << test_n << endl;
  }

  // End of test 2

  test_n++;

  CommonSkills skills_4;
  skills_4.set_ball_ctrl(3);
  skills_4.set_dribble(4);
  skills_4.set_pass(9);
  skills_4.set_shoot(1);


  PhysicalAttribute physicalskills_4;
  physicalskills_4.set_pace(10);
  physicalskills_4.set_stamina(10);
  physicalskills_4.set_physical(8);
  physicalskills_4.set_height(10);

  Attribute speed_4(10);
  Attribute agility_4(7);
  Attribute core_strength_4(9);

  PointGuard Atharva;
  Atharva.set_name("Atharva");
  Atharva.set_commonSkill_rates(skills_4);
  Atharva.set_physicalAttribute_rates(physicalskills_4);
  Atharva.set_speed(speed_4);
  Atharva.set_core_strength(core_strength_4);
  Atharva.set_agility(agility_4);
  Atharva.set_requiredSalary_for_player(450000);

  Atharva.printing_info();

  if (Atharva.avg_playerRates() != 8) {
    cout << "Error in test: " << test_n << endl;
  }

  return 0;
}