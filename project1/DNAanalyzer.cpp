// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Project 1 - Problem # 7

// This program creates a menu and calls all the function created before. 

#include <iostream>
using namespace std;

double calcSimScore(string sequence1,string sequence2){
    double hamming_distance;
    double string_length;
    double similarity_score;
    double h;
    if(sequence1.length()==sequence2.length() && sequence1.length()>=1 && sequence2.length()>=1)
    {
        string_length=sequence1.length();
        hamming_distance=0;
        for(int i=0; i<string_length;i++)
        {
            if(sequence1[i]==sequence2[i]){
                hamming_distance=hamming_distance;
            }else{
                hamming_distance=hamming_distance+1;
            }
        }
        similarity_score = (string_length - hamming_distance) / string_length;
    }else
    {
        similarity_score=0;
    }
    return similarity_score;
}

double findBestSimScore(string string1,string string2){
    string string3;
    double hamming_distance, similarity_score, bestFind, string_length=string1.length();
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
        Score2=findBestSimScore(string2,sequence);
        Score3=findBestSimScore(string3,sequence);
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
}

int main(){
    int choice;
    string sequence1, sequence2, sequence3, sequence;

    cout<<"Select a numerical option: "<<endl;
    cout<<"=== menu ==="<<endl;
    cout<<"1. Find similarity score"<<endl;
    cout<<"2. Find the best similarity score"<<endl;
    cout<<"3. Analyze the genome sequences"<<endl;
    cout<<"4. Quit"<<endl;
    cin>>choice;

    while (choice!=4)
    {
        switch(choice)
        {
            case 1:
                cout<<"Enter sequence 1: "<<endl;
                cin>>sequence1;
                cout<<"Enter sequence 2: "<<endl;
                cin>>sequence2;
                cout<<"Similarity score: "<<calcSimScore(sequence1,sequence2)<<endl;
                break;
            case 2:
                cout<<"Enter genome: "<<endl;
                cin>>sequence1;
                cout<<"Enter sequence: "<<endl;
                cin>>sequence2;
                cout<<"Best similarity score: "<<findBestSimScore(sequence1,sequence2)<<endl;
                break;
            case 3:
                cout<<"Enter genome 1: "<<endl;
                cin>>sequence1;
                cout<<"Enter genome 2: "<<endl;
                cin>>sequence2;
                cout<<"Enter genome 3: "<<endl;
                cin>>sequence3;
                cout<<"Enter sequence: "<<endl;
                cin>>sequence;
                findMatchedGenome(sequence1,sequence2,sequence3,sequence);
                break;
            default: 
                cout<<"Invalid option." << endl;
                break; 
        }
        cout<<"Select a numerical option: "<<endl;
        cout<<"=== menu ==="<<endl;
        cout<<"1. Find similarity score"<<endl;
        cout<<"2. Find the best similarity score"<<endl;
        cout<<"3. Analyze the genome sequences"<<endl;
        cout<<"4. Quit"<<endl;
        cin>>choice;
    }
    cout<<"Good bye!"<<endl;
}