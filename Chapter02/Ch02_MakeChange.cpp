// @file Ch02_MakeChange.cpp
// @author predrag.josifovic

#include <iostream>

using namespace std;

const int HALF_DOLLAR = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKLE = 5;

int main()
{
    int change;
    cout << "Enter change in cents: ";
    cin >> change;

    cout << "The change you entered is "
         << change << endl;
    
    cout << "The number of half-dollars to be returned "
         << "is "<< change / HALF_DOLLAR
         << endl;

    change %= HALF_DOLLAR;

    cout << "The number of quarters to be returned "
         << "is "<< change / QUARTER
         << endl;
        
    change %= QUARTER;

    cout << "The number of dimes to be returned "
         << "is "<< change / DIME
         << endl;

    change %= DIME;

    cout << "The number of nickles to be returned "
         << "is "<< change / NICKLE
         << endl;

    change %= NICKLE;

        cout << "The number of pennies to be returned "
         << "is "<< change
         << endl;

    return 0;
}
