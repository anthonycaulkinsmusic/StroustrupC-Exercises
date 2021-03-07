// Anthony Caulkins 10/29/20

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 03 Exercise 09

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//Convert string 'numbers' to integers

int main()
{
    cout << "Enter a spelled out number, from 'zero' to 'four': \n";
    string number = " ";

    while (cin>>number)
    {
        if (number == "zero" || number == "Zero")
            cout << number << " has the value: 0\n";
        else if (number == "one" || number == "One")
            cout << number << " has the value: 1\n";
        else if (number == "two" || number == "Two")
            cout << number << " has the value: 2\n";
        else if (number == "three" || number == "Three")
            cout << number << " has the value: 3\n";
        else if (number == "four" || number == "Four")
            cout << number << " has the value: 4\n";

        else
            cout << number << " does not have a numeric value that I understand. Sorry!\n";
            cout << "Please enter another spelled out number, from 'zero' to 'four'.";
    }

}
