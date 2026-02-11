/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Accessing Public Data Members
* AUTHOR: Kshitij Halder
* DATE:18/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program how public data members can be declared and accessed in a class.
****************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        int emp_no;
        string emp_name;
};

int main() {
    
    system("clear");
    Employee emp_one;
    Employee emp_two;

    emp_one.emp_no = 10;
    emp_one.emp_name = "John";

    emp_two.emp_no = 20;
    emp_two.emp_name = "Mary";

    cout << "\nEmployee Name: " << emp_one.emp_name << "\tEmployee Number: " << emp_one.emp_no;
    cout << "\nEmployee Name: " << emp_two.emp_name << "\tEmployee Number: " << emp_two.emp_no;
    
    // Note: The order of details CAN change according to the order of declaration.
    return 0;
}