// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328 
// Homework 2 - Problem # 5  

#include <iostream>
using namespace std;

int main(){
    int seconds;
    int hour;
    int minutes;
    int a;
    int seconds1;

    cout << "Enter a number of seconds: " << endl;
    cin >> seconds;

    hour = seconds / 3600;
    a = seconds % 3600;
    minutes = a / 60;
    seconds1 = a % 60;

    cout << hour << " hour(s) " << minutes << " minute(s) " << seconds1 << " second(s) " << endl;
    // printf("%i \n", hour);
    // printf("%i \n", a);
    // printf("%i \n", minutes);
    // printf("%i \n", seconds1);

    return 0;
}
