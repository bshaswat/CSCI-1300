#ifndef Planet_H
#define Planet_H

#include <string>
using namespace std;

class Planet{
    
    public:
    Planet();
    Planet(string Name, double Radius);

    string getName() const;
    double getRadius() const;
    double getVolume() const;

    void setName(string Name);
    void setRadius(double Radius);

    private:
    string planetName;
    double planetRadius;
};
#endif