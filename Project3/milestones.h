// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 3

#include <iostream>
using namespace std;

class milestone{
    public:
        milestone();
        int setdistance_travelled();
        int setdistance_left();
        int settime_passed();
        int settime_left();
        string setnext_milestone();
    private:
        int distance_travelled;
        int distance_left;
        int time_passed;
        int time_left;
        string next_milestone;
};