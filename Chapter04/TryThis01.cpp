// Anthony Caulkins 3/06/21

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Try This 01

#include "std_lib_facilities.h"

// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//“Use the example above as a model for a program that converts yen ('y'), kroner ('k'), and pounds ('p') 
//into dollars. If you like realism, you can find conversion rates on the web.”

int main()
{
   constexpr double yen_to_dollars = 0.0096; //conversion of yen to dolars
   constexpr double kroner_to_dollars = 0.11; //conversion of kroner to dollars
   constexpr double pounds_to_dollars = 1.34; //conversion of pounds to dollars
   double dollars = 1.; //number of dollars
   char unit = 'd'; //currency unit

   cout << "Please enter number followed by currency type ('y', 'k', or 'p'):\n";
   cin >> dollars >> unit;

   if (unit == 'y')
       cout << "Your " << dollars << " Yen equals " << dollars * yen_to_dollars << " Dollars.\n";
   else if (unit == 'k')
       cout << "Your " << dollars << " Kroner equals " << dollars * kroner_to_dollars << " Dollars.\n";
   else if (unit == 'p')
       cout << "Your " << dollars << " Pounds equals " << dollars * pounds_to_dollars << " Dollars.\n";
   else
       cout << "Oops, I don't know a currency called: " << unit << "\n";
}
