/***************************************************************
* FILENAME: Program_6.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Do While Loop
* AUTHOR: Kshitij Halder
* DATE:11/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: do {
*               statement;   
*             } while (condition);
****************************************************************/

#include <iostream>
using namespace std;

int main()
{

    system("clear");
    int a;
    cout << " Number of times to display Hello World: ";
    cin >> a;
    cout << "\n";
    do
    {
        cout <<"Hello World!" <<'\n';
        a--;
    }
    while(a>0);

    return 0;
}