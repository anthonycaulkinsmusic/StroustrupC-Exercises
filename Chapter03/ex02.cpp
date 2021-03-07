// Anthony Caulkins 9/15/20

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 03 Exercise 02

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//Converts Miles to Kilometers

int main()
{
    cout << "Enter your distance in miles: ";
    double miles = 0;
    cin >> miles;
    
    cout << "Your distance in Kilometers was: " << miles * 1.60934 << '\n';
}
