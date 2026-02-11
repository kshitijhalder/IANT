/***************************************************************
* FILENAME: Program_4.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Multiple Inheritance
* AUTHOR: Kshitij Halder
* DATE:24/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates multiple inheritance.
****************************************************************/

#include <iostream>
using namespace std;

// base class 1 definition
class Building {
    public:
        Building() {
            cout << "I am in a building." << endl;
        }
};

// base class 2 definition
class Hotel {
    public:
        Hotel() {
            cout << "I am in a hotel." << endl;
        }
};

// sub derived class from two base classes
class Room : public Building, public Hotel {
    
};

// main function
int main() {
    system("clear");
    cout << "Main function -" << endl;
    Room obj;
    return 0;
}