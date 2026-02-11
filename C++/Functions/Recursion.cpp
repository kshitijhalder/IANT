/***************************************************************
* FILENAME: Program_6.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Recursion
* AUTHOR: Kshitij Halder
* DATE:15/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates recursion.
****************************************************************/
#include <iostream>
using namespace std;

void rec_func(int x)
{
    if (x == 0)
        return;
    else
    {
        cout << x << endl;
        rec_func(--x);      // --x represents the decrement of x by 1
        return;
    }
}

int main()
{
    system("clear");
    int x = 5;
    rec_func(x);           // function call
    cout << endl;
    return 0;
}