#include "UltimateTeam.h"
#include <iostream>

using namespace std;

// Creates team consisting of 4 players in the following order:
// a PointGuard, ShootingGuard,
// SmallForward, and PowerForward.

// constructors
UltimateTeam::UltimateTeam() {
    NBA_teamName = ""; 

    // creating 4 players
    teamMembers = new Player*[4];
    teamMembers[0] = new PointGuard;
    teamMembers[1] = new ShootingGuard;
    teamMembers[2] = new SmallForward;
    teamMembers[3] = new PowerForward;
}

// constructor that sets football team name
UltimateTeam::UltimateTeam(const UltimateTeam &team){
    teamMembers = new Player*[4];
    teamMembers[0] = new PointGuard;
    teamMembers[1] = new ShootingGuard;
    teamMembers[2] = new SmallForward;
    teamMembers[3] = new PowerForward;
    *teamMembers[0] = *(team.get_teamMembers()[0]);
    *teamMembers[1] = *(team.get_teamMembers()[1]);
    *teamMembers[2] = *(team.get_teamMembers()[2]);
    *teamMembers[3] = *(team.get_teamMembers()[3]);
    NBA_teamName = team.get_teamName();
}

// sets football team name and returns team members
UltimateTeam& UltimateTeam::operator=(UltimateTeam team){
    NBA_teamName = team.get_teamName();
    teamMembers = team.get_teamMembers();
    return *this;
}

// getters
string UltimateTeam::get_teamName()const{return NBA_teamName;}

Player** UltimateTeam::get_teamMembers(){return teamMembers;}

// const keyword is used to ensure that the team members cannot be changed
Player** UltimateTeam::get_teamMembers()const{return teamMembers;}

// setters
void UltimateTeam::set_teamName(string new_teamName){NBA_teamName = new_teamName;}

void UltimateTeam::set_teamMembers(Player** _teamMembers){
    *teamMembers[0] = *_teamMembers[0];
    *teamMembers[1] = *_teamMembers[1];
    *teamMembers[2] = *_teamMembers[2];
    *teamMembers[3] = *_teamMembers[3];
}

void UltimateTeam::set_teamPointG(PointGuard pointg){*teamMembers[0] = pointg;}

void UltimateTeam::set_teamShootingG(ShootingGuard shootingG){*teamMembers[1] = shootingG;}

void UltimateTeam::set_teamSmallF(SmallForward smallF){*teamMembers[2] = smallF;}

void UltimateTeam::set_teamPowerF(PowerForward powerF){*teamMembers[3] = powerF;}

// resets the team members allocated above in the team members array
void UltimateTeam::reset_teamMembers(){
    for (int i = 0; i < 4; i++){
        teamMembers[i]->set_name(""); 
    }
}

// printing out the team members
void UltimateTeam::printing_playerNames(){
    for (int i = 0; i < 4; i++){
        cout << teamMembers[i]->get_name() << endl;
    }
}