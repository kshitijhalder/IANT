/***************************************************************
* FILENAME: Program_5.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Multilevel Inheritance
* AUTHOR: Kshitij Halder
* DATE:24/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates multilevel inheritance.
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

// sub class 1 derived from base class
class Hotel : public Building {
    public:
        Hotel() {
            cout << "I am in a hotel." << endl;
        }
};

// sub class 2 derived from sub class 1
class Room : public Hotel {
    public:
        Room() {
            cout << "I am in a hotel room." << endl;
        }
};

// main function
int main() {
    system("clear");
    cout << "Main function -\n" << endl;
    // object of sub class 2 invoke the constructor of base class, sub class 1 and sub class 2
    Room obj;
    return 0;
}