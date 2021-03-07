// Anthony Caulkins 9/16/20

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 03 Exercise 05

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//Comparing two inputed numbers

int main()
{
    cout << "Enter two floating-point values: ";
    double val1;
    double val2;
    cin >> val1 >> val2;
    if (val1 < val2)
        cout << "Smaller Value: " << val1 << '\n';
    else cout << "Smaller Value: " << val2 << '\n';
    if (val1 > val2)
        cout << "Larger Value: " << val1 << '\n';
    else cout << "Larger Value: " << val2 << '\n';

    cout << "Sum of values: " << val1 + val2 << '\n'
    << "difference between values: " << val1 - val2 << '\n'
    << "Product of values: " << val1 * val2 << '\n'
    << "Ratio of values: " << val1 / val2 << '\n';
}
