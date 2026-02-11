/***************************************************************
* FILENAME: Program_3.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Returning Array from a Function
* AUTHOR: Kshitij Halder
* DATE:15/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program returns an array from a function.
****************************************************************/

#include <iostream>
#include <time.h>
using namespace std;

int* func_random () {
    static int r [5];
    srand ( (unsigned)time( NULL ) );
    for (int i = 0; i < 5; i++) {
        r[i] = rand();
        cout << r[i] << "\n";
    }

    return r;
}

// main function to call the above defined function
int main() {

    system("clear");
    int *p = func_random();
    cout << "\nThe random numbers are: " << endl;
    for (int j = 0; j < 5; j++) {
        cout << "*(p + " << j << ") : ";
        cout << *(p + j) << endl;
    }
    cout << endl;
    return 0;
}