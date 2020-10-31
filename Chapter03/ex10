// Anthony Caulkins 10/31/20

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 03 Exercise 10

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"


//Name and perform an operation

int main()
{
    string operation = " ";
    double val1 = 0.;
    double val2 = 0.;
    cout << "Enter a math operator (+, -, *, /, 'plus', 'min', 'mul', or 'div') and then two numbers (separated by spaces) and then hit 'enter': \n";
    while(cin >> operation >> val1 >> val2)
    {
        double res = 0.;
        if (operation == "+"  || operation == "plus") res = val1 + val2;
        else if (operation == "-" || operation == "min") res = val1 - val2;
        else if (operation == "*" || operation == "mul") res = val1 * val2;
        else if (operation == "/" || operation == "div")
        {
            if (val2 == 0) error("trying to divide by zero");
            res = val1 / val2;
        }
            
        
        else error("Sorry, bad operator: ",operation);
        
        cout << val1 << " " << operation << " " << val2 << " = " << res << '\n';
        cout << "Please try again: \n";
    }
}
