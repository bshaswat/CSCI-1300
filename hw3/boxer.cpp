// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 3 - Problem #4

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout<<"Enter boxers' weights "<<endl;
    cin >> a>>  b>>  c;

    if (a<b && a<c && b<c){
        cout << "Ascending order" << endl;
    }
    else if (a>b && a>c && b>c){
        cout << "Descending order"<< endl;
    }
    else
    {
        cout << "Neither" << endl;
    }
    
    return 0;
}
