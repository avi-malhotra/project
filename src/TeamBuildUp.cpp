#include "TeamBuildUp.h"
#include <iostream>
#include <string>

using namespace std;

// constructor that takes in a pointer to a ChoosingModule and a pointer to a NBA
TeamBuildUp::TeamBuildUp(ChoosingModule* _electable_players, NBA* _nba) {
    electable_players = _electable_players;
    nba = _nba;
}

// intializes the user team
void TeamBuildUp::creating_userTeam() {
    char input = ' ';
    int flag = 0;
    string playerPosition;
    int starting_salary = 5000000;
    string user_teamNames[4] = {"<1>", "<2>", "<3>", "<4>"};
    int positionsFilled[4] = {0,0,0,0};
    bool is_team_full = false;
    int user_teamSalaries[4] = {0,0,0,0};
    int remainingSalary = starting_salary;
    string playerName;

    while (input != 'X'){
        cout << "Enter x to begin the Premier League Simulation: ";
        cin >> input;
        cout << endl;
        if (input != 'x') {
            cout << "Not a valid input." << endl;
        }
    } 

    input = ' ';   
        
    for (int i = 0; i < 8; i++) {
            cout << nba->get_teams()[i].get_teamName() << endl;
        }
    cout << endl;
    
    // nba->set_Userteam_name();
    nba->reset_userTeam();
        
    cout << "You're selected " << nba->get_Userteam_name() << endl << endl;

    cout << "The salary Capacity for your team is " << starting_salary << ".  You would want to spend it wisely!" << endl << endl;
        
    bool is_team_created = false;
        
    while (is_team_created == false) {
        
        cout << "PointGuard, ShootingGuard, SmallForward, PowerForward" << endl << endl;
        cout << "Please enter the position of the player out of the proovided options provided above: ";
        cin >> playerPosition;
        cout << endl;

        if (playerPosition == "PointGuard") {
            electable_players->printing_possiblePlayers(playerPosition);
            cout << endl;
            cout << "The remaining of your salary capacity is: " << remainingSalary << endl << endl;
            cout << "Enter the name for the player you have choosen from the above options to add to your team: ";
            cin >> playerName;
            
            while (flag == 0){
                for (int i = 0; i < 17; i++){
                    if (electable_players->get_pg_selection()[i].get_name() == playerName){
                        flag = 1;
                    }
                }
                if (flag == 0){
                    cout << "The name entered is not valid. Please Enter Again: ";
                    cin >> playerName;
                }
            }
            flag = 0;

            nba->set_user_Team_pointG(electable_players->selecting_pg(playerName));

            user_teamNames[0] = playerName;
            positionsFilled[0] = 1;
            remainingSalary =  remainingSalary + user_teamSalaries[0];
            user_teamSalaries[0] = nba->get_team(nba->get_Userteam_name())->get_teamMembers()[0]->get_requiredSalary_for_players();
            remainingSalary =  remainingSalary - user_teamSalaries[0];

            cout << endl;
            is_team_full = true;
            for (int i = 0; i < 4; i++) {
                cout<< user_teamNames[i]<< "| Player salary is: " << user_teamSalaries[i]<< endl;
                if (positionsFilled[i]== 0) {
                    is_team_full = false;
                    }
            }
            cout << endl;

            cout << "The salary capacity remainining is : " << remainingSalary << endl << endl; 

            while (input != 'Y' && input != 'N'){
                cout << "Is your team completed? (Y/N): ";
                cin >> input;
                cout << endl;
                if (input != 'Y' && input != 'N') {
                    cout << "The Letter entered is ot a valid input." << endl;
                }
            }

            if (input == 'Y'){
                if (is_team_full && remainingSalary >= 0){
                    cout << "Congratulations! You have now successfully finished creating your team!" << endl << endl;
                    is_team_created = true;
                }else{
                    cout << "Your current team is not valid. Either it hasn't been completely filled or your total team cost is over the salary capacity." << endl;
                    cout << "You need to alter your team." << endl << endl;
                }
            }
            input = ' ';

        } else if (playerPosition == "ShootingGuard") {
            
            electable_players->printing_possiblePlayers(playerPosition);
            cout << endl;
            cout << "The remaining of your salary capacity is: "<< remainingSalary<< endl;
            cout << "Enter the name for the player you have choosen from the above options to add to your team: ";
            cin >> playerName;
            
            while (flag == 0){
                for (int i = 0; i < 17; i++){
                    if (electable_players->get_sg_selection()[i].get_name() == playerName){
                        flag = 1;
                    }
                }
                if (flag == 0){
                    cout << "The name entered is not valid. Please Enter Again: ";
                    cin >> playerName;
                }
            }
            flag = 1;

            nba->set_user_team_shootingG(electable_players->selecting_sg(playerName));

            user_teamNames[1] = playerName;
            positionsFilled[1] = 1;
            remainingSalary =  remainingSalary + user_teamSalaries[1];
            user_teamSalaries[1] = nba->get_team(nba->get_Userteam_name())->get_teamMembers()[1]->get_requiredSalary_for_players();
            remainingSalary =  remainingSalary - user_teamSalaries[1];

            cout << endl;
            is_team_full = true;
            for (int i = 0; i < 4; i++) {
                    cout << user_teamNames[i] << " | Player salary: " << user_teamSalaries[i] << endl;
                    if (positionsFilled[i] == 0){
                        is_team_full = false;
                    }
            }
            cout << endl;

            cout << "Your remaining salary cap is : " << remainingSalary << endl << endl; 

            while (input != 'Y' && input != 'N'){
                cout << "Is your team completed? (Y/N): ";
                cin >> input;
                cout << endl;
                if (input != 'Y' && input != 'N') {
                    cout << "The Letter entered is ot a valid input" << endl;
                }
            }

            if (input == 'Y'){
                if (is_team_full && remainingSalary >= 0){
                    cout << "Congratulations! You have now successfully finished creating your team!" << endl << endl;
                    is_team_created = true;
                }else{
                    cout << "Your current team is not valid. Either it hasn't been completely filled or your total team cost is over the salary capacity." << endl;
                    cout << "You need to alter your team." << endl << endl;
                }
            }
            input = ' ';

        } else if (playerPosition == "SmallForward") {
            
            electable_players->printing_possiblePlayers(playerPosition);
            cout << endl;
            cout << "The remaining of your salary capacity is: "<< remainingSalary<< endl;
            cout << "Enter the name of the player you wish to add to your team from the above list: ";
            cin >> playerName;
            
            while (flag == 0){
                for (int i = 0; i < 17; i++){
                    if (electable_players->get_sf_selection()[i].get_name() == playerName){
                        flag = 1;
                    }
                }
                if (flag == 0){
                    cout << "Not a valid name. Enter again: ";
                    cin >> playerName;
                }
            }
            flag = 0;

            nba->set_user_team_smallF(electable_players->selecting_sf(playerName));

            user_teamNames[2] = playerName;
            positionsFilled[2] = 1;
            remainingSalary =  remainingSalary + user_teamSalaries[2];
            user_teamSalaries[2] = nba->get_team(nba->get_Userteam_name())->get_teamMembers()[2]->get_requiredSalary_for_players();
            remainingSalary =  remainingSalary - user_teamSalaries[2];

            cout << endl;
            is_team_full = true;
            for (int i = 0; i < 4; i++) {
                    cout << user_teamNames[i] << " | Player salary: " << user_teamSalaries[i] << endl;
                    if (positionsFilled[i] == 0){
                        is_team_full = false;
                    }
            }
            cout << endl;

            cout << "The remaining of your salary capacity is: "<< remainingSalary<< endl;
            while (input != 'Y' && input != 'N'){
                cout << "Is your team completed? (Y/N): ";
                cin >> input;
                cout << endl;
                if (input != 'Y' && input != 'N') {
                    cout << "The Letter entered is ot a valid input" << endl;
                }
            }

            if (input == 'Y'){
                if (is_team_full && remainingSalary >= 0){
                    cout << "Congratulations! You have now successfully finished creating your team!" << endl << endl;
                    is_team_created = true;
                }else{
                    cout << "Your team is not valid. Either it hasn't been completely filled or your total team cost is over the salary cap." << endl;
                    cout << "You need to alter your team." << endl << endl;
                }
            }
            input = ' ';

        } else if (playerPosition == "PowerForward") {
            electable_players -> printing_possiblePlayers(playerPosition);
            cout << endl;
            cout << "The remaining of your salary capacity is: "<< remainingSalary<< endl;
            cout << "Enter the name of the player you wish to add to your team from the above list: ";
            cin >> playerName;
            
            while (flag == 0){
                for (int i = 0; i < 17; i++){
                    if (electable_players->get_pf_selection()[i].get_name() == playerName){
                        flag = 1;
                    }
                }
                if (flag == 0){
                    cout << "Not a valid name. Enter again: ";
                    cin >> playerName;
                }
            }
            flag = 0;

            nba->set_user_team_powerF(electable_players->selecting_pf(playerName));


            user_teamNames[3] = playerName;
            positionsFilled[3] = 1;
            remainingSalary =  remainingSalary + user_teamSalaries[3];
            user_teamSalaries[3] = nba->get_team(nba->get_Userteam_name())->get_teamMembers()[2]->get_requiredSalary_for_players();
            remainingSalary =  remainingSalary - user_teamSalaries[3];

            cout << endl;
            is_team_full = true;
            for (int i = 0; i < 4; i++) {
                    cout << user_teamNames[i] << " | Player salary: " << user_teamSalaries[i] << endl;
                    if (positionsFilled[i] == 0){
                        is_team_full = false;
                    }
            }
            cout << endl;

            cout << "Your remaining salary cap is : " << remainingSalary << endl << endl; 

            while (input != 'Y' && input != 'N'){
                cout << "Is your team completed? (Y/N): ";
                cin >> input;
                cout << endl;
                if (input != 'Y' && input != 'N') {
                    cout << "Not a valid input." << endl;
                }
            }

            if (input == 'Y'){
                if (is_team_full && remainingSalary >= 0){
                    cout << "Congratulations! You have now successfully finished creating your team!" << endl << endl;
                    is_team_created = true;
                }else{
                    cout << "Your team is not valid. Either it hasn't been completely filled or your total team cost is over the salary cap." << endl;
                    cout << "You need to alter your team." << endl << endl;
                }
            }
            input = ' ';

        } else {
            cout << "Invalid input" << endl << endl;
        }
    }
}

        