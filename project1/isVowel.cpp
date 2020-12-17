// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 1 - Problem # 2

// This function accepts a character as an argument and returns TRUE if the
// character passed into the function is a vowel, and FALSE otherwise. 

#include <iostream>
using namespace std;

int isVowel(char input){
    if(input== 'a' || input=='e' || input=='i' || input=='o' || input=='u' || input=='A' || input=='E' || input=='I' || input=='O' || input=='U'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char input;
    int answer;

    cin>>input;

    answer = isVowel(input);
    cout<<answer<<endl;

    return 0;
}
