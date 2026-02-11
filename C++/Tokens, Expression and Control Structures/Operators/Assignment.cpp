/***************************************************************
 * FILENAME: AssignmentOperators.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Hello World Program
 * AUTHOR: Kshitij Halder
 * DATE: 7/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: Assignment operators are used to assign values to variables.
 *              The assignment operators include =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=.
 *              The assignment operator = assigns the value on the right to the variable on the left.
 *              The other assignment operators perform an operation on the variable on the left and the value on the right.
 *              The result of the operation is assigned to the variable on the left.
 *              The assignment operators can be used with any data type.
 ****************************************************************/

#include <iostream>
using namespace std;

int main() {

    system("clear");
    int a = 10, b = 20;
    cout << " a += b: " << (a += b) << endl;        // a = a + b
    cout << " a -= b: " << (a -= b) << endl;        // a = a - b
    cout << " a *= b: " << (a *= b) << endl;        // a = a * b
    cout << " a /= b: " << (a /= b) << endl;        // a = a / b
    cout << " a %= b: " << (a %= b) << endl;        // a = a % b
    cout << " a <<= b: " << (a <<= b) << endl;      // a = a << b
    cout << " a >>= b: " << (a >>= b) << endl;      // a = a >> b
    cout << " a &= b: " << (a &= b) << endl;        // a = a & b
    cout << " a ^= b: " << (a ^= b) << endl;        // a = a ^ b
    cout << " a |= b: " << (a |= b) << endl;        // a = a | b
    cout << " a = b: " << (a = b) << endl;          // a = b

    return 0;
}