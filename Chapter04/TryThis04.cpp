// Anthony Caulkins 8/10/22

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Try This 04

#include "std_lib_facilities.h"

// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//Rewrite the character value example from the previous Try this to use a for-statement.
//Then modify your program to also write out a table of the integer values for uppercase letters and digits.


//writes a table of characters and their corresponding values (for loop)

int main()
{
   for(char init = 'A'; init<123; ++init)
       cout << init << '\t' << int(init) << '\n';
}
