/***************************************************************
* FILENAME: Program_3.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE: 8/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: switch (expression) {
*               case value:
*                   statement;
*                   break;
*               case value:
*                   statement;
*                   break;
*               default:
*                   statement;
*             }
****************************************************************/

#include <iostream>
using namespace std;

int main() {

    system("clear");
    int country;
    cout << "Enter a number between 1 and 6: ";
    cin >> country;

    switch (country) {

        case 1:
            cout << "Japan";
            break;
        case 2:
            cout << "Canada";
            break;
        case 3:
            cout << "India";
            break;
        case 4:
            cout << "China";
            break;
        case 5:
            cout << "Australia";
            break;
        case 6:
            cout << "France";
            break;
        default:
            cout << "Sorry...you have entered an invalid number!!!";
    }

    return 0;
}