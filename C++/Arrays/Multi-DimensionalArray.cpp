/***************************************************************
 * FILENAME: Program_4.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Multi-Dimensional Array
 * AUTHOR: Kshitij Halder
 * DATE:17/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION:Multi-Dimensional Array is an array of arrays which is used to store data in a
 *             two-dimensional / three-dimensional form.
 *             The first index is the row index and the second index is the column index.
 *             The third index is the depth index.
 *             This program shows how to initialize the two-dimensional array using for loop.
 ****************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Declaration of a two-dimensional array
    system("clear");
    int arr[3][3];

    // Initializing the two-dimensional array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    // Displaying the two-dimensional array
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}