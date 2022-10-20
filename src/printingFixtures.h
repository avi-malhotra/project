#ifndef printingFixtures_H
#define printingFixtures_H
#include "UltimateTeam.h" 
#include <iostream>
#include <string>

using namespace std;

class printingFixtures {
    private:
    int* fixing_teamIndexes;
    int number_of_matches;
    UltimateTeam* nba_teams;

    public:
    printingFixtures(UltimateTeam* _nba_teams, int* fixing_teamIndexes, int number_of_matches);
    void printing();
    ~printingFixtures();
};

#endif