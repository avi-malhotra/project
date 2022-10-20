#include "PhysicalAttributes.h"
#include <iostream>

using namespace std;

int main() {
    {
        int test_n = 1;
        PhysicalAttribute skills;
        if (skills.get_stamina().get_rates() != 0 || skills.get_pace().get_rates() != 0 || skills.get_physical().get_rates() != 0 || skills.get_height().get_rates() != 0){
            cout << "Error in test: " << test_n << endl;
        }
        Attribute stamina(5);
        Attribute speed(8);
        Attribute strength(4);
        Attribute agility(9);
        skills.set_stamina(stamina);
        skills.set_pace(speed);
        skills.set_physical(strength);
        skills.set_height(agility);
        if (skills.total_physicalAttributes_rates() != 26) {
            cout << "Error in test: " << test_n << endl;
        }
    }
    {
        int test_n = 2;
        Attribute stamina(2);
        Attribute speed(1);
        Attribute strength(0);
        Attribute agility(10);
        PhysicalAttribute skills(stamina, speed, strength, agility);
        if (skills.get_stamina().get_rates() != 2) {
            cout << "Error in test: " << test_n << endl;
        }
        if (skills.get_pace().get_rates() != 1) {
            cout << "Error in test: " << test_n << endl;
        }
        if (skills.get_physical().get_rates() != 0) {
            cout << "Error in test: " << test_n << endl;
        }
        if (skills.get_height().get_rates() != 10) {
            cout << "Error in test: " << test_n << endl;
        }
    }
    return 0;
}