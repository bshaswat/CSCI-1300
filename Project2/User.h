// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 2

#ifndef User_h
#define User_H

#include <string>
using namespace std;

class User{
    public:
    User();
    User(string username, int ratings[], int numRatings);
    
    string getUsername() const;
    int getRatingAt() const;
    int getNumRatings() const;
    int getSize() const;

    void setUsername(string username);
    bool setRatingAt(int index, int value);
    void setNumRatings(int numRatings);

    private:
    string usernamee;
    int size;
    int ratings[size];
    int numRatings;

};
#endif