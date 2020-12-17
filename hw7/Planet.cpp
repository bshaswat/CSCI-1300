#include "Planet.h"
#include <string>
#include <cmath>
using namespace std;

Planet::Planet()
{
    planetName="";
    planetRadius=0.0;
}

Planet::Planet(string Name, double Radius)
{
    planetName=Name;
    planetRadius=Radius;
}

string Planet::getName() const
{
    return planetName;
}
double Planet::getRadius() const
{
    return planetRadius;
}

double Planet::getVolume() const
{
    return (4.0/3.0)*M_PI*planetRadius*planetRadius*planetRadius;
}

void Planet::setName(string Name)
{
    planetName=Name;
}
void Planet::setRadius(double Radius)
{
    planetRadius=Radius;
}