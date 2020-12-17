#include <iostream>
#include <vector>
#include <string>
using namespace std;

int decimalToBinary(int number){
    int num;
    string string1;
    if (number == 0)  
        return 0;  
    else
        num = number % 2 + 10 *  decimalToBinary(number / 2); 
        // string1= to_string(num);
    return num;
}

string decimalToBinaryRecursive(int number){
    int num1;
    string string1;
    num1=decimalToBinary(number);
    string1=to_string(num1);
    return string1;
}

int main() 
{ 
    int number = 8; 
    cout << decimalToBinaryRecursive(number)<<endl; 
    return 0; 
}