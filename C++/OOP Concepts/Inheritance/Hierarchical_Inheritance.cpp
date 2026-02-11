/***************************************************************
* FILENAME: Program_6.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hierarchical Inheritance
* AUTHOR: Kshitij Halder
* DATE:24/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates hierarchical inheritance.
****************************************************************/

#include <iostream>
using namespace std;

// base class
class Building {
    public:
        Building() {
            cout << "I am in a building." << endl;
        }
};

// first sub class
class Resort : public Building {
    public:
        Resort() {

        }
};

// second sub class
class Hotel : public Building {
    public:
        Hotel() {

        }
};

// main function
int main() {
    system("clear");
    cout << "Main function -\n" << endl;
    Resort obj;
    Hotel obj1;
    return 0;
}