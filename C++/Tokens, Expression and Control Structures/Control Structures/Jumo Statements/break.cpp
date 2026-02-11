/***************************************************************
* FILENAME: Program_9.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Break Statement
* AUTHOR: Kshitij Halder
* DATE:11/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: The break statement exits from a switch or loop immediately and jumps to the first statement that follows the loop or switch.
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int a;

    for (a = 0; a < 5; a++)
    {
        cout << "Counter value is: " << a << '\n';
        if (a == 3)
        {
            break;
        }   
    }
    cout << "\nBreak statement is used to exit a loop immediately when a certain condition is met.";
    
    return 0;
}