/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Catch Exceptions in C++
* AUTHOR: Kshitij Halder
* DATE:13/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to catch exceptions.
****************************************************************/

#include <iostream>
using namespace std;

int main() {
    system("clear");
    int x, y, z;
    float p;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;
    try {
        if ((x - y) != 0) {
            p = z / (x - y);
            cout << "Result is: " << p << endl;
        } else {
            throw (x - y);
        }
    }
    catch (int u) {
        cout << "Result is infinite because x - y = " << u;
    }
    return 0;
}