/***************************************************************
* FILENAME: Program_3.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Single Inheritance
* AUTHOR: Kshitij Halder
* DATE:24/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates single inheritance.
****************************************************************/

#include <iostream>
using namespace std;

// base class definition
class Human {
    public:
        Human() {
            cout << "I am a human." << endl;
        }
};

// sub derived class from base class
class Male : public Human {
    
};

// main function
int main() {
    system("clear");
    cout << "Main function -" << endl;
    Male obj;
    return 0;
}