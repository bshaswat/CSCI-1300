// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// HW5 - Problem # 2

#include <iostream>
#include <iomanip>
using namespace std;

int stats(double array[], int x){
    double max= array[0];
    double min= array[0];
    double avg;
    double sum=0;

    for(int i=0;i<x;i++){
        if(array[i]>max){
            max=array[i];
        }else if(array[i]<min){
            min=array[i];
        }
        sum=sum+array[i];
        // cout<<sum<<endl;
    }
    //cout<<sum<<endl;
    avg=sum/x;

    cout<< "Min: "<<fixed << setprecision(2) <<min<<endl;
    cout<< "Max: "<<fixed << setprecision(2) <<max<<endl;
    cout<< "Avg: "<<fixed << setprecision(2) <<avg<<endl;
    return 0;
}

int main(){
    double array[]={-1.2, -12.8, 5, 10.4, 11, 2.2, -1};
    int x=7;
    stats( array, x);
}