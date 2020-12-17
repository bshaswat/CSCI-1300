#include <iostream>
#include <vector>
using namespace std;

class DogTrack{
    public:
        DogTrack();
        DogTrack(string raceName);
        bool AddDog(double topSpeed, string dogBreed);
        double CalcAvgSpeed() ;
        int CountAvailable(double minSpeed) ;
        int CountAvailableBreeds(string breed) ;
    private: 
        string name;
        vector<double> speeds;
        vector<string> breeds;
};
