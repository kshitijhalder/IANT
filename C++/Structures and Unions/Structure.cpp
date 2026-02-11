/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Structure
* AUTHOR: Kshitij Halder
* DATE:19/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to get and display information of an employee.
****************************************************************/

#include <iostream>
using namespace std;

struct Employee
{
    char emp_name[20];
    int emp_age;
    float emp_salary;
};
int main()
{
    system("clear");
    Employee emp1;
    cout << "Enter employee name: ";
    cin >> emp1.emp_name;
    //cin.get( emp1.emp_name, 50);
    cout << "Enter employee age: ";
    cin >> emp1.emp_age;
    cout << "Enter employee salary: ";
    cin >> emp1.emp_salary;

    cout << "\nThe details of the employee are: ";
    cout << "\nEmployee Name: " << emp1.emp_name;
    cout << "\nEmployee Age: " << emp1.emp_age;
    cout << "\nEmployee Salary: " << emp1.emp_salary;

    return 0;
}
