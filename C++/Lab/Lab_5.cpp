/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE:1/7/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates ...
****************************************************************/

#include <iostream>
using namespace std;
int num = 200;

int main() 
{
    system("clear");
    int num = 400;

    {
        int num = 500;
        cout << "Value of local num inside a block = " << num << endl;
    }
    cout << "Value of local num in main function = " << num << endl;
    cout << "Value of global num = " << ::num;
    return 0;
}