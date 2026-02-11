/***************************************************************
* FILENAME: Program_4.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Copy Constructor
* AUTHOR: Kshitij Halder
* DATE:1/5/2025
* MODIFICATION: "display()" to "void display()" in line 31
* CHANGES: Enhanced book syntax.
* DESCRIPTION: This program demonstrates the use of copy constructor.
****************************************************************/

#include <iostream>
using namespace std;

class Value {
    private:
        int a, b;
    public:
        Value(int a, int b) {
            this->a = a;
            this->b = b;
        }

        // Copy Constructor
        Value(const Value& v2) {
            this->a = v2.a;
            this->b = v2.b;
        }

        void display() {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
        }
};

int main() {
    system("clear");
    Value v1(50, 75);       // Parameterized Constructor called
    Value v2 = v1;          // Copy Constructor called
    v2.display();
    return 0;
}