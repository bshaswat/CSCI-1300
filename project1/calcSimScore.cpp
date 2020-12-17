// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 1 - Problem # 4

// This function returns the similarity score for two sequences.

#include <iostream>
#include <string>
using namespace std;

double calcSimScore(string sequence1,string sequence2){
    // string sequence1;
    // string sequence2;
    double hamming_distance;
    double string_length;
    double similarity_score;
    double h;
    // cin>>sequence1;
    // cin>>sequence2;

    if(sequence1.length()==sequence2.length() && sequence1.length()>=1 && sequence2.length()>=1)
    {
        string_length=sequence1.length();
        hamming_distance=0;
        for(int i=0; i<string_length;i++)
        {
            if(sequence1[i]==sequence2[i]){
                //hamming_distance=0;
                hamming_distance=hamming_distance;
            }else{
                //hamming_distance = h+1;
                hamming_distance=hamming_distance+1;
            }
        }
        //similarity_score = (string_length - hamming_distance) / string_length;
        similarity_score = (string_length - hamming_distance) / string_length;
    }else
    {
        similarity_score=0;
        // cout<<similarity_score<<endl;
    }
    
    // cout<<string_length<<endl;
    // cout<<hamming_distance <<endl;
    // similarity_score = (string_length - hamming_distance) / string_length;
    // cout<< similarity_score <<endl;

    return similarity_score;
}

int main(){
    string sequence1;
    string sequence2;
    cin>>sequence1;
    cin>>sequence2;
    calcSimScore(sequence1,sequence2);
    return 0;
}