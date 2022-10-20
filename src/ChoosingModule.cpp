#include<iostream>
#include<string>
#include<fstream>
#include "ChoosingModule.h"

using namespace std;

// int main() {
  
// }

//constructors
ChoosingModule::ChoosingModule(){
    pg_selection = new PointGuard[17];
    sg_selection = new ShootingGuard[17]; 
    sf_selection = new SmallForward[17];
    pf_selection = new PowerForward[17]; 
}


ChoosingModule::ChoosingModule(ChoosingModule &choose_module){
    pg_selection = new PointGuard[17];
    sg_selection = new ShootingGuard[17]; 
    sf_selection = new SmallForward[17];
    pf_selection = new PowerForward[17]; 
    for (int i = 0; i < 8; i++){
        pg_selection[i] = choose_module.get_pg_selection()[i];
        sg_selection[i] = choose_module.get_sg_selection()[i];
        sf_selection[i] = choose_module.get_sf_selection()[i];
        pf_selection[i] = choose_module.get_pf_selection()[i];
    }
}

//assignment operator
void ChoosingModule::operator=(ChoosingModule choose_module){
    pg_selection = new PointGuard[17];
    sg_selection = new ShootingGuard[17]; 
    sf_selection = new SmallForward[17];
    pf_selection = new PowerForward[17]; 
    for (int i = 0; i < 8; i++){
        pg_selection[i] = choose_module.get_pg_selection()[i];
        sg_selection[i] = choose_module.get_sg_selection()[i];
        sf_selection[i] = choose_module.get_sf_selection()[i];
        pf_selection[i] = choose_module.get_pf_selection()[i];
    }
}

// Reads the attributes of PointGuard 
void ChoosingModule::input_pointguard(string filename){
    ifstream S_File(filename);
    
    string name;
    
    Attribute pace;
    Attribute stamina;
    Attribute physical;
    Attribute height;
    Attribute pass;
    Attribute dribble;
    Attribute ball_ctrl;
    Attribute shoot;
    Attribute speed;
    Attribute agility;
    Attribute core_strength;

    PhysicalAttribute physical_skills;
    CommonSkills common_skills;
    
    int speed_rates;
    int agility_rates;
    int core_strength_rates;
    int pace_rates;
    int physical_rates;
    int stamina_rating;
    int height_rates;
    int ball_ctrl_rates;
    int pass_rates;
    int dribble_rates;
    int shoot_rates;
    int cost;
    
    for (int i = 0; i < 8; i++){
        S_File >> name >> speed_rates >> agility_rates >> core_strength_rates >> pace_rates >> physical_rates >> stamina_rating >> height_rates
        >> ball_ctrl_rates >> pass_rates >> dribble_rates >> shoot_rates>>cost;

        pg_selection[i].set_name(name);
        pg_selection[i].set_requiredSalary_for_player(cost);

        speed.set_rates(speed_rates);
        agility.set_rates(agility_rates);
        core_strength.set_rates(core_strength_rates);

        pg_selection[i].set_speed(speed);
        pg_selection[i].set_agility(agility);
        pg_selection[i].set_core_strength(core_strength);

        pace.set_rates(pace_rates);
        physical.set_rates(physical_rates);
        stamina.set_rates(stamina_rating);
        height.set_rates(height_rates);

        physical_skills.set_pace(speed);
        physical_skills.set_physical(physical);
        physical_skills.set_stamina(stamina);
        physical_skills.set_height(height);

        pg_selection[i].set_physicalAttribute_rates(physical_skills);
    
        pass.set_rates(pass_rates);
        dribble.set_rates(dribble_rates);
        ball_ctrl.set_rates(ball_ctrl_rates);
        shoot.set_rates(shoot_rates);

        common_skills.set_ball_ctrl(ball_ctrl);
        common_skills.set_dribble(dribble);
        common_skills.set_pass(pass);
        common_skills.set_shoot(shoot);


        pg_selection[i].set_commonSkill_rates(common_skills);
    }
}

// Reads the attributes of ShootingGuard
void ChoosingModule::input_shootingguard(string filename){
    ifstream M_File(filename);
    
    string name;

    Attribute pace;
    Attribute stamina;
    Attribute physical;
    Attribute height;
    Attribute pass;
    Attribute dribble;
    Attribute ball_ctrl;
    Attribute shoot;
    Attribute leaping_ability;
    Attribute on_the_ball;

    PhysicalAttribute physical_skills;
    CommonSkills common_skills;
    
    int leaping_ability_rates;
    int on_the_ball_rates;
    int pace_rates;
    int physical_rates;
    int stamina_rating;
    int height_rates;
    int ball_ctrl_rates;
    int pass_rates;
    int dribble_rates;
    int shoot_rates;
    int cost;
    
    
    for (int i = 0; i < 8; i++){
        M_File >> name >> leaping_ability_rates >> on_the_ball_rates >> pace_rates >> physical_rates >> stamina_rating >> height_rates
        >> ball_ctrl_rates >> pass_rates >> dribble_rates >> cost;

        sg_selection[i].set_name(name);
        sg_selection[i].set_requiredSalary_for_player(cost);

        leaping_ability.set_rates(leaping_ability_rates);
        on_the_ball.set_rates(on_the_ball_rates);
        
        sg_selection[i].set_leaping_ability(leaping_ability);
        sg_selection[i].set_on_the_ball(on_the_ball);

        pace.set_rates(pace_rates);
        physical.set_rates(physical_rates);
        stamina.set_rates(stamina_rating);
        height.set_rates(height_rates);

        physical_skills.set_pace(pace);
        physical_skills.set_physical(physical);
        physical_skills.set_stamina(stamina);
        physical_skills.set_height(height);

        sg_selection[i].set_physicalAttribute_rates(physical_skills);

        pass.set_rates(pass_rates);
        dribble.set_rates(dribble_rates);
        ball_ctrl.set_rates(ball_ctrl_rates);
        shoot.set_rates(shoot_rates);

        common_skills.set_ball_ctrl(ball_ctrl);
        common_skills.set_dribble(dribble);
        common_skills.set_pass(pass);
        common_skills.set_shoot(shoot);

        sg_selection[i].set_commonSkill_rates(common_skills);
    }

}

// Reads the attributes of SmallForward
void ChoosingModule::input_smallforward(string filename){
    ifstream D_File(filename);
    
    string name;

    Attribute pace;
    Attribute stamina;
    Attribute physical;
    Attribute height;
    Attribute pass;
    Attribute dribble;
    Attribute ball_ctrl;
    Attribute shoot;
    Attribute one_on_one;
    Attribute layups;
    

    PhysicalAttribute physical_skills;
    CommonSkills common_skills;

    int layups_rates;
    int one_on_one_rates;
    int pace_rates;
    int physical_rates;
    int stamina_rating;
    int height_rates;
    int ball_ctrl_rates;
    int pass_rates;
    int dribble_rates;
    int shoot_rates;
    int cost;
    
    for (int i = 0; i < 8; i++){
        D_File >> name >> layups_rates >> one_on_one_rates >> pace_rates >> physical_rates >> stamina_rating >> height_rates
        >> ball_ctrl_rates >> pass_rates >> dribble_rates >> cost;

        sf_selection[i].set_name(name);
        sf_selection[i].set_requiredSalary_for_player(cost);

        layups.set_rates(layups_rates);
        one_on_one.set_rates(one_on_one_rates);

        sf_selection[i].set_layups(layups);
        sf_selection[i].set_one_on_one(one_on_one);

        pace.set_rates(pace_rates);
        physical.set_rates(physical_rates);
        stamina.set_rates(stamina_rating);
        height.set_rates(height_rates);

        physical_skills.set_pace(pace);
        physical_skills.set_physical(physical);
        physical_skills.set_stamina(stamina);
        physical_skills.set_height(height);

        sf_selection[i].set_physicalAttribute_rates(physical_skills);
    
        pass.set_rates(pass_rates);
        dribble.set_rates(dribble_rates);
        ball_ctrl.set_rates(ball_ctrl_rates);
        shoot.set_rates(shoot_rates);

        common_skills.set_ball_ctrl(ball_ctrl);
        common_skills.set_dribble(dribble);
        common_skills.set_pass(pass);
        common_skills.set_shoot(shoot);


        sf_selection[i].set_commonSkill_rates(common_skills);
        
    }
}

// Reads the attributes of Goalkeeper
void ChoosingModule::input_powerforward(string filename){
    ifstream G_File(filename);
    
    string name;

    Attribute pace;
    Attribute physical;
    Attribute stamina;
    Attribute height;
    Attribute pass;
    Attribute dribble;
    Attribute shoot;
    Attribute ball_ctrl;
    Attribute dives;
    Attribute dunks;
    Attribute cordination;

    PhysicalAttribute physical_skills;
    CommonSkills common_skills;

    int dives_rates;
    int cordination_rates;
    int dunks_rates;
    int pace_rates;
    int physical_rates;
    int stamina_rates;
    int height_rates;
    int ball_ctrl_rates;
    int pass_rates;
    int shoot_rates;
    int dribble_rates;
    int cost;

    
    for (int i = 0; i < 8; i++){
        G_File >> name >> dives_rates >> cordination_rates >> dunks_rates >> pace_rates >> physical_rates >> stamina_rates >> height_rates
        >> ball_ctrl_rates >> pass_rates >> dribble_rates >> cost;

        pf_selection[i].set_name(name);
        pf_selection[i].set_requiredSalary_for_player(cost);
        
        dives.set_rates(dives_rates);
        dunks.set_rates(dunks_rates);
        cordination.set_rates(cordination_rates);

        pf_selection[i].set_dives(dives);
        pf_selection[i].set_dunks(dunks);
        pf_selection[i].set_cordination(cordination);

        pace.set_rates(pace_rates);
        physical.set_rates(physical_rates);
        stamina.set_rates(stamina_rates);
        height.set_rates(height_rates);

        physical_skills.set_pace(pace);
        physical_skills.set_physical(physical);
        physical_skills.set_stamina(stamina);
        physical_skills.set_height(height);

        pf_selection[i].set_physicalAttribute_rates(physical_skills);
    
        pass.set_rates(pass_rates);
        dribble.set_rates(dribble_rates);
        ball_ctrl.set_rates(ball_ctrl_rates);
        shoot.set_rates(shoot_rates);

        common_skills.set_ball_ctrl(ball_ctrl);
        common_skills.set_dribble(dribble);
        common_skills.set_pass(pass);
        common_skills.set_shoot(shoot);

        pf_selection[i].set_commonSkill_rates(common_skills);
        
    }
}

//prints possible player position for the respective positions
void ChoosingModule::printing_possiblePlayers(const string position){
    if (position == "PointGuard"){
        for (int i = 0; i < 8; i++){
            pg_selection[i].printing_info();
        }
    }else if(position == "ShootingGuard"){
        for (int i = 0; i < 8; i++){
            sg_selection[i].printing_info();
        }
    }else if(position == "SmallForward"){
        for (int i = 0; i < 8; i++){
            sf_selection[i].printing_info();
        }
    }else{
        for (int i = 0; i < 8; i++){
            pf_selection[i].printing_info();
        }
    }
}

//Selcts a PointGuard from the 8 possible PointGuards
PointGuard ChoosingModule::selecting_pg(string name){
    for (int i = 0; i < 8; i++){
        if (pg_selection[i].get_name() == name){
            return pg_selection[i];
        }
    }
    return pg_selection[0];
}

//Selcts a ShootingGuard from the 8 possible ShootingGuard
ShootingGuard ChoosingModule::selecting_sg(string name){  
    for (int i = 0; i < 8; i++){
        if (sg_selection[i].get_name() == name){
            return sg_selection[i];
        }
    }
    return sg_selection[0];
} 

//Selcts a SmallForward from the 8 possible SmallForward    
SmallForward ChoosingModule::selecting_sf(string name){  
    for (int i = 0; i < 8; i++){
        if (sf_selection[i].get_name() == name){
            return sf_selection[i];
        }
    }
    return sf_selection[0];
} 

//Selcts a Goalkeeper from the 8 possible Goalkeeper    
PowerForward ChoosingModule::selecting_pf(string name){  
    for (int i = 0; i < 8; i++){
        if (pf_selection[i].get_name() == name){
            return pf_selection[i];
        }
    }
    return pf_selection[0];
}

//returns name of the selected PointGuard
PointGuard* ChoosingModule::get_pg_selection(){return pg_selection;}

//returns name of the selected ShootingGuard
ShootingGuard* ChoosingModule::get_sg_selection(){return sg_selection;}
 
//returns name of the selected SmallForward    
SmallForward* ChoosingModule::get_sf_selection(){return sf_selection;}

//returns name of the selected Goalkeeper
PowerForward* ChoosingModule::get_pf_selection(){return pf_selection;}

//destructor
ChoosingModule::~ChoosingModule(){
    delete [] pg_selection;
    delete [] sg_selection;
    delete [] sf_selection;
    delete [] pf_selection;
}