#include "PowerForward.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    int test_n = 1;
    CommonSkills skills;
    skills.set_ball_ctrl(3);
    skills.set_dribble(6);
    skills.set_pass(9);
    skills.set_shoot(1);

    PhysicalAttribute physicalskills;
    physicalskills.set_pace(9);
    physicalskills.set_stamina(10);
    physicalskills.set_physical(7);
    physicalskills.set_height(2);

    Attribute dunks(5);
    Attribute dives(2);
    Attribute cordination(8);

    PowerForward Avi;
    Avi.set_name("Avi Aditya");
    Avi.set_commonSkill_rates(skills);
    Avi.set_physicalAttribute_rates(physicalskills);
    Avi.set_dunks(dunks);
    Avi.set_dives(dives);
    Avi.set_cordination(cordination);
    Avi.set_requiredSalary_for_player(300000);

    if (Avi.get_name() != "Avi Aditya"){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_requiredSalary_for_players() != 300000){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_dunks().get_rates() != 5){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_dives().get_rates() != 2){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_cordination().get_rates() != 8){
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

    // end of test 1

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

    Attribute distributing_2(5);
    Attribute diving_2(2);
    Attribute handling_2(8);

    PowerForward Lauren;
    Lauren.set_name("Radhika Joshi");
    Lauren.set_commonSkill_rates(skills_2);
    Lauren.set_physicalAttribute_rates(physicalskills_2);
    Lauren.set_dunks(distributing_2);
    Lauren.set_dives(diving_2);
    Lauren.set_cordination(handling_2);
    Lauren.set_requiredSalary_for_player(450000);

    Lauren.printing_info();
    
    if (Lauren.avg_playerRates() < 6.05 || Lauren.avg_playerRates() > 6.15){ 
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

    Attribute distributing_3(2);
    Attribute diving_3(2);
    Attribute handling_3(2);

    PowerForward Prakhar;
    Prakhar.set_name("Prakhar");
    Prakhar.set_commonSkill_rates(skills_3);
    Prakhar.set_physicalAttribute_rates(physicalskills_3);
    Prakhar.set_dives(diving_3);
    Prakhar.set_dunks(distributing_3);
    Prakhar.set_cordination(handling_3);
    Prakhar.set_requiredSalary_for_player(450000);

    Prakhar.printing_info();
    
    if (Prakhar.avg_playerRates() !=4){ 
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

    Attribute distributing_4(10);
    Attribute diving_4(10);
    Attribute handling_4(10);

    PowerForward Atharva;
    Atharva.set_name("Atharva");
    Atharva.set_commonSkill_rates(skills_4);
    Atharva.set_physicalAttribute_rates(physicalskills_4);
    Atharva.set_dives(diving_4);
    Atharva.set_dunks(distributing_4);
    Atharva.set_cordination(handling_4);
    Atharva.set_requiredSalary_for_player(450000);

    Atharva.printing_info();
    
    if (Atharva.avg_playerRates() < 8.35 || Atharva.avg_playerRates() > 8.45){ 
        cout << "Error in test: " << test_n << endl;
    }   

    return 0;
}