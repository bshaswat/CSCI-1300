// Week 1

#include <iostream>
using namespace std;

/*
int main(){
    cout << "Hello Sections 300 and 350!\n " << endl;
    return 0;
}
*/

/* int main(){
     
    int initial_money = 0;
    cout << "Please enter money: ";
    cin >> initial_money;

    int num_of_stamps = 0;
    cout << endl << "Please enter number of stamps: ";
    cin >> num_of_stamps;
    // cout << endl << "Please enter money and number of stamps: ";
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

int main(){
    cout << "hello 1300!" << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;
// this is my program
int main(){    
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


#include <iostream>
using namespace std;
// this is my program
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

#include <iostream>
#include <math.h>
using namespace std;
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
    cout << "c/2 = " << c/2 << endl;    
    cout << "(a/b) / 2 = " << (double)(a/b) /2 << endl;    
    cout << "a/b/2 = " << a/b/2 << endl;    
    cout << "1/2/3.0/4 = " << 1/2/3.0/4 << endl;    
    return 0;
}

#include <iostream>
using namespace std;
int main(){    
    int intA, intB;    
    intA = 0;    
    intA++;    
    intB = 0;    
    ++intB;    
    cout << "intA = " << intA << " and intB = " << intB << endl;    
    intA = 2;    
    intB = 2 * intA++; 
    // first use OLD value in expression, then increment    
    cout << "intA = " << intA << " and intB = " << intB << endl;    
    // same as    
    intA = 2;    
    intB = 2 * intA;    
    intA = intA + 1;    
    cout << "intA = " << intA << " and intB = " << intB << endl;    
    intA = 2;    
    intB = 2 * ++intA; 
    // first increment, then use NEW value in expression    
    cout << "intA = " << intA << " and intB = " << intB << endl;    
    // same as    
    intA = 2;    
    intA = intA + 1;    
    intB = 2 * intA;    
    cout << "intA = " << intA << " and intB = " << intB << endl;    
    // Note: the value of the variable incremented (intA) is the same in both situations    
    return 0;
}
