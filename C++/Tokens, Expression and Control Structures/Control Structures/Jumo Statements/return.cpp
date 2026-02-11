/***************************************************************
* FILENAME: Program_7.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Return Statement
* AUTHOR: Kshitij Halder
* DATE:11/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: It stops the execution of a function and may return a value to the calling function.
*              Generally, non-void functions return a value.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int a = 100;
    int b = 20;
    int c = max(a, b);
    cout << "Highest number is: " << c << endl;

    return 0;
}

int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}