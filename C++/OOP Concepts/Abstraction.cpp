/***************************************************************
 * FILENAME: Program_1.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Abstraction in OOP
 * AUTHOR: Kshitij Halder
 * DATE:21/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: This program shows how to use abstraction in OOP.
 ****************************************************************/

#include <iostream>
using namespace std;

class Result {
    private:
        int a, b, c;
    public:
        void multiply() {
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            c = a * b;
            cout << "Result: " << c << endl;
        }
    };

int main() {
    system("clear");
    Result mul;
    mul.multiply();
    return 0;
}