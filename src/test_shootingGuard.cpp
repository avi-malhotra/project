#include "ShootingGuard.h"
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

    Attribute leaping_ability(5);
    Attribute on_the_ball(2);

    ShootingGuard Avi;
    Avi.set_name("Avi Aditya");
    Avi.set_commonSkill_rates(skills);
    Avi.set_physicalAttribute_rates(physicalskills);
    Avi.set_leaping_ability(leaping_ability);
    Avi.set_on_the_ball(on_the_ball);
    Avi.set_requiredSalary_for_player(300000);

    if (Avi.get_name() != "Avi Aditya"){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_requiredSalary_for_players() != 300000){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_leaping_ability().get_rates() != 5){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_on_the_ball().get_rates() != 2){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_commonSkill_rates().get_ball_ctrl().get_rates() != 3){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_commonSkill_rates().get_dribble().get_rates() != 6){
        cout << "Error in test: " << test_n << endl;
    }
    if (Avi.get_commonSkill_rates().get_pass().get_rates() != 9){
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
    
    if (Avi.avg_playerRates() < 5.8 || Avi.avg_playerRates() > 5.9){ 
        cout << "Error in test: " << test_n << endl;
    }

    // ENd of test 1

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

    Attribute leaping_ability_2(5);
    Attribute on_the_ball_2(2);

    ShootingGuard Radhika;
    Radhika.set_name("Radhika Joshi");
    Radhika.set_commonSkill_rates(skills_2);
    Radhika.set_physicalAttribute_rates(physicalskills_2);
    Radhika.set_leaping_ability(leaping_ability_2);
    Radhika.set_on_the_ball(on_the_ball_2);
    Radhika.set_requiredSalary_for_player(450000);

    Radhika.printing_info();
    
    if (Radhika.avg_playerRates() < 5.8 || Radhika.avg_playerRates() > 5.9){ 
        cout << "Error in test: " << test_n << endl;
    }

    // End of test 2

    test_n++;

    CommonSkills skills_3;
    skills_3.set_ball_ctrl(3);
    skills_3.set_dribble(6);
    skills_3.set_pass(9);
    skills_3.set_shoot(1);
    

    PhysicalAttribute physicalskills_3;
    
    physicalskills_3.set_pace(9);
    physicalskills_3.set_stamina(10);
    physicalskills_3.set_physical(7);
    physicalskills_3.set_height(2);

    Attribute leaping_ability_3(5);
    Attribute on_the_ball_3(2);

    ShootingGuard Prakhar;
    Prakhar.set_name("Prakhar");
    Prakhar.set_commonSkill_rates(skills_3);
    Prakhar.set_physicalAttribute_rates(physicalskills_3);
    Prakhar.set_leaping_ability(leaping_ability_3);
    Prakhar.set_on_the_ball(on_the_ball_3);
    Prakhar.set_requiredSalary_for_player(450000);

    Prakhar.printing_info();
    
    if (Prakhar.avg_playerRates() < 4.1 || Prakhar.avg_playerRates() > 4.2){ 
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

    Attribute leaping_ability_4(5);
    Attribute on_the_ball_4(2);

    ShootingGuard Jash;
    Jash.set_name("Jash");
    Jash.set_commonSkill_rates(skills_4);
    Jash.set_physicalAttribute_rates(physicalskills_4);
    Jash.set_leaping_ability(leaping_ability_4);
    Jash.set_on_the_ball(on_the_ball_4);
    Jash.set_requiredSalary_for_player(450000);

    Jash.printing_info();
    
    if (Jash.avg_playerRates() < 7.8 || Jash.avg_playerRates() > 7.9){ 
        cout << "Error in test: " << test_n << endl;
    }   

    return 0;
}