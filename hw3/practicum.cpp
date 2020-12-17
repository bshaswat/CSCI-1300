// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 3 - Problem #1

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double p1;
    double p2;
    double p3;
    double average;

    cout<<"Enter practicum 1 score: "<<setprecision(2) <<endl;
    cin >> p1;
    cout<<"Enter practicum 2 score: "<<setprecision(2) <<endl;
    cin >> p2;
    cout<<"Enter practicum 3 score: "<<setprecision(2) <<endl;
    cin >> p3;

    average = (p1+p2+p3)/3;
    cout<<"Practicum average: "<<  fixed << setprecision(2) << average << endl;
    if (average >= 67)
        cout<<"You have a passing practicum average."<<endl;
    else
    {
        cout<<"You can retake practicums during the final."<<endl;
    }
    
    return 0;
}

