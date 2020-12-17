// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 1 - Problem # 1

// This function takes a string as an input and prints that string in reverse.
// Parameter - string
// Return - reverse string 
#include <iostream>
using namespace std;

void reverse(string input){
    for(int i= input.length()-1; i>=0; i--){
        cout << input[i];
    }
    
}

int main(){
    string string1;
    string reverse1;

    getline(cin,string1);
    // cout<<string1<<endl;

    reverse(string1);
    cout << endl;
    
    return 0;
}

