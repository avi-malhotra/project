#include "CommonSkills.h"
#include <iostream>

using namespace std;

int main() {
    {
        // test 1
        int test_n = 1;
        CommonSkills cSkills;
        if (cSkills.get_ball_ctrl().get_rates() != 0 || cSkills.get_dribble().get_rates() != 0 || cSkills.get_pass().get_rates() != 0 || cSkills.get_shoot().get_rates() != 0){
            cout << "Error in test: " << test_n << endl;
        }
        Attribute pass(2);
        Attribute dribble(2);
        Attribute ball_ctrl(2);
        Attribute shoot (2);
        cSkills.set_ball_ctrl(ball_ctrl);
        cSkills.set_dribble(dribble);
        cSkills.set_pass(pass);
        cSkills.set_shoot(shoot);
        if (cSkills.totalSkills_rates() != 8) {
            cout << "Error in test: " << test_n << endl;
        }
    }


    {
        // test 2
        int test_n = 2;
        Attribute pass(10);
        Attribute dribble(4);
        Attribute ball_ctrl(2);
         Attribute shoot (3);
        CommonSkills cSkills(pass, ball_ctrl, dribble, shoot);
        if (cSkills.get_pass().get_rates() != 10) {
            cout << "Error in test: " << test_n << endl;
        }
        if (cSkills.get_ball_ctrl().get_rates() != 2) {
            cout << "Error in test: " << test_n << endl;
        }
        if (cSkills.get_dribble().get_rates() != 4) {
            cout << "Error in test: " << test_n << endl;
        }
        if (cSkills.get_shoot().get_rates() !=3 ){
            cout << "Error in test: " << test_n << endl;
        }
    }
    return 0;
}