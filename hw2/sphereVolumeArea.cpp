// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328 
// Homework 2 - Problem # 6  

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius;
    double volume;
    double area;
    cout << "Enter a radius: " << endl;
    cin >> radius;
    volume = (4.0/3.0)*M_PI*radius*radius*radius;
    area = 4*M_PI*radius*radius;
    cout << "Volume: " << volume << endl;
    cout << "Surface area: " << area << endl; 

    return 0;
}