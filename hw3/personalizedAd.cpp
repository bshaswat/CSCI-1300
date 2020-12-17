// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 3 - Problem #6

#include <iostream>
#include <string>
using namespace std;

int main(){
    int choise;
    string ans1;
    int ans2;
    int zip;
    int age;

    cout<<"How personalized should the ad be? (1-3)"<<endl;
    cin>>choise;

    switch (choise)
    {
        case 1:
            cout<<"Do you own a dog?"<<endl;
            cin >> ans1;
            if (ans1=="yes" || ans1=="Yes" || ans1=="YES"){
                cout<<"Meat’s the need of dogs like yours!"<<endl; }
            else if(ans1=="no" || ans1=="NO" || ans1=="No"){
                cout<<"Dirty mouth? Clean it up with new Orbit Raspberry Mint."<<endl; }
            else{
                cout<<"Invalid choise."<<endl; }
            break;
        case 2:
            cout<<"How many Facebook friends do you have?"<<endl;
            cin >> ans2;
            if (ans2 >= 500){
                cout<<"Don’t like cleaning up after your dog? Call Doody Free to sign up for "<<endl;
                cout<<"backyard cleanup or dog walking service."<< endl;}
            else if(ans2 >=0 && ans2 < 500){
                cout<<"Who doesn’t need another cat? Adopt a shelter pet right meow."<<endl;}
            else{
                cout<<"Enter a valid number"<<endl; }
            break;
        case 3:
            cout<<"What is your zip code?"<<endl;
            cin >> zip;
            cout<<"What is your age?"<<endl;
            cin >> age;
            if (zip >= 80301 && zip <= 80310 && age >= 25){
                cout<<"You are surrounded by professional athletes. Up your exercise "
                <<"game in the privacy of your home with a Peloton bike."<< endl; }
            else if(zip >= 80301 && zip <= 80310 && age < 25 ){
                cout<<"Looking for dinner that won't break the bank? Tacos. Come grab a "
                << "$3 at Centro Latin Kitchen."<<endl; }
            else {
                cout<<"Feeling Uninspired? The Boulder Flatirons are calling. Come hike "
                << "to inspiring views, delicious food, and enjoy the hospitality of "
                << "Boulder, CO."<<endl;
            } break;
        default: cout << "Invalid option." << endl; break;
    }

    return 0;
}

