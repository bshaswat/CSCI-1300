// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 3 - Problem #2

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float hours_worked;
    float hourly_rate;
    float total_pay;
    float overtime;

    cout<<"Enter the number of hours worked "<<endl;
    cin>>hours_worked;
    cout<<"Enter an hourly pay rate "<<endl;
    cin>>hourly_rate;
    
    if (hours_worked>0 && hourly_rate>0){
            if (hours_worked > 40)
        {
            overtime=hours_worked-40;
            total_pay= (40*hourly_rate)+(1.5*overtime*hourly_rate);
            cout<<"Paycheck: "<<  fixed << setprecision(2) << total_pay<< endl;
        }
        else
        {
            total_pay = hours_worked * hourly_rate;
            cout<<"Paycheck: "<<  fixed << setprecision(2) << total_pay<< endl;
        }
    }
    else 
    cout <<"Invalid input"<<endl;

    return 0;
}
