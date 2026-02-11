/***************************************************************
 * FILENAME: Program_10.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Continue Statement
 * AUTHOR: Kshitij Halder
 * DATE:11/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: It is to skip over a part of code within a loop.
 *              In while or do-while loops, program jumps to test expression, and in for loop, it jumps to the next iteration.
 *              The break statement terminates the loop, while continue statement terminates the current iteration of the loop.
 ****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int a;
    for (a = 5; a > 0; a--)
    {
        if (a == 3)
        continue;
        cout << "Number is: " << a << '\n';
    }

    cout << "\nExiting the loop" << endl;
    return 0;
}