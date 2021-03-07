// Anthony Caulkins 10/31/20

// Stroustrup, Bjarne 
// Programming: Principles and Practices Using C++
// Chapter 03 Exercise 11

#include "std_lib_facilities.h"
// header file suggested by Stroustrup
// you may need to specify location of this file ".../std_lib_facilities.h"


//Coin Counter

int main()
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int dollars = 0;
    
    double total = 0.;

    cout << "Enter your number of pennies: ";
    cin >> pennies;
    cout << "Enter your number of nickels: ";
    cin >> nickels;
    cout << "Enter your number of dimes: ";
    cin >> dimes;
    cout << "Enter your number of quarters: ";
    cin >> quarters;
    cout << "Enter your number of half-dollars: ";
    cin >> half_dollars;
    cout << "Enter your number of dollars: ";
    cin >> dollars;
    cout << '\n';
    
    total = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (dollars *100);
    
    if (pennies == 1) cout << "You have " << pennies << " penny." << '\n';
    else cout << "You have " << pennies << " pennies." << '\n';
    
    if (nickels == 1) cout << "You have " << nickels << " nickel." << '\n';
    else cout << "You have " << nickels << " nickels." << '\n';
    
    if (dimes == 1) cout << "You have " << dimes << " dime." << '\n';
    else cout << "You have " << dimes << " dimes." << '\n';
    
    if (quarters == 1) cout << "You have " << quarters << " quarter." << '\n';
    else cout << "You have " << quarters << " quarters." << '\n';
    
    if (half_dollars == 1) cout << "You have " << half_dollars << " half-dollar." << '\n';
    else cout << "You have " << half_dollars << " half-dollars." << '\n';
    
    if (dollars == 1) cout << "You have " << dollars << " dollar." << '\n';
    else cout << "You have " << dollars << " dollars." << '\n' << '\n';
    
    cout << "The value of all of your coins is: " << total << " cents or $" << total/100. << '\n';
}
