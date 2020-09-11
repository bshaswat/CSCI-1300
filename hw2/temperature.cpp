// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328 
// Homework 2 - Problem # 3  

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double temperature;
    double celcius;
    cout << "Enter a temperature in Fahrenheit: " << endl;
    cin >> temperature;
    celcius = (5.0/9.0)*(temperature - 32);
    cout << "The temperature " << temperature << " degrees Fahrenheit is " << fixed << setprecision(2) << celcius << " degrees Celsius." << endl;
    return 0;
}
