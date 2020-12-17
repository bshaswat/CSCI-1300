// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 1 - Problem # 6

// This function that takes three genomes and a sequence and
// prints the list of matched genomes.

#include <iostream>
using namespace std;

double findBestSimScore(string string1,string string2){
    string string3;
    double hamming_distance,similarity_score,bestFind,string_length=string1.length();

    bestFind=0;
    similarity_score=0;

    for(int i=0; i<string_length-string2.length()+1;i++)
    {
        string3=string1.substr(i,string2.length());
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
        if(similarity_score>bestFind)
        {
            bestFind=similarity_score;
        }

    }
    return bestFind;
}

void findMatchedGenome(string string1, string string2, string string3, string sequence)
{ 
    double Score1,Score2,Score3;
    if( (string1.length())<1 || (string2.length())<1 || (string3.length())<1 || (sequence.length())<1)
    {
        cout<<"Genomes or sequence is empty."<<endl;
    }else if (string1.length()!=string2.length() || string2.length()!=string3.length())
    {
        cout<<"Lengths of genomes are different."<<endl;
    }else 
    {
        Score1=findBestSimScore(string1,sequence);
        // cout<<Score1<<endl;
        Score2=findBestSimScore(string2,sequence);
        // cout<<Score2<<endl;
        Score3=findBestSimScore(string3,sequence);
        // cout<<Score3<<endl;
        if(Score1>=Score2 && Score1>=Score3)
        {
            cout<<"Genome 1 is the best match."<<endl;
        }if(Score2>=Score1 && Score2>=Score3)
        {
            cout<<"Genome 2 is the best match."<<endl;
        }if(Score3>=Score1 && Score3>=Score2)
        {
            cout<<"Genome 3 is the best match."<<endl;
        }
    }
    
    
    // cout<<findBestSimScore(string1,sequence)<<endl;
    // cout<<findBestSimScore(string2,sequence)<<endl;
    // cout<<findBestSimScore(string3,sequence)<<endl;
}

int main(){
    string string1, string2, string3, sequence;
    cin>>string1>>string2>>string3>>sequence;
    findMatchedGenome(string1,string2,string3,sequence);
    return 0;
}