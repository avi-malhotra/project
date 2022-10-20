#ifndef theTournament_H
#define theTournament_H
#include <iostream>
#include <string>

#include "NBA.h"
#include "tournamentMatch.h"
#include "ChoosingModule.h"

using namespace std; 

class theTournament{
    private: 
    NBA nba;

    public:
    theTournament(NBA nba);
    void tournament_simulation();
};

#endif
