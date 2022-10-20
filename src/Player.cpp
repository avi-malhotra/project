#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    name = "";      // default name
    requiredSalary_for_player = 0;     // default player salary
}

// setters
void Player::set_name(string _name){name = _name;}

void Player::set_physicalAttribute_rates(PhysicalAttribute _physicalAttribute_rates){physicalAttribute_rates = _physicalAttribute_rates;}
  
void Player::set_commonSkill_rates(CommonSkills _commonSkill_rates){commonSkill_rates = _commonSkill_rates;}

void Player::set_requiredSalary_for_player(float _requiredSalary_for_player){requiredSalary_for_player = _requiredSalary_for_player;}

void Player::set_speed(Attribute _speed){speed = _speed;}

void Player::set_agility(Attribute _agility){agility = _agility;}

void Player::set_core_strength(Attribute _core_strength){core_strength = _core_strength;}

void Player::set_leaping_ability(Attribute _leaping_ability){leaping_ability = _leaping_ability;}
   
void Player::set_on_the_ball(Attribute _on_the_ball){on_the_ball = _on_the_ball;}

void Player::set_one_on_one(Attribute _on_to_one){one_on_one = _on_to_one;}

void Player::set_layups(Attribute _layups){layups = _layups;}

void Player::set_dunks(Attribute _dunks){dunks = _dunks;}

void Player::set_dives(Attribute _dives){dives = _dives;}

void Player::set_cordination(Attribute _cordination){cordination = _cordination;}


// getters
Attribute Player::get_dunks(){return dunks;}

Attribute Player::get_dives(){return dives;}

Attribute Player::get_cordination(){return cordination;}

Attribute Player::get_one_on_one(){return one_on_one;}

Attribute Player::get_layups(){return layups;}
  
Attribute Player::get_leaping_ability(){return leaping_ability;}
 
Attribute Player::get_on_the_ball(){return on_the_ball;}

Attribute Player::get_speed(){return speed;}

Attribute Player::get_agility(){return agility;}

Attribute Player::get_core_strength(){return core_strength;}

string Player::get_name(){return name;}
 
PhysicalAttribute Player::get_physicalAttribute_rates(){return physicalAttribute_rates;}
  
CommonSkills Player::get_commonSkill_rates(){return commonSkill_rates;}

float Player::get_requiredSalary_for_players() const {return requiredSalary_for_player;}

// prints player details
void Player::printing_info() {
    cout << "Name: " << name << endl;
    cout << "Salary: " << requiredSalary_for_player << endl;
    cout << "Stamina: " << physicalAttribute_rates.get_stamina().get_rates() << " ";
    cout << "|| Pace: " << physicalAttribute_rates.get_pace().get_rates() << " ";
    cout << "|| Physical: " << physicalAttribute_rates.get_physical().get_rates() << " ";
    cout << "|| Height: " << physicalAttribute_rates.get_height().get_rates() << endl;
    cout << "Pass: " << commonSkill_rates.get_pass().get_rates() << " ";
    cout << "|| Ball Control: " << commonSkill_rates.get_ball_ctrl().get_rates() << " ";
    cout << "|| Dribble: " << commonSkill_rates.get_dribble().get_rates() << endl;
    cout<< "|| Shoot: " << commonSkill_rates.get_shoot().get_rates() << endl;
}
