/***************************************************************
* FILENAME: Program_7.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Return Pointer from Function
* AUTHOR: Kshitij Halder
* DATE:23/5/2025
* MODIFICATION: added static keyword at line 18 and 25.
* CHANGES: Changed book syntax.
* DESCRIPTION: This program demonstrates how to calculate weekly salary while demonstrating how to return a pointer from a variable.
****************************************************************/

#include <iostream>
using namespace std;

int & WeeklyHoursFunc()
{
    static int h = 40;     // declaring the variable
    int &hours = h; // reference variable
    return hours;   // returning reference variable
}

int * SalaryFunc()
{
    static int salary = 25;      // declaring the variable
    int *HourlySalary = &salary; // pointer variable
    return HourlySalary;         // returning pointer variable
}

int main()
{
    int hours = WeeklyHoursFunc(); 
    int salary = *SalaryFunc();

    cout << "Weekly Hours: " << hours << endl;
    cout << "Hourly Salary: " << salary << endl;
    int WeeklySalary = hours * salary;
    cout << "Weekly Salary: " << WeeklySalary << endl;

    return 0;
}
/*
If you do not use static, the variables h and salary are local to the function and their memory is released
when the function ends. Returning a reference or pointer to such local variables leads to undefined behavior 
because the memory they occupy may be reused or overwritten, causing your program to crash or produce incorrect results.

- Non-static local variables: Destroyed after function returns; references/pointers become invalid (dangling).
- Static local variables: Persist for the lifetime of the program; references/pointers remain valid.

Using static ensures the returned reference or pointer is always valid.
*/