#include "SmallForward.h"
#include <iostream>
#include <string>

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

    Attribute one_on_one(5);
    Attribute layups(2);

    SmallForward Avi;
    Avi.set_name("Avi Cornish");
    Avi.set_commonSkill_rates(skills);
    Avi.set_physicalAttribute_rates(physicalskills);
    Avi.set_layups(layups);
    Avi.set_one_on_one(one_on_one);
    Avi.set_requiredSalary_for_player(400000);

    if (Avi.get_name() != "Avi Aditya"){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_requiredSalary_for_players() != 300000){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_layups().get_rates() != 5){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_one_on_one().get_rates() != 2){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_commonSkill_rates().get_ball_ctrl().get_rates() != 3){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_commonSkill_rates().get_dribble().get_rates() != 6){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_commonSkill_rates().get_shoot().get_rates() != 6){
        cout << "Error in test: " << test_n << endl;}
    if (Avi.get_commonSkill_rates().get_pass().get_rates() != 1){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_physicalAttribute_rates().get_pace().get_rates() != 9){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_physicalAttribute_rates().get_height().get_rates() != 10){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_physicalAttribute_rates().get_physical().get_rates() != 7){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_physicalAttribute_rates().get_stamina().get_rates() != 2){
        cout << "Error in test: " << test_n << endl;
    }

    Avi.printing_info();
    
    if (Avi.avg_playerRates() < 6.05 || Avi.avg_playerRates() > 6.15) {
        cout << "Error in test: " << test_n << endl;
        cout << Avi.avg_playerRates();
    }

    // End of test 1

    test_n++;

    CommonSkills skills_2;
    skills_2.set_ball_ctrl(3);
    skills_2.set_dribble(6);
    skills_2.set_pass(9);
    skills_2.set_shoot(1);

    PhysicalAttribute physicalskills_2;
    physicalskills_2.set_pace(9);
    physicalskills_2.set_stamina(10);
    physicalskills_2.set_physical(7);
    physicalskills_2.set_height(2);

    Attribute one_on_one_2(5);
    Attribute layups_2(2);

    SmallForward Radhika;
    Radhika.set_name("Radhika Cornish");
    Radhika.set_commonSkill_rates(skills_2);
    Radhika.set_physicalAttribute_rates(physicalskills_2);
    Radhika.set_layups(one_on_one_2);
    Radhika.set_one_on_one(layups_2);
    Radhika.set_requiredSalary_for_player(450000);

    Radhika.printing_info();
    
    if (Radhika.avg_playerRates() < 5.8 || Radhika.avg_playerRates() > 5.9){ 
        cout << "Error in test: " << test_n << endl;
    }

    // End of test 2

    test_n++;

    CommonSkills skills_3;
    skills_3.set_ball_ctrl(3);
    skills_3.set_dribble(4);
    skills_3.set_pass(9);
    skills_3.set_shoot(1);

    PhysicalAttribute physicalskills_3;
    physicalskills_3.set_pace(2);
    physicalskills_3.set_stamina(10);
    physicalskills_3.set_physical(4);
    physicalskills_3.set_height(2);

    Attribute one_on_one_3(5);
    Attribute layups_3(2);

    SmallForward Radhika;
    Radhika.set_name("Radhika Joshi");
    Radhika.set_commonSkill_rates(skills_3);
    Radhika.set_physicalAttribute_rates(physicalskills_3);
    Radhika.set_layups(one_on_one_3);
    Radhika.set_one_on_one(layups_3);
    Radhika.set_requiredSalary_for_player(450000);

    Radhika.printing_info();
    
    if (Radhika.avg_playerRates() < 4.5 || Radhika.avg_playerRates() > 4.6){ 
        cout << "Error in test: " << test_n << endl;
    }
    // End of test 3
    
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

    Attribute one_on_one_4(5);
    Attribute layups_4(2);

    Player* p = new SmallForward;
    SmallForward Atharva;
    Atharva.set_name("Atharva");
    Atharva.set_commonSkill_rates(skills_4);
    Atharva.set_physicalAttribute_rates(physicalskills_4);
    Atharva.set_layups(one_on_one_4);
    Atharva.set_one_on_one(layups_4);
    Atharva.set_requiredSalary_for_player(450000);

    Atharva.printing_info();
    *p = Atharva;
    p->printing_info();
    
    if (p->avg_playerRates() < 6.7 || p->avg_playerRates() > 6.8){ 
        cout << "Error in test: " << test_n << endl;
    }

    return 0;
}