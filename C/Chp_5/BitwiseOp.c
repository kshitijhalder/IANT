/***************************************************************
* FILENAME: BitwiseOperators.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Bitwise Operators
* AUTHOR: Kshitij Halder
* DATE: 24/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    /* Binary Basics
    
        NUMBERS IN BINARY                 BITWISE OPERATORS
        0 = 0000                          & = AND
        1 = 0001                          | = OR
        2 = 0010                          ^ = XOR
        3 = 0011                          ~ = NOT
        4 = 0100                          << = LEFT SHIFT
        5 = 0101                          >> = RIGHT SHIFT
        6 = 0110
        7 = 0111
        8 = 1000
        9 = 1001
        10 = 1010
        11 = 1011
        12 = 1100
        13 = 1101
        14 = 1110
        15 = 1111
    */
   
    int a = 5, b = 7, c = 32, d = 4;
    system("clear");

    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("a << 1 = %d\n", c << d);
    printf("a >> 1 = %d\n", c >> d);
    return 0;
}