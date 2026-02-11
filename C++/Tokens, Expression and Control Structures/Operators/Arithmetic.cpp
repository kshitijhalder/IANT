/***************************************************************
 * FILENAME: ArithmeticOperators.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Hello World Program
 * AUTHOR: Kshitij Halder
 * DATE: 7/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: Arithmetic operators are used to perform arithmetic operations on operands.
 *              Arithmetic operators include +, -, *, /, and %.
 ****************************************************************/

#include <iostream>
using namespace std;

int main () {

    system("clear");
    int a = 10, b = 20;
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl << endl;
    cout << "The sum of a and b is " << a + b << endl;
    cout << "The difference of a and b is " << a - b << endl;
    cout << "The product of a and b is " << a * b << endl;
    cout << "The quotient of a and b is " << a / b << endl;
    cout << "The remainder of a and b is " << a % b << endl;

    return 0;
}