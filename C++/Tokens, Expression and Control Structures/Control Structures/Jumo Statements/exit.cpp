/***************************************************************
* FILENAME: Program_11.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Exit Statement
* AUTHOR: Kshitij Halder
* DATE:11/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Built-in function that terminates the program itself.
*              A return code "0" exits the program without an error.
*              A return code "1" indicates unsuccessful termination.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int k;

    cout << "Enter the value of 0 or 1: ";
    cin >> k;

    switch (k)    
    {
        case 0:
            cout << "Value is 0" << endl;
            break;
        case 1:
            cout << "Value is 1" << endl;
            break;
        default:
            exit(0);
    }
        return 0;
}