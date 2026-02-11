/***************************************************************
* FILENAME: Program_4.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Function Argument - Call by reference
* AUTHOR: Kshitij Halder
* DATE:15/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to swap to number by calling the function by reference.
****************************************************************/

#include <iostream>
using namespace std;

void swap(int &, int &); // function prototype
int main()
{
    system("clear");
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y); // function call
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}
void swap(int &a, int &b) // function definition
{
    int temp;
    temp = a; // store the value of a in temp
    a = b;    // assign the value of b to a
    b = temp; // assign the value of temp to b
}