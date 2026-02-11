/***************************************************************
* FILENAME: Program_3.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Function Argument - Call by value
* AUTHOR: Kshitij Halder
* DATE:15/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to call a function by value.
****************************************************************/

#include <iostream>
using namespace std;
int add_func(int no);

int main()
{
    system("clear");
    int num, res;
    num = 5;
    cout << "The initial value of the number is: " << num << endl;
    res = add_func(num);
    cout << "The final value of the number is: " << num << endl;
    cout << "The total value is: " << res << endl;
    return 0;
}

int add_func(int num)
{
    num = num + 150;
    return num;
}