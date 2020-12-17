/*  Jedi Class
    Each Jedi will have a name and power, health values
    Basic functionality:        
        Health will increases by 1 if they rest        
        Power will increases by 1 if they train
*/

#ifndef JEDI_H
#define JEDI_H

#include<string>
using namespace std;

class Jedi{    
    public:    
    Jedi();     // default constructor
    Jedi(string n, int p, int h);       // parameterized constructor
    
    // getters     
    string get_name() const;    
    int get_power() const;    
    int get_health() const;    
    
    // setters    
    void set_name(string n);    
    void rest(); // health++    
    void train(); // power++    
    
    private:    
    string name;    
    int power;    
    int health;
};
#endif