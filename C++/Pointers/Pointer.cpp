/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE:22/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the usage of pointers in C++.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int myvar = 20;     // declaring the variable
    int  *iptr;        // declaring the pointer variable
    iptr = &myvar;     // storing the address in myvar to 
    
    cout << "The value of myvar is: " << myvar << endl;
    // printing the address stored in iptr
    cout << "The address of myvar is: " << iptr << endl;
    // accessing the value at the address available in iptr
    cout << "The value at the address available in iptr is: " << *iptr << endl;
    
    return 0;
}