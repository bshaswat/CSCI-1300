#include <iostream>
#include "Planet.h"
using namespace std;

int main(){    
    string Name = "Magrathea";    
    double Radius = 42, 
    newRadius = 20;

    Planet p = Planet(Name, Radius);    
    cout << "Planet Name: " << p.getName() << endl;     
    cout << "Planet Radius: " << p.getRadius() << endl;     
    cout << "Planet Volume: " << p.getVolume() << endl;

    p.setName("Jupiter");    
    p.setRadius(newRadius);    
    cout << "Planet Name: " << p.getName() << endl;     
    cout << "Planet Radius: " << p.getRadius() << endl;  
    cout << "Planet Volume: " << p.getVolume() << endl;  
}

