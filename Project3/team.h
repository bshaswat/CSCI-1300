// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 3

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Player.h"
using namespace std;

class Team {
    public:
        Team();                         // default constructor
        Team(string);                   // parameterized constructor
        int readRoster(string);         // read from txt file the players and their points
        int getNumPlayers();            // get the number of players on this team
        string getPlayerName(int);      // get the ith player's name
        double getPlayerPoints(int);    // get the ith player's points
        void setTeamName(string);       // set the team name
        string getTeamName();           // get the team name
    private:
        string teamName;                // team name
        vector<Player> players;         // players on this team
};
