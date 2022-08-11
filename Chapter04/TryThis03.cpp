// Anthony Caulkins 8/10/22

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Try This 03

#include "std_lib_facilities.h"

// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//“The character 'b' is char('a'+1), 'c' is char('a'+2), etc. 
//Use a loop to write out a table of characters with their corresponding integer values:
//a     97
//b     98
//. . .
//z     122”

//writes a table of characters and their corresponding values (while loop)

int main()
{
   char init = 'a';
   int char_val = init;

   while(init<123)
   {
       cout << init << '\t' << char_val << '\n';
       ++init;
       ++char_val;
   }
}
