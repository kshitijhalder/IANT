/***************************************************************
* FILENAME: Program_5.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Two-Dimensional Array
* AUTHOR: Kshitij Halder
* DATE:17/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program shows how to initialize select elements of a two-dimensional array.
****************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Declaration of a two-dimensional array
    system("clear");
    int arr[3][3];

    // Initializing the two-dimensional array
    arr[0][0] = 5;
    arr[0][1] = 10;
    arr[1][1] = 15;
    arr[1][2] = 20;
    arr[2][0] = 30;
    arr[2][2] = 10;
    
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