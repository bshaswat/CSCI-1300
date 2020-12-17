// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// HW5 - Problem # 1

#include <iostream>
using namespace std;

int main(){
    double temps[]={-459.67,-459.67,-459.67,-459.67,-459.67,-459.67,-459.67,-459.67,-459.67,-459.67};
    const string colors[5]={"Red","Blue","Green","Cyan","Magenta"};
    int sequence[100]={};
    char letters[]={};

    for(int i=0;i<10;i++){
        cout<<temps[i]<<endl;
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<colors[i]<<endl;
    }
    cout<<endl;

    for(int i=0; i<100; i++){
        sequence[i]=i+1;
        cout<<sequence[i]<<endl;
    }
    cout<<endl;

    for(int i=0; i<26; i++){
        cout<<(char)(i+65)<<" "<<(char)(i+97)<<endl;
    }

    // cout<<colors[1]<<endl;
    // cout<<sequence[99]<<endl;
    // cout<<(char)65<<endl;
    return 0;
}