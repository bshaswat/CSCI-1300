// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 4 - Problem 1

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a positive number: "<<endl;
    cin>>num;
    int sum;
    sum=0;
    for (int i=0; i<=num; i++)
    {
        if(i % 2 ==0)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}