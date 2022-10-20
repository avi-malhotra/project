#ifndef tournamentMatch_H
#define tournamentMatch_H
#include "contest.h"
#include <string.h>

using namespace std;

class tournamentMatch {
    private:
    UltimateTeam* teams_tournament;
    string userTeam_name;
    int* fixture_of_teamIndexes;
    int number_of_matches;
    UltimateTeam* team_winning; 
    contest* nba_matches;
    Result* nbaMatch_results;

    public:
    tournamentMatch(UltimateTeam* _teams_tournament, string _userTeam_name, int* _fixture_of_teamIndexes, int _number_of_matches);
    UltimateTeam* play_tournamentMatch();
    void printing_results();
    bool still_in_tournament();
    //~tournamentMatch();
};

#endif