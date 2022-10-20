#include "PhysicalAttributes.h"

// constructors
PhysicalAttribute::PhysicalAttribute(){};

// when the object of physical attributes amongst the NBA players is created, it will take in the skills: stamina, pace, physical and height
PhysicalAttribute::PhysicalAttribute(Attribute _stamina, Attribute _pace, Attribute _physical, Attribute _height) : 
stamina(_stamina), pace(_pace), physical(_physical), height(_height) {}

// setters
void PhysicalAttribute::set_stamina(Attribute _stamina){stamina = _stamina;}
        
void PhysicalAttribute::set_pace(Attribute _pace){pace = _pace;}

void PhysicalAttribute::set_physical(Attribute _physical){physical = _physical;}

void PhysicalAttribute::set_height(Attribute _height){height = _height;}

// getters =  returns the particular attribute of a player        
Attribute PhysicalAttribute::get_stamina(){return stamina;}
        
Attribute PhysicalAttribute::get_pace(){return pace;}

Attribute PhysicalAttribute::get_physical(){return physical;}

Attribute PhysicalAttribute::get_height(){return height;}

// returning the value which represents the rates of all the four physical attributes
int PhysicalAttribute:: total_physicalAttributes_rates() {
    return stamina.get_rates() + pace.get_rates() + physical.get_rates() + height.get_rates();
}

PhysicalAttribute::~PhysicalAttribute(){}