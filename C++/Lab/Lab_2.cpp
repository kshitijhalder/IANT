/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE:26/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates factorial of entered number using for loop.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");

    int num, fact = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is " << fact << endl;
    return 0;
}