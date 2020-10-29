// Anthony Caulkins 10/29/20

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 03 Exercise 06

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//Ordering inputed numbers

int main ()
{
    cout << "Enter three different integer values: \n";
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    cin >> val1 >> val2 >>val3;
    int max = 0;
    int mid = 0;
    int min = 0;

    if (val1 <= val2 && val1 <= val3)
    {
        min = val1;
        if (val2 <= val3)
        {
            mid = val2;
            max = val3;
        }
        else
        {
            mid = val3;
            max = val2;
        }
    }

    else if (val2 <= val1 && val2 <= val3)
    {
        min = val2;
        if (val1 <= val3)
        {
            mid = val1;
            max = val3;
        }
        else
        {
            mid = val3;
            max = val1;
        }
    }

    else
    {
        min = val3;
        if (val1 <= val2)
        {
            mid = val1;
            max = val2;
        }
        else
        {
            mid = val2;
            max = val1;
        }
    }

    cout << "Ordered values: " << min << ", " << mid << ", " << max << '\n';

}
