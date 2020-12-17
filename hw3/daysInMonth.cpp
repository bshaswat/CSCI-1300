// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 3 - Problem #5

#include <iostream>
using namespace std;

int main(){
    int year;
    int month;

    cout<<"Enter a year: "<<endl;
    cin>>year;
    cout<<"Enter a month: "<<endl;
    cin >> month;
    
    switch (month)
    {
        case 1 : 
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
            cout <<"31 days"<<endl;
            break;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
            cout <<"30 days"<<endl;
            break;
        case 2 :
            if((year % 100) ==0 && year >= 1582){
                if((year % 400)==0){
                    cout<<"29 days"<<endl; }
                else{
                    cout<<"28 days"<<endl; }
                
            }
            else if ((year % 4) == 0){
                cout<<"29 days"<<endl;
            }
            else{
                cout<<"28 days"<<endl;
            }
            break;
        default: cout << "Invalid month" << endl; break;   
    }

    return 0;
}
