#include <iostream>
using namespace std;

// int main(){
//     double chargehrs;
//     double solarpower;
//     double batterycap;
//     double batterycharge;
//     double timecharge;
//     double chargeper;

//     cout<<"Enter the number of hours of charging: "<<endl;
//     cin >> chargehrs;
//     cout<<"Enter the solar panel power: "<<endl;
//     cin>>solarpower;
//     cout<<"Enter the battery capacity: "<<endl;
//     cin>>batterycap;

//     timecharge= (solarpower/batterycap) * 1.6;
//     chargeper=(chargehrs/timecharge)*100.0;

//     if (chargeper>=100)
//     {
//         cout<<"Battery charge: 100"<<endl; 
//     }
//     else
//     { 
//         cout<<"Battery charge: "<< chargeper <<endl; 
//     }

// }

// int main(){
//     int suit;

//     cout<<"Enter Suit:"<<endl;
//     cin>>suit;

//     switch(suit)
//     {
//         case 0:
//             cout<<"Suit "<<suit<<": Clubs";
//             break;
//         case 1:
//             cout<<"Suit "<<suit<<": Diamonds";
//             break;
//         case 2:
//             cout<<"Suit "<<suit<<": Spades";
//             break;
//         case 3:
//             cout<<"Suit "<<suit<<": Hearts";
//             break;
//         default: cout << "Suit "<<suit<< ": Invalid" << endl; break; 
//     }
// }

// int main(){
//     double first;
//     double second;
//     double third;

//     cout<<"Enter first number: "<<endl;
//     cin>>first;
//     cout<<"Enter second number: "<<endl;
//     cin>>second;
//     cout<<"Enter third number: "<<endl;
//     cin>>third;

//     if (first<=second && first<=third)
//     {
//         cout<<"The smallest number is "<<first<<endl;
//     }
//     else if (second<=first && second<=third)
//     {
//         cout<<"The smallest number is "<<second<<endl;
//     }
//     else if (third<=first && third<=second)
//     {
//         cout<<"The smallest number is "<<third<<endl;
//     }
//     else
//     {
//         cout<<"Invalid"<<endl;
//     }
    

// }

int main()
{

	int month; 
	cout << "Enter a month:" << endl; 
	cin >> month; 
    
	if(month >= 6 && month <= 8)
    {
		cout << "It's winter" << endl; 
    }
	else if(month >= 9 && month <= 11)
    {
		cout << "It's spring" << endl; 
	} 
    else if (month >= 3 && month <= 5)
    {
		cout << "It's autumn" << endl; 
	} 
    else if (month == 1 || month ==2 || month == 12)
    {
		cout << "It's summer" << endl; 
	}
    else{
		cout << "Invalid" << endl; 
	}

	return 0;
}

