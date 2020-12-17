#include <iostream>
using namespace std;

int printNormalHeartRates( string names[], int heartrate[], int num){
    for(int i=0; i<num; i++){
        if( heartrate[i] >= 70 && heartrate[i] <= 190){
            cout<<names[i]<<" "<<heartrate[i]<<endl; 
        }
    }
    return 0;
}

int main(){
    string name[]={"Joe", "Jack", "Amy", "Bob"};
    int heartrate[]={90, 60, 200, 100};
    int num=4;
    // cout<<name[3]<<endl;
    // cout<<heartrate[3]<<endl;
    printNormalHeartRates(name,heartrate,num);
}