#include "theTournament.h"
#include "printingFixtures.h"
#include "tournamentMatch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// constructor that takes in the football league
theTournament::theTournament(NBA _nba){
    nba = _nba;
}

// runs the tournament simulation
void theTournament::tournament_simulation(){
    char input = 'N'; // Stores input when user asked to progress simulation.
    
    // Quarterfinal fixture organisation
    int* teamIndex = new int[17]; // used to know which teams have organised fixtures already.
    for (int i = 0; i < 17; i++) {
        teamIndex[i] = i;
    }

    int* quarterfinalsFixture_teamIndexes = new int[17]; // indexes of quarterfinal fixtures.
    
    srand(time(NULL));
    int rand_index = round(rand() % 17);

    for (int i = 0; i < 17; i++) {
        while (teamIndex[rand_index] == 9) {
            rand_index = round(rand() % 8);
        }
        teamIndex[rand_index] = 9;
        quarterfinalsFixture_teamIndexes[i] = rand_index;
    }
    
    delete [] teamIndex;

    // Progress simulation?
    while (input != 'X'){
        cout << "Enter X to show the quarterfinal fixtures: ";
        cin >> input;
        cout << endl;
        if (input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    }    
        
    // Print out quarterfinal fixtures
    printingFixtures quarterfinalPrinter(nba.get_teams(), quarterfinalsFixture_teamIndexes, 4);
    quarterfinalPrinter.printing();

    // Progress simulation?
    input = 'N';
    while (input != 'X'){
        cout << "Enter X to play the quarterfinals: ";
        cin >> input;
        cout << endl;
        if (input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    }   

    // Simulate quarterfinals
    tournamentMatch quarterfinals(nba.get_teams(), nba.get_Userteam_name(), quarterfinalsFixture_teamIndexes, 4);
    UltimateTeam* semifinalists = quarterfinals.play_tournamentMatch();
    quarterfinals.printing_results();
    cout << endl;
    delete [] quarterfinalsFixture_teamIndexes;
    
    if (quarterfinals.still_in_tournament()) {
        cout << "You won!";
    }else{
        cout << "You Lost! Better luck next time." << endl;
        cout << "End of simulation." << endl;
        return;
    }

    // Progress simulation?
    input = 'N';
    while (input != 'X'){
        cout << "To advance to the semi-finals, enter Y: ";
        cin >> input;
        cout << endl;
        if (input != 'X') {
            cout << "Not a valid input." << endl;
        }
    }  

    // Semifinal fixture organisation
    int* semifinalsFixture_teamIndexes = new int[4]; // indexes of semifinal fixtures
    for (int i = 0; i < 4; i++) {
        semifinalsFixture_teamIndexes[i] = i;
    }

    // Print out semifinal fixtures
    printingFixtures semifinalPrinter(semifinalists, semifinalsFixture_teamIndexes, 2);
    semifinalPrinter.printing();
    // Progress simulation?
    input = 'N';
    while (input != 'X'){
        cout << "Enter Y to play the semi-finals: ";
        cin >> input;
        cout << endl;
        if (input != 'X') {
            cout << "Not a valid input." << endl;
        }
    }   

    // Simulate semi-finals
    tournamentMatch semifinals(semifinalists, nba.get_Userteam_name(), semifinalsFixture_teamIndexes, 2);
    UltimateTeam* grandfinalists = semifinals.play_tournamentMatch();
    semifinals.printing_results();
    cout << endl;
    delete [] semifinalsFixture_teamIndexes;
    
    if (semifinals.still_in_tournament()) {
        cout << "You won!";
    }else{
        cout << "You Lost! Better luck next time." << endl;
        cout << "End of simulation." << endl;
        return;
    }

    // Progress simulation?
 input = 'N';
    while (input != 'Y'){
        cout << "To advance to the grand final, enter Y: ";
        cin >> input;
        cout << endl;
        if (input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    } 

    // grand final fixture organisation
    int* grandfinalFixture_teamIndexes = new int[2]; // indexes of grand final fixtures
    for (int i = 0; i < 2; i++) {
        grandfinalFixture_teamIndexes[i] = i;
    }

    // Print out grand final fixture
    printingFixtures grandfinal_Printer(grandfinalists, grandfinalFixture_teamIndexes, 1);
    grandfinal_Printer.printing();

    // Progress simulation?
    input = 'N';
    while (input != 'X'){
        cout << "Enter X to play the grand final: ";
        cin >> input;
        cout << endl;
        if (input != 'X') {
            cout << "Not a valid input." << endl;
        }
    }

    // Simulate grand final
    tournamentMatch grandfinal(grandfinalists, nba.get_Userteam_name(), grandfinalFixture_teamIndexes, 1);
    UltimateTeam* champion = grandfinal.play_tournamentMatch();
    grandfinal.printing_results();
    cout << endl;
    
    if (grandfinal.still_in_tournament()) {
        cout << "Congratulations, you have lead " << champion->get_teamName();
        cout << " to Premier League glory!" << endl;
        cout << "End of simulation." << endl;

    }else{
        cout << "You Lost! Better luck next time." << endl;
        cout << "End of simulation." << endl;
        return;
    } 
}
