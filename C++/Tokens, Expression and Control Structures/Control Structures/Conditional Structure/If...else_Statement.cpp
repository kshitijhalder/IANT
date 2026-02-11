/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: If...else Statement
* AUTHOR: Kshitij Halder
* DATE: 8/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: if (expression) {
*               statement;
*             } else {
*               statement;
*             }
****************************************************************/

#include <iostream>
using namespace std;

int main() {

    system("clear");
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    if (x > y) {
        cout << "x is greater than y";
    } else {
        cout << "y is less than x";
    }

    return 0;
}