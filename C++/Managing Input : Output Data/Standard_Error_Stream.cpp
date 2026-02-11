/***************************************************************
 * FILENAME: Program_3.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Standard Error Stream
 * AUTHOR: Kshitij Halder
 * DATE:14/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: IF you find any error in your program, it will be represented by using the built-in object named cerr.
 *              It is a instance of the ostream class.
 *              Cerr object is un-buffered and hence displays the output immediately.
 *              It is written as: cerr<<...;
 ****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int n;
    char mystr[] = "Sorry!!! Please use correct input...";

    cout << "Enter a number less than 10: ";
    cin >> n;
    if (n < 10)
    {
        cout << "Number is: " << n << endl;
    }
    else
    {
        cerr << "The error message is: " << mystr << endl;
    }

    return 0;
}