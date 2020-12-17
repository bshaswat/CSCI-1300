// CS1300 Fall 2020
// Author: Shaswat Bhattarai
// Recitation: 328
// Homework 3 - Problem #3

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int noofsushi;
    float price;
    float initialprice;
    float discount;
    float newprice;

    cout<<"Enter the number of sushi: "<<endl;
    cin>>noofsushi;

    if (noofsushi >= 1 && noofsushi <= 9)
    {
        price = noofsushi * 1.99;
        cout<<"Total price: $"<< fixed << setprecision(2) << price << endl;
    }
    else if (noofsushi >=10 && noofsushi <= 19) 
    {
        initialprice = noofsushi * 1.99;
        discount = initialprice * 0.1;
        newprice = initialprice - discount;
        cout<<"Total price: $"<< fixed << setprecision(2) << newprice << endl;
    }
    else if (noofsushi >=20 && noofsushi <= 49)
    {
        initialprice = noofsushi * 1.99;
        discount = initialprice * 0.15;
        newprice = initialprice - discount; 
        cout<<"Total price: $"<< fixed << setprecision(2) << newprice << endl;
    }
    else if (noofsushi >=50 && noofsushi <= 99)
    {
        initialprice = noofsushi * 1.99;
        discount = initialprice * 0.2;
        newprice = initialprice - discount;
        cout<<"Total price: $"<< fixed << setprecision(2) << newprice << endl;
    }
    else if (noofsushi >=100)
    {
        initialprice = noofsushi * 1.99;
        discount = initialprice * 0.25;
        newprice = initialprice - discount;
        cout<<"Total price: $"<< fixed << setprecision(2) << newprice << endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
    }
    
    return 0;
}
