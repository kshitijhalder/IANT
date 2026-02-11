/***************************************************************
* FILENAME: Program_5.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE: 8/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: while (condition) {
*               statement;
*             }
****************************************************************/

#include <iostream>
using namespace std;
int main()
{
    system("clear");
    int a;
    cout << "Enter a number > : ";
    cin >> a;
    while(a>0)
    {
        cout <<"Decremented value is:"<< a <<'\n';
        a--;
    }
    cout << "End of the program" <<'\n';

    return 0;
}