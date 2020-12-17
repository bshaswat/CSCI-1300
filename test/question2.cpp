#include <iostream>
#include <string>
using namespace std;

int Count_a_j(string string1){
    int count = 0;
    int length = string1.length();
    if(length==0){
        return -1;
    }else{ 
        for(int i=0; i<length; i++){
            char a = string1[i];
            int num=int(a);
            if( num >= 97 && num <=106 ){
                count = count + 1;
            }
        }
    }
    if(count == 0){
        return -2;
    }else{
        return count;
    }
}

int main(){
    cout<<Count_a_j("ALL THE BEST")<<endl;
}