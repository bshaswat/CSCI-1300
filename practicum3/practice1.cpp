#include <iostream>
#include "medicallab.h"
#include <vector>
using namespace std;


MedicalLab::MedicalLab()
{
	labName = "Clinic";
}

MedicalLab::MedicalLab(string name)
{
	labName = name;
}

bool MedicalLab::AddPatient(string name, int tests)
{
	if (names.size() < 75)
	{
		names.push_back(name);
		numTests.push_back(tests);
		return true;
	}

	return false;
}

double MedicalLab::CalcAvgTests()
{  
	int sum=0;
	for (int i=0 ; i < names.size() ; i++) 
	{
		sum += numTests[i]; 
	}
	
	if (names.size() > 0)
		return (sum / (double)(names.size()));
	else
		return 0;
}

int MedicalLab::CountHighNeed(int minTests)
{   
	int count=0; 
	for (int i=0 ; i < names.size() ; i++) 
		if (numTests[i] >= minTests) 
			count++;
	return count;
}

int MedicalLab::CountSameNames(string name)
{   
	int count=0; 
	for (int i=0 ; i < names.size() ; i++) 
		if (names[i] == name) 
			count++;
	return count;
}