/***************************************************************
 * FILENAME: Program_2.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Passing Array to a Function
 * AUTHOR: Kshitij Halder
 * DATE:15/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: - Passing the formal parameter in the form of a pointer
 *              - Passing the formal parameter in the form of an array with size
 *              - Passing the formal parameter in the form of an array without size
 ****************************************************************/

#include <iostream>
using namespace std;

void myArray(int arr[5]);

int main() {

    system("clear");
    int a1 [5] = {15, 25, 35, 45, 55};
    // here passing an array to a function
    myArray(a1);
    
    return 0;
}

void myArray(int arr[5]) {
    cout << "The array elements are: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}