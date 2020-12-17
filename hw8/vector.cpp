#include <iostream>
#include <vector>
using namespace std;

int main(){
    int input;
    vector<int> vector;
    do{
        cout<<"Please enter a number: "<<endl;
        cin >> input; 
        if(vector.size()==0 && (input != -1) && (input > 0)){
            vector.push_back(input);
        } if((input > 0) && (input%5==0)){
            vector.erase(vector.begin()); 
        } if((input > 0) && (input%3==0)){
            vector.pop_back(); 
        }else if(input > 0){
            vector.push_back(input);
        }else if(input <= 0 && input != -1){
            cout<<"The number should be a positive integer or -1."<<endl;
        }else if(input == -1 && vector.size()==0){
            cout<<"The vector is empty."<<endl;
        }
    }while (input != -1);
    
    int a=vector.size();
    if(a!=0){
        int max=vector[0];
        int min=vector[0];
        cout<<"The elements in the vector are: ";
        for(int i=0; i < a; i++){
            cout<<vector[i];
            if(vector[i]>max){
                max=vector[i];
            }
            if(vector[i]<min){
                min=vector[i];
            }
            cout<<" ";
        }
        cout<<endl;
        cout<<"Min = "<<min<<endl;
        cout<<"Max = "<<max<<endl;
    }
}