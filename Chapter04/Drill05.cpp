// Anthony Caulkins 3/16/21

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Drill 05

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

// 01 “Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them. Exit the program when a terminating '|' is entered.”
// 02 “Change the program to write out the smaller value is: followed by the smaller of the numbers and the larger value is: followed by the larger value.”
// 03 "Augment the program so that it writes the line the numbers are equal (only) if they are equal."
// 04 "Change the program so that it uses doubles instead of ints.”
// 05 “Change the program so that it writes out the numbers are almost equal after writing out which is the larger and the smaller if the two numbers differ by less than 1.0/100."

int main()
{
    vector <double> numbers;
    double number = 0.;
    constexpr double min_dif = 1.0/100.;

    cout << "Enter two numbers, and exit using the '|' symbol: \n";

    while(cin >> number)
    {
        numbers.push_back(number);
        
        if (numbers.size() % 2 == 0)
        {
            double No1 = numbers[numbers.size()-2.];
            double No2 = numbers[numbers.size()-1.];
            
            if (No1 == No2)
                cout << "The numbers are equal. (" << No1 << ", " << No2 << ") \n";
            
            else if ((No1>No2) && (((No1-No2) < min_dif)))
                cout << "The smaller number is: " << No2 << " and the larger number is: " << No1 << '\n' << "The numbers are almost equal." << '\n';
            
            else if ((No2>No1) && (((No2-No1) < min_dif)))
                cout << "The smaller number is: " << No1 << " and the larger number is: " << No2 << '\n' << "The numbers are almost equal." << '\n';

            else if (No1>No2)
                cout << "The smaller number is: " << No2 << " and the larger number is: " << No1 << '\n';
                
            else if (No2>No1)
                cout << "The smaller number is: " << No1 << " and the larger number is: " << No2 << '\n';
        }
    }
}
