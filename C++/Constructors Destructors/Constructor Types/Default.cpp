/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Default Constructor
* AUTHOR: Kshitij Halder
* DATE:29/4/2025
* MODIFICATION: Changed "result()" to "void result()" in line 26
* CHANGES: Enhanced book syntax.
* DESCRIPTION: This program demonstrates the functionality of default constructor.
****************************************************************/

#include <iostream>
using namespace std;

class Points {
    public:
        int singing;
        int dancing;
         // specifying default constructor
        Points() {
            singing = 0;
            dancing = 1;
        }
         // member function
        void result() {
            cout << "Singing: " << singing << endl;
            cout << "Dancing: " << dancing << endl;
        }
};

int main() {
    system("clear");
    Points p;
    p.result();

    return 0;
}