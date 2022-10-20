#include "printingFixtures.h"
#include <iostream>
#include <string>

using namespace std;

printingFixtures::printingFixtures(UltimateTeam* _nba_teams, int* _fixing_teamIndexes, int _number_of_matches) :
nba_teams(_nba_teams), fixing_teamIndexes(_fixing_teamIndexes), number_of_matches(_number_of_matches) {}

void printingFixtures::printing() {
    cout << "Fixtures:" << endl;
    for (int i = 0; i < number_of_matches; i++) {
        cout << nba_teams[fixing_teamIndexes[2*i]].get_teamName();
        cout << " vs ";
        cout << nba_teams[fixing_teamIndexes[2*i+1]].get_teamName();
        cout << endl;
    }
    cout << endl;
}

printingFixtures::~printingFixtures(){};