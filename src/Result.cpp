#include "Result.h"
#include <iostream>
#include <string>

using namespace std;

Result::Result() : winnerName(""), loserName(""), winnersScore(0), losersScore(0) {}

Result::Result(string _winnerName, string _loserName, int _winnersScore, int _losersScore) :
winnerName(_winnerName), loserName(_loserName), winnersScore(_winnersScore), losersScore(_losersScore) {}

void Result::set_winnerName(string _winnerName){winnerName = _winnerName;}

void Result::set_loserName(string _loserName){loserName = _loserName;}

void Result::set_winnersScore(int _winnersScore){winnersScore = _winnersScore;}

void Result::set_losersScore(int _losersScore){losersScore = _losersScore;}

string Result::get_winnerName(){return winnerName;}

string Result::get_loserName(){return loserName;}

int Result::get_winnersScore(){return winnersScore;}

int Result::get_losersScore(){return losersScore;}

void Result::printing_result(){
    cout << winnerName << " defeated " << loserName << " " << winnersScore << " - " << losersScore << endl;
}

Result::~Result(){}