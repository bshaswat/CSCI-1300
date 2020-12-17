// Create a class named PhoneBook which will hold a list of telephone area codes and their associated operating regions (e.g. states). 
// The class will allow a user to search for a particular area code or calling region.

// PhoneBook should have private data members:

// codes (an int array of size 400 with all the area codes)
// regions (a string array of size 400 for all regions). 
// PhoneBook should have a default constructor and should initialize the codes to 0 [integer] and the regions array to the empty 
// string ("")  and the following public methods: 
// int LoadAreaCodes(string filename)
// string GetRegion(int areaCode)
// int CountAreaCodesInRegion(string region)
// LoadAreaCodes should read in a filename where each line is a 3-digit area code followed by the name of a region of the United States, 
// separated by a comma. If the file does not exist, return -1. Otherwise, return 0.The method should read the file and put the 
// appropriate data into codes and regions. Each area code will only appear once. The last line may or may not end in '\n'.

// Few lines from the file to be loaded:

// 201,NJ
// 202,DC
// 203,CT
// 204,MB
// 205,AL
// 206,WA

// GetRegion will search for a particular area code, and return the region where that telephone area code is used. It should 
// return "Not Found" if the area code is not found.

// CountAreaCodesInRegion will take in region return a count of the number of area codes within that region. Return 0 if the if 
// given region is not found.

// Note: A single region can have multiple area codes, but an area code can have only one region.

// You only need to write the class definition and any code that is required for that class. 

// NOTE: We have provided a function that may make the parsing easier:
//       int split(string s, char sep, string words[], int max_words);



#include <iostream>
#include <fstream>
using namespace std;

class PhoneBook{
    public:
        PhoneBook(){
            codes[400] = {0};
            regions[400] = {""};
        }
        int LoadAreaCodes(string filename){
            string line;
            ifstream infile;
            infile.open(filename);
            if(infile.fail()){
                cout<<"Could not open file."<<endl;
                return -1;
            }
            else{
                while(getline(infile,line)){
                    
                }
            }
    }

    private:
        int codes[400];
        string regions[400];
        int LoadAreaCodes(string filename);
        string GetRegion(int areaCode);
        int CountAreaCodesInRegion(string region);
};