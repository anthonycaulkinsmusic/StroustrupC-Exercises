// Anthony Caulkins 8/10/22

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Drill 01

#include "std_lib_facilities.h"

// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

// “Rewrite your currency converter program from the previous Try this to use a switch-statement. 
// Add conversions from yuan and kroner. Which version of the program is easier to write, understand, and modify? Why?”

int main()
{
   constexpr double yen_to_dollars = 0.0096; //conversion of yen to dolars
   constexpr double kroner_to_dollars = 0.12; //conversion of Norwegian kroner to dollars
   constexpr double pounds_to_dollars = 1.37; //conversion of pounds to dollars
   constexpr double yuan_to_dollars = 0.15; //conversion of yuan to dollars
   constexpr double krone_to_dollars = 0.16; //conversion of Danish kroner to dollars
   double dollars = 1.; //number of dollars
   char unit = 'd'; //currency unit

   cout << "Please enter number followed by currency type ('y', 'k', 'n', d', or 'p'):\n";
   cin >> dollars >> unit;

   switch(unit)
   {
       case 'y': cout << "Your " << dollars << " Japanese Yen equals " << dollars * yen_to_dollars << " US Dollars.\n";
           break;

       case 'k': cout << "Your " << dollars << " Norwegian Kroner equals " << dollars * kroner_to_dollars << " US Dollars.\n";
           break;

       case 'p': cout << "Your " << dollars << " British Pounds equals " << dollars * pounds_to_dollars << " US Dollars.\n";
           break;

       case 'n': cout << "Your " << dollars << " Chinese Yuan equals " << dollars * yuan_to_dollars << " US Dollars.\n";
           break;

       case 'd': cout << "Your " << dollars << " Danish Kroner equals " << dollars * krone_to_dollars << " US Dollars.\n";
           break;

       default: cout << "Oops, I don't know a currency called: " << unit << "\n";
           break;
   }
}
