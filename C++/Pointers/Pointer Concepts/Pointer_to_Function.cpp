/***************************************************************
* FILENAME: Program_6.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Passing Pointers to Functions
* AUTHOR: Kshitij Halder
* DATE:23/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how pointer may be passed as an argument to a function.
****************************************************************/

#include <iostream>
using namespace std;

void swap_num(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
 {
    system("clear");
    int m = 60, n = 50;
    cout << "The values before swapping: " << endl;
    cout << "m = " << m << " n = " << n << endl;
    swap_num(&m, &n); 
    cout << "The values after swapping by using pass by pointer: " << endl;
    cout << "m = " << m << " n = " << n << endl;

    return 0;
}