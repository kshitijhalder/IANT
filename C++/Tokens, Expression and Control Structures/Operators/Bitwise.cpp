/***************************************************************
 * FILENAME: BitwiseOperators.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Hello World Program
 * AUTHOR: Kshitij Halder
 * DATE: 7/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: Bitwise Operators are used to perform bitwise operations on operands.
 *              Bitwise operators include &, |, ^, ~, <<, and >>.
 *              The bitwise operators perform operations on the individual bits of the operands.
 *              The result of the operation is a new value with the same number of bits as the operands.
 *              The bitwise operators can be used with any data type.
 *              The bitwise operators are also known as bit operations.
 ****************************************************************/

#include <iostream>
using namespace std;

int main () {

    system("clear");
    
    int a = 10, b = 20;
    cout << "Bit value of a: " << (int)a << endl;
    cout << "Bit value of b: " << (int)b << endl << endl;
    cout << "Bitwise AND Operator (a & b): " << (a & b) << endl;
    cout << "Bitwise OR Operator (a | b): " << (a | b) << endl;
    cout << "Bitwise XOR Operator (a ^ b): " << (a ^ b) << endl;
    cout << "Bitwise NOT Operator (~a): " << (~a) << endl;
    cout << "Bitwise LEFT SHIFT Operator (a << 1): " << (a << 1) << endl;
    cout << "Bitwise RIGHT SHIFT Operator (a >> 1): " << (a >> 1) << endl << endl;

    cout << "Bit Representation of a: " << bitset<8>(a) << endl;
    cout << "Bit Representation of b: " << bitset<8>(b) << endl;
    cout << "Bitwise AND Operator (a & b): " << bitset<8>(a & b) << endl;
    cout << "Bitwise OR Operator (a | b): " << bitset<8>(a | b) << endl;
    cout << "Bitwise XOR Operator (a ^ b): " << bitset<8>(a ^ b) << endl;
    cout << "Bitwise NOT Operator (~a): " << bitset<8>(~a) << endl;
    cout << "Bitwise LEFT SHIFT Operator (a << 1): " << bitset<8>(a << 1) << endl;
    cout << "Bitwise RIGHT SHIFT Operator (a >> 1): " << bitset<8>(a >> 1) << endl;

    return 0;

}