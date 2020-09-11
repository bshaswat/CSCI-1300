// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328 
// Homework 2 - Problem # 4  

#include <iostream>
using namespace std;

int main(){
    int population;
    int time;
    int births;
    int deaths;
    int immigrants;
    int newpopulation;

    cout << "Enter the current population: " << endl;
    cin >> population;
    time = 365*24*60*60;
    births = time / 8;
    deaths = time / 12;
    immigrants = time / 27;
    newpopulation = population + births - deaths + immigrants;

    cout << "The population in one year: " << newpopulation << endl;

    return 0;
}
