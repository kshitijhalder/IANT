/***************************************************************
* FILENAME: Program_12.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Dynamic Binding with Virtual Functions
* AUTHOR: Kshitij Halder
* DATE:25/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates dynamic binding with virtual functions.
****************************************************************/

#include <iostream>
using namespace std;

class MyFunction {
    public:
        virtual void show() {
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