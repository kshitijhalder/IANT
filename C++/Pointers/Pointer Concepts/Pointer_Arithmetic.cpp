/***************************************************************
* FILENAME: Program_3.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Pointer Arithmetics
* AUTHOR: Kshitij Halder
* DATE:23/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the use of pointer arithmetic.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int myarr[5] = {7, 8, 9, 10, 11}; // declaring an array
    int *ptr = &myarr[0];                // declaring a pointer

    for (int i = 0; i < 5; i++) {
        cout << "Printing address saved in ptr: ["<<i<<"] " << i;
        cout << &myarr[i] << endl;
    }
    cout << "\nptr holds the address : " << ptr << endl;
    cout << "++ptr holds the address : " << ++ptr << endl;      // incrementing the pointer
    cout << "--ptr holds the address : " << --ptr << endl;      // decrementing the pointer
    cout << "ptr + 1 holds the address : " << ptr + 1 << endl;  // Pointer addition
    cout << "ptr + 2 holds the address : " << ptr + 2 << endl;  // Pointer addition
    cout << "ptr + 3 holds the address : " << ptr + 3 << endl;  // Pointer addition
    cout << "Substracting two pointers (ptr + 3) - (ptr + 1) : " << (ptr + 3) - (ptr + 1) << endl;  // Pointer subtraction

    return 0;
}