/***************************************************************
* FILENAME: Program_4.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Array of Pointers
* AUTHOR: Kshitij Halder
* DATE:23/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the implementation of an array of pointers.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int var[3] = {5, 10, 15}; // declaring an array
    int *ptr[3];            // declaring an array of pointers
    int i;

    for (i = 0; i < 3; i++) {
        ptr[i] = &var[i]; // storing the address of var[i] in ptr[i]
    }

    for (i = 0; i < 3; i++) {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }

    return 0;
}