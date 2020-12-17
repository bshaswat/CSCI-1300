// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 3
// 
#include <iostream>
#include <string>
#include <fstream>
#include "player.h"
using namespace std;

int main(){
    string name, name1, name2, name3, name4, answer, string;
    int yokes;

    Player player1, player2, player3, player4, player5;
    cout<<"What is your name?: ";
    cin>>name;
    player1.setName(name);
    cout<<"Please enter the names of your companions below:"<<endl;
    cin>>name1;
    player2.setName(name);
    cin>>name2;
    player3.setName(name);
    cin>>name3;
    player4.setName(name);
    cin>>name4;
    player5.setName(name);
    cout<<"You are starting at mile: 0."<<endl;
    cout<<"There are 2040 that you must travel to reach your destination.";
    cout<<"Before the start of your trip, you can visit the store and buy supplies: food, oxen, bullets and wagon parts."; 
    cout<<"Would you like to visit the store? Y / N"<<endl;
    cin>>answer;
    if(answer=="Y" || answer=="y"){
        ifstream myfile ("store_info.txt");
        if (myfile.is_open()) {
            while ( getline(myfile,string) ) {
                cout << string << endl;
            }
        }
    }
    cout<<"Right now you have: $1000."<<endl;
    cout<<"You must spend between $100 to $200 dollars on oxen. There are 2 oxen in a yoke and the price of each yoke is $40.0."<<endl;
    cout<<"How many yokes do you wish to purchase?: "<<endl;
    cin>>yokes;

    //  ...
}