/***************************************************************
* FILENAME: Program_5.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Pointer to Pointer  { Double Pointer }
* AUTHOR: Kshitij Halder
* DATE:23/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to use a pointer to a pointer.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int myvar;
    int *myptr;
    int **mypptr;
    myvar = 5500; // declaring the variable
    myptr = &myvar; // storing the address in myvar to myptr
    mypptr = &myptr; // storing the address in myptr to mypptr

    //Display the value of using mypptr
    cout << "The value of myvar is: " << myvar << endl;
    cout << "The value available in myptr is: " << myptr << endl;
    cout << "The value available in mypptr is: " << mypptr << endl;
    cout << "The value available in *mypptr is: " << *mypptr << endl;
    cout << "The value available in **mypptr is: " << **mypptr << endl;

    return 0;
}