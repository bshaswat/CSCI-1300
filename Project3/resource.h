// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 3

#include <iostream>
using namespace std;

class Resource{
    public:
        Resource();
        Resource(string);
        int setoxen();
        int setfood();
        int setbullets();
        int setwagon_parts();
        int setmedkit();
        int setmoney();
    private:
        string teamname;
        int oxen;
        int food;
        int bullets;
        int wagon_part;
        int medkit;
        int money;
};