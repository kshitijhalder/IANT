/***************************************************************
* FILENAME: Program_11.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Dynamic Binding
* AUTHOR: Kshitij Halder
* DATE:25/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates dynamic binding without virtual functions.
****************************************************************/

#include <iostream>
using namespace std;

class MyFunction {
    public:
        void show() {
            cout << "This is the base class!!!" << endl;
        }
};

class MyFunction1 : public MyFunction {    // derived class
    public:
        void show() {
            cout << "This is the derived class!!!" << endl;
        }
};

int main() {
    system("clear");
    MyFunction funcobj;
    MyFunction1 funcobj1;
    MyFunction *func1ptr;
    func1ptr = &funcobj;
    func1ptr->show();       // calling base class function
    func1ptr = &funcobj1;
    func1ptr->show();       // calling derived class function

    return 0;
}

/* NOTE -
If you don't use virtual functions with dynamic binding, 
the compiler will perform static binding at compile time, 
meaning the function call will be resolved based on the 
type of the pointer or reference, not the actual object it points to
*/