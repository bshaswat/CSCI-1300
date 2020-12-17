// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// HW5 - Problem # 3

#include <iostream>
using namespace std;

int insert(int array[],int num,int size,int element){
    int position=0;
    int numElems=num;

    // size=size+1;
    if(size>num){
        numElems=num+1;
        for(int i=0;i<num;i++){
            if(array[i]>element){
                position=i;
                break;
            }
        }

        for(int i=size-1;i>position;i--){
            array[i]=array[i-1];
        }
        array[position]=element;
    }

    return numElems;
}

int printArray(int array[], int numElems){
    for(int i=0;i<numElems-1;i++){
        cout<<array[i]<<",";
    }
    cout<<array[numElems-1]<<endl;
}

int main(){
    int array[5]={1,1,3,4,5};
    int num=5;
    int size=5;
    int element=10;
    int numElems;
    
    numElems=insert(array,num,size,element);
    printArray(array,numElems);
}