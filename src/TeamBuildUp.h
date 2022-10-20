#ifndef TeamBuildUp_h
#define TeamBuildUp_h

#include <iostream>
#include <string>
#include"ChoosingModule.h"
#include"ChoosingModule.h"

#include "ChoosingModule.h"
#include "NBA.h"
#include "Player.h"

using namespace std; 

class TeamBuildUp{
    private:
    ChoosingModule* electable_players;
    NBA* nba; 
    public:
    TeamBuildUp(ChoosingModule* _electable_players, NBA* _nba);
    void creating_userTeam();
};

#endif