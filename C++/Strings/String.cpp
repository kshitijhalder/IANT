/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: String Manipulation in C++
* AUTHOR: Kshitij Halder
* DATE:24/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to declare a string.
****************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("clear");
    char mystring[100];         // string declaration
    
    cout << "Enter a string of your choice: ";
    cin >> mystring;
    cout << "The entered string is: " << mystring << endl;
    return 0;
}

// Note: A space in the string will terminate the string input.