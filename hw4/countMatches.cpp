#include <iostream>
using namespace std;

int main(){
    string string1;
    string string2;

    cout<<"Enter the search string: "<<endl;
    cin>>string1;
    cout<<"Enter the substring to be searched: "<<endl;
    cin>>string2;

    for(int i=0; i< string1.length(); i++)
    {
        if(string2 == string1.substr(i,string1.length()))
        {
            cout<<"We found it at "<<i<<endl;
        }
    }

    return 0;
}