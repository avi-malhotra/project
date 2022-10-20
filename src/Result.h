#ifndef Result_H
#define Result_H
#include <iostream>
#include <string>

using namespace std;

class Result {
    private:
    string winnerName;
    string loserName;
    int winnersScore;
    int losersScore;

    public:
    Result();
    Result(string _winnerName, string _loserName, int _winnersScore, int _losersScore);
    void set_winnerName(string _winnerName);
    void set_loserName(string _loserName);
    void set_winnersScore(int _winnersScore);
    void set_losersScore(int _losersScore);
    string get_winnerName();
    string get_loserName();
    int get_winnersScore();
    int get_losersScore();
    void printing_result();
    ~Result();
};

#endif