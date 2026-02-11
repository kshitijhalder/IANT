/***************************************************************
* FILENAME: LogicalOperators.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Logical Operators
* AUTHOR: Kshitij Halder
* DATE: 7/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Logical operators are used to combine multiple 
*              conditions and return a boolean value.
*              The logical operators are &&, ||, and !.
*              Return 1 if the condition is true, and 0 if it is false.
****************************************************************/

#include <iostream>
using namespace std;

int main () {

    system("clear");
    
    int a = 5, b = 6;
    if (a >= 6 || b >= 6) {
        cout << "OR condition executed" << endl;
    }
    if (a >= 4 && b >= 4) {
        cout << "AND condition executed" << endl;
    }
    if ( !(a >= 6) ) {
        cout << "NOT condition executed" << endl;
    }

    return 0;
}