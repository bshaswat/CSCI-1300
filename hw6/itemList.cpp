// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 6 - Problem 1

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    
    string filename;
    cout<<"Enter the file name: "<<endl;
    cin>>filename;
    ifstream infile;
    infile.open(filename);
    int linenumber=0;
    string line;

    if(infile.fail()){
        cout<<"Could not open file."<<endl;
        return 0;
    }
    while(getline(infile,line)){
        
    }

}



