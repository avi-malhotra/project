#include "Result.h"
#include "UltimateTeam.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int test_n = 1;
    Result match_1;
    if (match_1.get_loserName() != "") {
        cout << "Error in test: " << test_n << endl;
    }
    test_n++;
    if (match_1.get_winnerName() != "") {
        cout << "Error in test: " << test_n << endl;
    }
    test_n++;
    if (match_1.get_losersScore() != 0) {
        cout << "Error in test: " << test_n << endl;
    }
    test_n++;
    if (match_1.get_winnersScore() != 0) {
        cout << "Error in test: " << test_n << endl;
    }
    match_1.set_loserName("Prakhar");
    match_1.set_winnerName("Susan");
    match_1.set_losersScore(0);
    match_1.set_winnersScore(3);
    match_1.printing_result();
}

