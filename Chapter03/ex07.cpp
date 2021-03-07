// Anthony Caulkins 10/29/20

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 03 Exercise 07

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"


//Ordering strings alphabetically 

int main()
{
    cout << "Enter three names separated by spaces: \n";
    string name1 = " ";
    string name2 = " ";
    string name3 = " ";
    cin >> name1 >> name2 >> name3;
    string first = " ";
    string middle = " ";
    string last = " ";

    if (name1 <= name2 && name1 <= name3)
    {
        last = name1;
        if (name2 <= name3)
        {
            middle = name2;
            first = name3;
        }
        else
        {
            middle = name3;
            first = name2;
        }
    }
    else if (name2 <= name1 && name2 <= name3)
    {
        last = name2;
        if (name1 <= name3)
        {
            middle = name1;
            first = name3;
        }
        else
        {
            middle = name3;
            first = name1;
        }
    }

    else
    {
        last = name3;
        if (name1 <= name2)
        {
            middle = name1;
            first = name2;
        }
        else
        {
            middle = name2;
            first = name1;
        }
    }

    cout << "Alphatetical Order: " << last << ", " << middle << ", " << first << ", \n";
}
