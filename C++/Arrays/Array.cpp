/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Accessing Array Elements
* AUTHOR: Kshitij Halder
* DATE:15/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints the elements of an array.
****************************************************************/

#include <iostream>
using namespace std;

int main() {

    system("clear");
    int n[5], result = 0;

    cout << "Enter 5 numbers: \n"; // Storing the numbers in the array
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
        result += n[i];           // Adding the numbers stored in the array
    }

    cout << "The sum of the numbers is: " << result << endl;
    return 0;
}