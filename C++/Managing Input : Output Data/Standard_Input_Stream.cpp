/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Standard Input Stream
* AUTHOR: Kshitij Halder
* DATE:14/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: It refers to the source stream that provides data to the program.
*              It is written as: cin>>...;
****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int a, b, c;

    cout << "Enter three numbers: " << endl; // Prompt
    cin >> a >> b >> c;
    cout << "Sum is: " << a + b + c << endl; // Output

    return 0;
}