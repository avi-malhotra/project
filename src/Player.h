#ifndef Player_h
#define Player_h

#include <string>

#include "CommonSkills.h"
#include "PhysicalAttributes.h"

using namespace std;

// Player is an abstract class in which the player types defender, goalkeeper,
// striker and midfielder are derived.

class Player {
 protected:
  string name;  // player name
  PhysicalAttribute physicalAttribute_rates;
  CommonSkills commonSkill_rates;
  Attribute speed;
  Attribute agility;
  Attribute core_strength;
  Attribute leaping_ability;
  Attribute on_the_ball;
  Attribute one_on_one;
  Attribute layups;
  Attribute dunks;
  Attribute dives;
  Attribute cordination;
  float requiredSalary_for_player;

 public:
  // constructors
  Player();

  // various get/set functions
  void set_name(string _name);
  void set_physicalAttribute_rates(PhysicalAttribute _physicalAttribute_rates);
  void set_commonSkill_rates(CommonSkills _commonSkill_rates);
  void set_requiredSalary_for_player(float _requiredSalary_for_player);
  void set_speed(Attribute _speed);
  void set_agility(Attribute _agility);
  void set_core_strength(Attribute _core_strength);
  void set_leaping_ability(Attribute _leaping_ability);
  void set_on_the_ball(Attribute _on_the_ball);
  void set_one_on_one(Attribute _on_to_one);
  void set_layups(Attribute _layups);
  void set_dunks(Attribute _dunks);
  void set_dives(Attribute _dives);
  void set_cordination(Attribute _cordination);
  Attribute get_speed();
  Attribute get_agility();
  Attribute get_core_strength();
  Attribute get_leaping_ability();
  Attribute get_on_the_ball();
  Attribute get_one_on_one();
  Attribute get_layups();
  Attribute get_dunks();
  Attribute get_dives();
  Attribute get_cordination();
  string get_name();
  PhysicalAttribute get_physicalAttribute_rates();
  CommonSkills get_commonSkill_rates();
  float get_requiredSalary_for_players() const;

  // virtual function to print player information
  virtual void printing_info();

  // pure virtual function for calculating mean player rating.
  virtual float avg_playerRates() = 0;
};

#endif