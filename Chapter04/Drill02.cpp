// Anthony Caulkins 3/06/21

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 04 Drill 02

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"

// 01 “Write a program that consists of a while-loop that (each time around the loop) reads in two ints and then prints them. Exit the program when a terminating '|' is entered.”
// 02 “Change the program to write out the smaller value is: followed by the smaller of the numbers and the larger value is: followed by the larger value.”

int main()
{
    vector <int> numbers;
    int number = 0;
    
    cout << "Enter two ints, and exit using the '|' symbol: \n";
    
    while(cin >> number)
    {
        numbers.push_back(number);
    
        if (numbers.size() % 2 == 0)
        {
            if (numbers[numbers.size()-2] > numbers[numbers.size()-1])
                cout << "The smaller number is: " << numbers[numbers.size()-1] << " and the larger number is: " << numbers[numbers.size()-2] << '\n';
            else cout << "The smaller number is: " << numbers[numbers.size()-2] << " and the larger number is: " << numbers[numbers.size()-1] << '\n';
        }
    }
