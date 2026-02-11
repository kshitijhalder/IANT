/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE:1/7/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates ...
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int i, j, n, temp;
    int x[10];

    cout << "Enter 10 elements of the array : " << endl;
    for (i = 0; i < 10; i++) {
        cin >> x[i];
    }
    
    // Sort array
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (x[i] > x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    cout << "The array in sorted order :" << endl;
    for (i = 0; i < 10; i++) {
        cout << x[i] << " ";
    }

    return 0;

}