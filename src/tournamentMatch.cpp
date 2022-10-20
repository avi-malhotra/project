#include "tournamentMatch.h"
#include <string>

using namespace std;

    tournamentMatch::tournamentMatch(UltimateTeam* _teams_tournament, string _userTeam_name, int* _fixture_of_teamIndexes, int _number_of_matches) :
    teams_tournament(_teams_tournament), userTeam_name(_userTeam_name), fixture_of_teamIndexes(_fixture_of_teamIndexes), number_of_matches(_number_of_matches) {
        team_winning = new UltimateTeam[number_of_matches];
        nba_matches = new contest[number_of_matches];
        nbaMatch_results = new Result[number_of_matches];
    }

    UltimateTeam* tournamentMatch::play_tournamentMatch(){
        for (int i = 0; i < number_of_matches; i++) {
            nba_matches[i].set_the_teams(teams_tournament[fixture_of_teamIndexes[2*i]], teams_tournament[fixture_of_teamIndexes[2*i+1]]);
            // nbaMatch_results[i] = nba_matches[i].play_nba();
            team_winning[i] = nba_matches[i].get_team_winning();
        }
        return team_winning;
    }

    void tournamentMatch::printing_results(){
        for (int i = 0; i < number_of_matches; i++) {
            nbaMatch_results[i].printing_result();
        }
    }

    bool tournamentMatch::still_in_tournament(){
        for (int i = 0; i < number_of_matches; i++) {
            if (team_winning[i].get_teamName() == userTeam_name) {
                return true;
            }
        }
        return false;
    }

   // tournamentMatch::~tournamentMatch(){
       // delete [] team_winning;
        //delete [] nba_matches;}