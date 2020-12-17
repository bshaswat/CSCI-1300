// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 3
// This is a Player class
 
#include <iostream>
using namespace std;

class Player {
    public:
        Player();                   // default constructor
        Player(string, double);     // parameterized constructor
        void setPoints(double);     // set the player's points
        void setName(string);       // set the player's name
        double getPoints();         // get the player's points
        string getName();           // get the player's name
    private:
        string name;                // player's name
        double points;              // player's point
};
