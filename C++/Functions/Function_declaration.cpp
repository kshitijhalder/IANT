/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Function declaration
* AUTHOR: Kshitij Halder
* DATE:15/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the function definition and prototype.
****************************************************************/

#include <iostream>
using namespace std;

// declaring a function
int add_func(int , int );
int main()
{
    system("clear");
    int x, y, result;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    // calling the function
    result = add_func(x, y);
    cout << "Addition of " << x << " and " << y << " is " << result << endl;
    return 0;
}

// defining a function
int add_func(int m, int n)
{
    int add_val;
    add_val = m + n;
    // returning the value
    return add_val;
}