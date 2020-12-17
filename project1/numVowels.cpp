// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 1 - Problem # 3

// This function accepts a string and returns no of vowels in the string.

#include <iostream>
using namespace std;

int isVowel(char input){
    if(input== 'a' || input=='e' || input=='i' || input=='o' || input=='u' || input=='A' || input=='E' || input=='I' || input=='O' || input=='U'){
        return 1;
    }else{
        return 0;
    }
}

int numVowels(string input1){
    int count = 0; 
    for (int i=0; i<input1.length(); i++) 
        if (isVowel(input1[i])==1)
            ++count; 
    return count;
}

int main(){
    string input1;
    int num;

    getline(cin,input1);

    num = numVowels(input1);
    cout<<num<<endl;
}

