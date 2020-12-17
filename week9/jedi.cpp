// Implementation file for Jedi class

#include "jedi.h"
#include<string>
using namespace std;

Jedi::Jedi()
{    
    name = "padawan";    
    health = 0;    
    power = 0;
}

Jedi::Jedi(string n, int p, int h)
{    
    name = n;    
    health = h;    
    power = p;
}

// getters 
string Jedi::get_name() const
{    
    return name;
}
int Jedi::get_power() const
{    
    return power;
}
int Jedi::get_health() const
{    
    return health;
}

// setters
void Jedi::set_name(string n)
{    
    name = n;
}
void Jedi::rest()
{    
    health++;
} 
void Jedi::train()
{    
    power++;
}