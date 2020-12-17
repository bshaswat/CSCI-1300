//Driver file for Jedi Class

#include "jedi.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // int num;
    Jedi jedi1;
    cout << jedi1.get_name() << " " << jedi1.get_health() << " " << jedi1.get_power() <<endl;

    Jedi jedi2("Luke",7,10);
    cout << jedi2.get_name() << " " << jedi2.get_health() << " " << jedi2.get_power() <<endl;

    jedi1.set_name("Yoda");
    cout<<jedi1.get_name()<<endl;

    jedi1.rest();
    jedi1.train();
    cout << jedi1.get_name() << " " << jedi1.get_health() << " " << jedi1.get_power() <<endl;

    return 0;
}
