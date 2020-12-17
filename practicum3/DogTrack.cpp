#include <iostream>
#include "DogTrack.h"
#include <vector>
using namespace std;

DogTrack::DogTrack()
{
	name = "DoggieDash";
}


DogTrack::DogTrack(string raceName)

{

	name = raceName;
}

bool DogTrack::AddDog(double topSpeed, string dogBreed)
{
	if (speeds.size() < 64)
	{
		speeds.push_back(topSpeed);
		breeds.push_back(dogBreed);
		return true;
	}

	return false;
}

double DogTrack::CalcAvgSpeed()
{   
	int count=0; 
	double sum=0;
	for (int i=0 ; i < speeds.size() ; i++) 
		if (speeds[i] > 0.) 
		{
			sum += speeds[i]; 
			count++;
		}
	
	if (count > 0)
		return sum / count;
	else
		return 0;
}

int DogTrack::CountAvailable(double minSpeed)
{   
	int count=0; 
	for (int i=0 ; i < speeds.size() ; i++) 
		if (speeds[i] > minSpeed) 
			count++;
	return count;
}


int DogTrack::CountAvailableBreeds(string breed)
{   
	int count=0; 
	for (int i=0 ; i < breeds.size() ; i++) 
		if (breeds[i] == breed) 
			count++;
	return count;
}