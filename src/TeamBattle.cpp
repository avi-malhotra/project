#include "TeamBattle.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// constructor that takes in team 1 and team 2 and initialize the private variables
TeamBattle::TeamBattle(UltimateTeam _team_one, UltimateTeam _team_two){
    team_one = _team_one;
    team_two = _team_two;
}

// function to determine the winner in team player matchups, striker of team 1 is pitted against defender of team 2
bool TeamBattle::who_won_pg_vs_sf(){
    if (team_one.get_teamMembers()[0]->avg_playerRates() > team_two.get_teamMembers()[2]->avg_playerRates()) {  // team 1 win case
        return true;
    } else if (team_one.get_teamMembers()[0]->avg_playerRates() < team_two.get_teamMembers()[2]->avg_playerRates()) {   // team 2 win case
        return false;
    } else {    // draw case
        srand(time(NULL));
        int team_1_randomInt = 0;
        int team_2_randomInt = 0;
        while (team_1_randomInt == team_2_randomInt) {
                team_1_randomInt = round(rand() % 11);
                team_2_randomInt = round(rand() % 11);
        }
        if (team_1_randomInt > team_2_randomInt) {
                return true;
        }else{
                return false;
        }
    }
}
// function to determine the winner in team player matchups, midfielder of team 1 is pitted against midfielder of team 2
bool TeamBattle::who_win_sg_vs_sg(){
     if (team_one.get_teamMembers()[0]->avg_playerRates() > team_two.get_teamMembers()[2]->avg_playerRates()) {  // team 1 win case
        return true;
    } else if (team_one.get_teamMembers()[0]->avg_playerRates() < team_two.get_teamMembers()[2]->avg_playerRates()) {   // team 2 win case
        return false;
    } else {    // draw case
        srand(time(NULL));
        int team_1_randomInt = 0;
        int team_2_randomInt = 0;
        while (team_1_randomInt == team_2_randomInt) {
                team_1_randomInt = round(rand() % 11);
                team_2_randomInt = round(rand() % 11);
        }
        if (team_1_randomInt > team_2_randomInt) {
                return true;
        }else{
                return false;
        }
    }
}

// function to determine the winner in team player matchups, defender of team 1 is pitted against striker of team 2
bool TeamBattle::who_won_sf_vs_pg(){
    if (team_one.get_teamMembers()[0]->avg_playerRates() > team_two.get_teamMembers()[2]->avg_playerRates()) {  // team 1 win case
        return true;
    } else if (team_one.get_teamMembers()[0]->avg_playerRates() < team_two.get_teamMembers()[2]->avg_playerRates()) {   // team 2 win case
        return false;
    } else {    // draw case
        srand(time(NULL));
        int team_1_randomInt = 0;
        int team_2_randomInt = 0;
        while (team_1_randomInt == team_2_randomInt) {
                team_1_randomInt = round(rand() % 11);
                team_2_randomInt = round(rand() % 11);
        }
        if (team_1_randomInt > team_2_randomInt) {
                return true;
        }else{
                return false;
        }
    }
}

// function to determine the winner in team player matchups, here the goalkeeper is pitted against the other team's goalkeeper
bool TeamBattle::who_won_pf_vs_pf(){
    if (team_one.get_teamMembers()[0]->avg_playerRates() > team_two.get_teamMembers()[2]->avg_playerRates()) {  // team 1 win case
        return true;
    } else if (team_one.get_teamMembers()[0]->avg_playerRates() < team_two.get_teamMembers()[2]->avg_playerRates()) {   // team 2 win case
        return false;
    } else {    // draw case
        srand(time(NULL));
        int team_1_randomInt = 0;
        int team_2_randomInt = 0;
        while (team_1_randomInt == team_2_randomInt) {
                team_1_randomInt = round(rand() % 11);
                team_2_randomInt = round(rand() % 11);
        }
        if (team_1_randomInt > team_2_randomInt) {
                return true;
        }else{
                return false;
        }
    }
}