//Author: Shaurya Chadha
//
//Date: 11/22/2024
//
//Antonation: CPP Program to demonstrate the Logical Operators
#include <iostream>
using namespace std;

int main()
{
    int a = 6, b = 4;
    bool IsAFact;
    
    std::cout << "Note: 1 represents true/on, 0 represents false/off.\n"
    // Logical AND operator
    if ((a && b) == true) { // Both a and b are non-zero, so this evaluates to true
        IsAFact = true; // Use assignment, not equality operator (==)
        std::cout << "Logical AND (a && b): " << IsAFact << endl;
    } else {
        IsAFact = false; // Fix: Initialize IsAFact to false in the else block
        std::cout << "Logical AND (a && b): " << IsAFact << endl;
    }

    // Logical OR operator
    cout << "Logical OR (a || b): " << (a || b) << endl;

    // Logical NOT operator
    cout << "Logical NOT (!b): " << (!b) << endl; //inverter 

    return 0;
}
