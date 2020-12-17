// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 3

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "team.h"
using namespace std;

int split(string s, char sep, string words[], int max){
    int n=0;
    string word="";
    s=s+sep;
    for(int i=0; i<s.length(); i++){
        if(s[i]==sep)
        {
            if(n >=max){
                cout<<"Words array size too small"<<endl;
                return -1;
            }
            words[n++]=word;
            word="";
        }
        word=word+s[i];
    }
    return n;
}

Team::Team(){
    teamName="";
}

Team::Team(string teamname_in){
    teamName=teamname_in;
}

void Team::setTeamName(string teamname_in){
    teamName=teamname_in;
}

int Team::readRoster(string roster){
    ifstream infile;
    infile.open(roster);
    string line, name_points[2];
    int num_words;
    if(!infile.fail()){
        getline(infile, teamName);
        while(getline(infile,line)){
            num_words=split(line,',',name_points,2);
            Player newplayer(name_points[0], stod(name_points[1]));
            players.push_back(newplayer);
        }
        infile.close();
        return players.size();
    }else{
        return -1;
    }
}

int Team::getNumPlayers(){
    return players.size();
}

string Team::getPlayerName(int i){
    if(i >=players.size() || i<0){
        return "Error";
    }
    return players[i].getName();
}

double Team::getPlayerPoints(int i){
    if(i>= players.size() || i<0){
        return -1;
    }
    return players[i].getPoints();
}

string Team::getTeamName(){
    return teamName;
}

// int split(string s, char sep, string words[], int max){
//     int n=0;
//     string word="";
//     s=s+sep;
//     for(int i=0; i<s.length(); i++){
//         if(s[i]==sep)
//         {
//             if(n >=max){
//                 cout<<"Words array size too small"<<endl;
//                 return -1;
//             }
//             words[n++]=word;
//             word="";
//         }
//         word=word+s[i];
//     }
//     return n;
// }

