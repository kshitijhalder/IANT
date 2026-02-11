/***************************************************************
* FILENAME: Task_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Switch Example
* AUTHOR: Kshitij Halder
* DATE: 8/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Enter a day and see if it is a working day or not.
****************************************************************/

#include <iostream>
using namespace std;

int main() {

    system("clear");
    char day;

    cout << "(1) Monday" << endl;
    cout << "(2) Tuesday" << endl;
    cout << "(3) Wednesday" << endl;
    cout << "(4) Thursday" << endl;
    cout << "(5) Friday" << endl;
    cout << "(6) Saturday" << endl;
    cout << "(7) Sunday" << endl << endl;
    cout << "Enter a day: ";
    cin >> day;

    switch (day) {

        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            cout << "It is a working day" << endl;
            break;
        case '6':
        case '7':
            cout << "It is a weekend" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }

    return 0;
}