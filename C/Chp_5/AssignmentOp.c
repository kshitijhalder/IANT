/***************************************************************
* FILENAME: AssignmentOperators.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Assignment Operators
* AUTHOR: Kshitij Halder
* DATE: 24/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;

    system("clear");
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
    a += 10;
    b -= 10;
    c *= 10;
    d /= 10;
    e %= 10;
    printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
    return 0;
}