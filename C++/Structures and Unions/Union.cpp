/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE:  Union
* AUTHOR: Kshitij Halder
* DATE:19/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to access members of a union.
****************************************************************/

#include <iostream>
using namespace std;

union Student
{
    int stud_rnum;
    char stud_name[30];
    int stud_avgmrks;
};

int main()
{
    system("clear");
    Student st;

    cout << "Enter student roll number: ";
    cin >> st.stud_rnum;
    cout << "The student roll number is: " << st.stud_rnum << endl;
    
    cout << "\nEnter student name: ";
    cin >> st.stud_name;
    cout << "The student name is: " << st.stud_name << endl;

    cout << "\nEnter student average marks: ";
    cin >> st.stud_avgmrks;
    cout << "The student average marks is: " << st.stud_avgmrks << endl;
    
    cout << "\nThe final value available in the union " << endl;
    cout << "Student's roll number is: " << st.stud_rnum << endl;
    cout << "Student's name is: " << st.stud_name << endl;
    cout << "Student's average marks is: " << st.stud_avgmrks << endl;
    return 0;
}

/*
(stud_avgmrks) will have a valid value.
The other members (stud_rnum and stud_name) will show garbage or unexpected values because their data has been overwritten.
*/