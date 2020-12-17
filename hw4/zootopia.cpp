// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 4 - Problem 3

#include <iostream>
using namespace std;

int main(){
    int choice;
    double agility;
    double strength;
    double speed;
    double hireScore; 
    
    do
    {
        cout<<"Select a numerical option: "<<endl;
        cout<<"=== menu ==="<<endl;
        cout<<"1. Fox"<<endl;
        cout<<"2. Bunny"<<endl;
        cout<<"3. Sloth"<<endl;
        cout<<"4. Quit"<<endl;
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                cout<<"Enter agility: "<<endl;
                cin>>agility;
                cout<<"Enter strength: "<<endl;
                cin>>strength;
                hireScore = (1.8*agility) + (2.16*strength);
                cout<<"Hire Score: "<<hireScore<<endl;
                break;
            case 2:
                cout<<"Enter agility: "<<endl;
                cin>>agility;
                cout<<"Enter speed: "<<endl;
                cin>>speed;
                hireScore = (1.8*agility) + (3.24*speed);
                cout<<"Hire Score: "<<hireScore<<endl;
                break;
            case 3:
                cout<<"Enter strength: "<<endl;
                cin>>strength;
                cout<<"Enter speed: "<<endl;
                cin>>speed;
                hireScore = (2.16*strength) + (3.24*speed);
                cout<<"Hire Score: "<<hireScore<<endl;
                break;
            case 4:
                cout<<"Good bye!"<<endl;
                break;
            default: cout << "Invalid option" << endl; break;
        }
    }while (choice != 4);

    return 0;
}
