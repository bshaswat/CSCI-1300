// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 1 - Problem # 5

// This function takes a genome and a sequence and returns
// the highest similarity score found in the genome as a double.


#include <iostream>
using namespace std;

double findBestSimScore(string string1,string string2){
    // string string1, string2;
    string string3;
    double hamming_distance, similarity_score, bestFind, string_length=string1.length();

    bestFind=0;
    // hamming_distance=0;
    similarity_score=0;

    for(int i=0; i<string_length-string2.length()+1;i++)
    {
        string3=string1.substr(i,string2.length());
        // similarity_score=0;
        // cout<<string2<<endl;
        // cout<<string3<<endl;
        // bestFind=0;
        hamming_distance=0;
        for(int j=0; j<string2.length(); j++)
        {
            if(string2[j]==string3[j]){
                hamming_distance=hamming_distance;
            }else{
                hamming_distance = hamming_distance+1;
            }
        }
        similarity_score = (string2.length() - hamming_distance) / string2.length();
        // cout<<similarity_score<<endl;
        if(similarity_score>bestFind)
        {
            bestFind=similarity_score;
        }

    }
    cout<<bestFind<<endl;
    return bestFind;
} 

int main(){
    string string1;
    string string2;
    cin>>string1;
    cin>>string2;
    findBestSimScore(string1,string2);
    return 0;
}