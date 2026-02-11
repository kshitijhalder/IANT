/***************************************************************
 * FILENAME: Program_2.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Accessing Private Data Members
 * AUTHOR: Kshitij Halder
 * DATE:18/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: This program shows how to access private data members.
 ****************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        int emp_no;
        string emp_name;

    public:
        void setEmp_name(string s) {
            emp_name = s;
        }
        void setEmp_no(int no) {
            emp_no = no;
        }
        void emp_details() {
            cout << "Employee Number: " << emp_no << endl;
            cout << "Employee Name: " << emp_name << endl;
        }
};

int main() {
    system("clear");
    Employee emp;

    emp.setEmp_name("John");
    emp.setEmp_no(10);

    emp.emp_details();  // Note: The order of details does NOT change in private members.
    return 0;
}
