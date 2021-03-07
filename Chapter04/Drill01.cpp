
// Anthony Caulkins 3/06/21

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Drill 01

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

//“Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them. Exit the program when a terminating '|' is entered.”

int main()
{
    vector <int> numbers;
    int number = 0;
    
    cout << "Enter two ints, and exit using the '|' symbol: \n";
    
    while(cin >> number)
    {
        numbers.push_back(number);
    
        if (numbers.size() % 2 == 0)
            cout << numbers[numbers.size()-2.] << " " << numbers[numbers.size()-1.] << '\n';
    }
}
