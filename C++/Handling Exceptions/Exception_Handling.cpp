/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Exception Handling in C++
* AUTHOR: Kshitij Halder
* DATE:13/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the use of try, catch & throw.
****************************************************************/

#include <iostream>
using namespace std;

int main() {
    system("clear");
    try {
        throw 15;
    }
    catch (int exp) {
        cout << "Hey!!! An exception occurred, Exception number: " << exp << endl;
    }

    return 0;
}