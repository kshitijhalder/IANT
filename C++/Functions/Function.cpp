/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Function
* AUTHOR: Kshitij Halder
* DATE:15/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates multiplication of two numbers.
****************************************************************/

#include <iostream>
using namespace std;

int mul_func(int x, int y)
{
    int z;
    z = x * y;
    return z;
}

int main()
{
    system("clear");
    int res;
    res = mul_func(10, 20);
    cout << "The result of two multiplication is: " << res << endl;
    return 0;
}