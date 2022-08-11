// Anthony Caulkins 8/10/22

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Try This 05

#include "std_lib_facilities.h"

// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//Implement square() without using the multiplication operator; 
//that is, do the x*x by repeated addition (start a variable result at 0 and add x to it x times). 
//Then run some version of “the first program” using that square().”

//Write a square function without using a * operator

int square(int v) //declare function named square
{
   int sqr = 0;
   for(int z = 0;z < v; ++z) //create a loop that increments while it is lower than the input value
       sqr += v; //for each incrementing value of 'z' set the value of 'sqr' to the current value of 'sqr' + 'v'
       return sqr;
}

int main()
{
   for(int i = 0; i<100; ++i)
   cout << i << '\t' << square(i) << '\n';
}
