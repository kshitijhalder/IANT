/***************************************************************
* FILENAME: RelationalOperators.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Relational Operators
* AUTHOR: Kshitij Halder
* DATE: 7/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Relational operators are used to compare two values.
*              They return 0 when the values are equal, and 1 when 
*              they are not equal.
****************************************************************/

#include <iostream>
using namespace std;

int main () {

    system("clear");
    
    int a = 10, b = 20;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;

    return 0;
}