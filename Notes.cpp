// ----------Week 1----------

#include <iostream>
#include <math.h>
using namespace std;

/*
int main(){
    cout << "Hello Sections 300 and 350!\n " <<endl;
    return 0;
}

int main(){
     
    int initial_money = 0;
    cout << "Please enter money: ";
    cin >> initial_money;

    int num_of_stamps = 0;
    cout <<  endl; << "Please enter number of stamps: ";
    cin >> num_of_stamps;
    // cout <<  endl; << "Please enter money and number of stamps: ";
    // cin >> initial_money >> num_of_stamps;
    cout << endl;

    int purchase_price_cents = num_of_stamps * 55;
    int change_cents = (initial_money *100) - purchase_price_cents;
    int change_dollars = change_cents / 100;
    int change_pennies = change_cents % 100;

    cout << "Change in dollars: " << change_dollars << endl;
    cout << "Change in pennies: " << change_pennies << endl;
    return 0;

}
*/

/*
int main(){

    // Dividing two variables 
    int num_1 = 37;
    int num_2 = 13;
    cout <<"Dividing two integer variables: "<< num_1/num_2 << endl;

    // Dividing two variables of type double: double

    // Dividing two variables of different types: double, as long as one is double

    int a,b;
    double c;

    a=17;
    b=5;
    c= (double) (a/b);


}
*/

/*
int main(){
    cout << "hello 1300!" << endl;
    return 0;
}
*/

// ----------Week 2------------ 

/* int main(){    
    // A variable must have a type and a name. You can assign it an initial value, but it's not mandatory    
    int var1; //variable declaration    
    var1 = 42; // variable initialization    
    int var2 = 17; // declaration and initialization  in the same statement    
    cout << "The value of variable var1 is: " << var1 << endl;  
    cout << "The value of variable var2 is: " << var2 << endl;  
    // Rules for variable names/identifiers and initial value:    
    // Error #1: name must start with a characted or _    
    int _4you; // when we used 4you we got an expected unqualified-id error    
    // Error #2: cannot use the name of an already declared variable    
    //int var2; // var 2 already declared    

    // Error #3: you cannot use a reserved word as a variable name    
    // Examples: for, while, switch, if, int, double, float, main    
    // Error #4: some symbols are not allowed. cannot have spaces in the name    
    // Examples: +, /, %, (), ., ,    

    // Error #4: the initial value MUST MATCH the declared type. All the time?    
    // Answer: not all the time    
    int var3 = 5.7;    
    cout << "The value of var3 is: " << var3 << endl;  
    double d1 = 5.7;    
    cout << "The value of d1 is: " << d1 << endl;  
    // Typecasting: int to double, double to int, int to char, char to int    
    var3 = int(5.777777777777);    
    cout << "The value of var3 is: " << var3 << endl;  
    d1 = double(7);    
    cout << "The value of d1 is: " << d1 << endl;  
    // Modifying the value of variable via assignment statement. cout to see the updated value    
    d1 = 43.759;    
    cout << "The value of d1 is: " << d1 << endl;  
    d1 = d1 + 7; // the value gets overwritten by a new value    
    cout << "The value of d1 is: " << d1 << endl;  
    // d1 = d2 + 7; // d2 has not been declared, this will be an error      
    // Modifying the value of a variable with cin, for int and string    
    // Next time: on Friday    
    return 0;
}
*/

/*
int main(){    
    // Let's define a variable (or a few). Do not initialize them! Then, print their value    
    int var_a;    
    int var_b;    
    double var_c;    
    cout << "The value of var_a is: " << var_a << endl;  
    cout << "The value of var_b is: " << var_b << endl;  
    cout << "The value of var_c is: " << var_c << endl;  
    // Compile and run with just the code above (lines 7-14). 
    // What values are printed? Run it again; do you see the same values printed?    
    // We call these unknown, unexpected values ... GARBAGE!    
    // Can we use variables that have not been initialized?    
    // Answer: we can, but it would be foolish. Let's see an example:    
    var_b = var_a + 5;    
    cout << "The value of var_b is: " << var_b << endl;  
    // because the variable var_a has not been initialized, 
    //the result of the addition of line 21 will be uncertain.     
    // var_b will get the value of ... GARBAGE!    
    // Summary: it is not forbidden, it will not trigger a compile time error, 
    // but because it will have unintended consequences    
    // it will be a logical error (run-time error)    
    return 0;
}
*/

/*
int main(){    
    int a,b;    
    double c;    
    a = 17;    
    b = 5;    
    c = (double) (a/b);    
    // "Highest-order operand" determines type of arithmetic "precision" performed    
    cout << "17/5 = " << a/b << "\n" ;    
    cout << "17.0/5 = " << (double)a/b << endl;  
    cout << "17/5.0 = " << a / (double)b << endl;  
    cout << "17/5 = " << (double) (a/b) << endl;  
    cout << "c = " << c << endl;  
    cout << "c/2 = " << c/2 <<endl;  
    cout << "(a/b) / 2 = " << (double)(a/b) /2 <<endl;  
    cout << "a/b/2 = " << a/b/2 << endl;  
    cout << "1/2/3.0/4 = " << 1/2/3.0/4 << endl;  
    return 0;
}
*/

/*
int main(){ // int   
    int intA, intB;    
    intA = 0;    
    intA++;    
    intB = 0;    
    ++intB;    
    cout << "intA = " << intA << " and intB = " << intB << endl;
    intB = 2 * intA++; 
    // first use OLD value in expression, then increment    
    cout << "intA = " << intA << " and intB = " << intB <<endl;  
    // same as    
    intA = 2;    
    intB = 2 * intA;    
    intA = intA + 1;    
    cout << "intA = " << intA << " and intB = " << intB <<endl;  
    intA = 2;    
    intB = 2 * ++intA; 
    // first increment, then use NEW value in expression    
    cout << "intA = " << intA << " and intB = " << intB <<endl;  
    // same as    
    intA = 2;    
    intA = intA + 1;    
    intB = 2 * intA;    
    cout << "intA = " << intA << " and intB = " << intB <<endl;  
    // Note: the value of the variable incremented (intA) is the same in both situations    
    return 0;
}
*/

/*
int main(){ // bool
    // bool can hold one value: 0 or 1
    bool var1;
    var1 = true;
    int x = 3;
    int y=7;

    var1 = (x!=y);
    var1 = (x!=y) && (x<5);
    var1 = (x!=y) || (x<5);
    return 0;
}
*/

/*
int main(){
    int floor;
    cout << "ENter the desired floor: " << endl;
    cin >> floor;
    int actual_floor;
    // floor = 13;
    // if block
    if(floor > 13){
        // floor = floor -1;
        floor --;
    }
    // else block
    // }else{
       // actual_floor = floor;
    // }
     cout << " floor: " << floor << endl;

return 0;
}
*/

/*
int main(){
    int a,b,c;
    cout << "Please enter 3 numbers: " << endl;
    cin >> a >> b >> c;
    int max_so_far = a;
    if (b > max_so_far){
        max_so_far = b;
    }
    if (c > max_so_far){
        max_so_far = c;
    }
    // if(a > b && a > c){
    //     cout << a << endl;
    // }
    // else if(b > a && b > c){
    //     cout << b << endl;
    // }
    // else if(c > a && c > b){
    //     cout << c << endl;
    // }

    return 0;
}
*/

/*
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main ()
{    
    double budget;    
    const double APPLE = 1;    
    const double CHEESE = 3;    
    const int BAGEL = 1;    
    const int DRINK = 2;    
    double total = 0;    
    char choice; // char = character 'a', 'A', '0', '1', ',', ';'. Do not confuse with string "hello", "A"    
    int count;    
    // cout << " Let's calculate the picnic lunch price  " << endl;    
    // cout << " Enter your budget for the lunch ? " << endl;    
    // cin >> budget;    
    // cout << endl;    
    // cout << "*****************menu************************"<<endl;    
    // cout << "*    A-Apple     B-Bagel C-Cheese D-Drink Q-Quit  *"<<endl;    
    // cout << "*      $1    $1   $3        $2        -     *"<<endl;    
    // cout << "*********************************************"<<endl;    
    // cout << endl;    
    // cout << "What would you like to add to the picnic basket? Enter your choice of A, B, C, or D: " << endl;    
    // cin >> choice;    
    do   
    {        
        switch (choice)        
        {            
            case 'A':   // if ((choice == 'A' || choice == 'a'))            
            case 'a':                
                cout << "How many apples?" << endl;                
                cin >> count;                
                total = total + (count * APPLE);                
                break;            
            case 'B':            
            case 'b':                
                cout << "How many bagels?" << endl;                
                cin >> count;                
                total = total + (count * BAGEL);                
                break;            
            case 'C':            
            case 'c':                
                cout << "How many slices of cheese?" << endl;                
                cin >> count;                
                total = total + (count * CHEESE);                
                break;            
            case 'D':            
            case 'd':
                cout << "How many drinks?" << endl;                
                cin >> count;                
                total = total + (count * DRINK);                
                break;            
            default: cout << "Invalid choice" << endl; break;        
        }        
        cout << "Total: " << total << endl;        
        cout << "*****************menu************************"<<endl;        
        cout << "*      A-Apple     B-Bagel C-Cheese D-Drink Q-Quit  *"<<endl;        
        cout << "*         $1           $1     $3       $2      -     *"<<endl;        
        cout << "*********************************************"<<endl;        
        cout << endl;        
        cout << "What would you like to add to the picnic basket? Enter your choiceof A, B, C, or D: " << endl;        
        cin >> choice;    
    }while (total<budget);   
    return 0;
}
*/

/*
int main(){
    int num=4;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    for(int j=0; j<num; j++){
        // cout<<"Comment1: value of j is"<<j<<endl;
        for(int i=0; i<num; i++){
            cout<<"* ";
            // cout<<"Comment2: value of i is"<<i<<endl;
        }
        cout<<endl; 
    }
   
    return 0;
}
*/

/*
int main(){
    string str1="We are searching for substring. It may be at the start or at the end.";
    for (int i=0; i<str1.length(); i++)
    {
        if ("substring"==str1.substr(i,9))
        {
            cout<<"We found substring at "<<i<<endl;
        }
    }
}
*/

// return_type function_name(){
//     code 
//     return ...
// }

// double cube_volume(double side_length){
//     double volume = side_length*side_length*side_length;
//     return volume;
// }

// int main(){
//     double side_length=0;
//     cout<<"Enter length for a cube: "<<endl;
//     cin>>side_length;
//     // double volume = side_length*side_length*side_length;
//     cout<<"Volume of cube is: "<< cube_volume(side_length) <<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int ask_input_money(){    
//     int money = 0;    
//     cout << "Please enter money: ";    
//     cin >> money;    
//     return money;
//     }
    
    
// int main(){    
//     const int STAMP_PRICE = 55;    
//     // const int STAMP_PRICE_1 = 45;    
//     // Ask user to input a whole number for the dollar amount inserted into the machine    
//     // int initial_money = 0;    
//     // cout << "Please enter money: ";    
//     // cin >> initial_money;    
    
//     int initial_money = ask_input_money();    
//     // cout << ask_input_money();    
//     // Ask user to input a whole number for the number of stamps wished to purchase    
//     int num_of_stamps = 0;    
//     cout << "please enter number of stamps: " ;    
//     cin >> num_of_stamps;    
//     // Compute total purchase price    
//     int purchase_price_cents = num_of_stamps * STAMP_PRICE;    
//     // Check if you have enough money    
//     if (purchase_price_cents <= initial_money*100)    
//     {        
//         // Compute change needed        
//         int change_cents = (initial_money * 100) - purchase_price_cents;        
//         // Give change        
//         int change_dollars = change_cents / 100;        
//         int change_pennies = change_cents % 100;        
//         cout << "change in dollars: " << change_dollars << endl;        
//         cout << "change in pennies: " << change_pennies << endl;    
//         }        
//     else    
//     {        
//         cout << "not enough money" << endl;    
//     }    
//     return 0;
// }

// int main(){     
//     const int CAPACITY = 1000;   
//     double values[CAPACITY];   
//     double input;   
//     int array_size = 0;   
//     double largest = -10000000000;   
//     cout << "Please enter values (separated by spaces), Q to quit:" << endl;   
//     int i = 0;   // need to remember how many elements we entered   
//     while (cin >> input)   
//     {      
//         // check if we haven't entered more than 1000 numbers      
//         if (i < CAPACITY)      
//         {         
//             values[i] = input;         
//             i++;      
//         }   
//     }   
//     array_size = i;   
//     cout << array_size << endl;   
//     // find the largest   
//     for (i=0; i < array_size; i++)   
//     {      
//         if (values[i] > largest) //largest holds max value so far      
//         {         
//             largest = values[i];      
//         }   
//     }   
//     //print them   
//     for (i=0; i < array_size; i++)   
//     {      
//         cout << values[i];      
//         if (values[i] == largest)      
//         {         
//             cout << " <== largest value";      
//         }      
//         cout << "\n";   
//     }   
//     return 0;
// }

/* #include <iostream>
#include <fstream>
#include <string>
using namespace std;
/* Step 1:  Understand the processing task.
Program to reverse the lines in a file and write them to a new file.
  - open the file for reading
  - read each line with getline() into a string
  - reverse the string - open a file for writing 
  - write reversed string to a file

int main(){   
    // Step 2:  Determine which files you need to read and write.
    // Step 3:  Choose a method for obtaining the file names.   
    // a) hardcode them   
    // b) ask the user to input file names   
    ifstream in; // for reading   
    string filename1 = "Mary.txt";   
    in.open(filename1); // open file for reading   
    
    // Step 4:  Choose between line, word, and character-based input.   
    string line, revLine;   
    bool more = true;   
    while (more)   
    {      
        getline(in, line); // line contains string for each line in the file      
        if (in.fail())  // when the file ends      
        {         
            more = false;      
        }      
        else  // if it's not the last line      
        {         
            // Step 5:  With line-oriented input, might need to extract          
            // the required data.         
            // Step 6:  Place repeatedly occurring tasks into functions.         
            revLine = reverse(line);         
            // Step 7:  If required, use manipulators to format the output.         
            cout << revLine << endl;      
            }   
        }   
        in.close();   
        return 0;
    }

   Reverse a string that is passed in as a parameter.
   @param newline the string to be reversed
   Return the reversed string

string reverse(string line)
{
    int j = line.length() - 1; //index of the last character
    string copyline = line;  //because we want it to have the same number of characters
    // loop through copyline, copy ch from line from the last to the first
    for (int i = 0; i < line.length(); i++)
    {
        copyline[i] = line[j];
        j--;
    }
    return copyline;
}
*/

// #include <string.h>
// #include <fstream>
// #include <bits/stdc++.h>
// int main() 
// { 
//     string S, T; 
//     getline(cin, S); 
//     string words[100];
//     stringstream X(S);   
//     while (getline(X, T, ' ')) { 
//         cout << T << endl; 
//     }   
//     return 0; 
// }

