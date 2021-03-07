  
// Anthony Caulkins 3/07/21

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Drill 04

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

// 01 “Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them. Exit the program when a terminating '|' is entered.”
// 02 “Change the program to write out the smaller value is: followed by the smaller of the numbers and the larger value is: followed by the larger value.”
// 03 "Augment the program so that it writes the line the numbers are equal (only) if they are equal."
// 04 "Change the program so that it uses doubles instead of ints.”

int main()
{
    vector <double> numbers;
    double number = 0.;
    
    cout << "Enter two numbers, and exit using the '|' symbol: \n";
    
    while(cin >> number)
    {
        numbers.push_back(number);
    
        if (numbers.size() % 2 == 0)
        {
            if (numbers[numbers.size()-2.] > numbers[numbers.size()-1.])
                cout << "The smaller number is: " << numbers[numbers.size()-1.] << " and the larger number is: " << numbers[numbers.size()-2.] << '\n';
            else if (numbers[numbers.size()-2.] == numbers[numbers.size()-1.])
                cout << "The numbers are equal. (" << numbers[numbers.size()-1.] << ", " << numbers[numbers.size()-2.] << ") \n";
            else cout << "The smaller number is: " << numbers[numbers.size()-2.] << " and the larger number is: " << numbers[numbers.size()-1.] << '\n';
        }
    }
}
