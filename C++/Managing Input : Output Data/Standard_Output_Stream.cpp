/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Standard Output Stream
* AUTHOR: Kshitij Halder
* DATE:14/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: It refers to the destination stream that receives the output from the program.
*              It is written as: cout<<...;
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int a;

    cout << "Enter a number: ";              // Prompt
    cin >> a;
    cout << "Output is: " << a << endl;      // Output
    return 0;
}