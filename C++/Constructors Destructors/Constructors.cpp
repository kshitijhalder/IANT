/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Constructors
* AUTHOR: Kshitij Halder
* DATE:29/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to add two numbers using constructor.
****************************************************************/

#include <iostream>
using namespace std;

class add_func {
    int x, y, z;
    public:
        add_func() {
            x = 20;
            y = 30;
            z = x + y;
            cout << "The sum of " << x << " and " << y << " is " << z << endl;
        }
};

int main() {
    system("clear");
    add_func obj;

    return 0;
}