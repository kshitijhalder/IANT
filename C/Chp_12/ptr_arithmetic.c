/***************************************************************
* FILENAME: Program_3.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Pointer Arithmetic
* AUTHOR: Kshitij Halder
* DATE: 20/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, *p1, *p2, x, y, z;
    a = 10;
    b = 5;
    p1 = &a;
    p2 = &b;
    x = *p1 * *p2 - 6;
    y = 4 * - *p2 / *p1 + 10;
    system("clear");

    printf("Address of a = %u\n", p1);
    printf("Address of b = %u\n", p2);
    printf("\n");
    printf("a = %d, b = %d\n", a, b);
    printf("x = %d, y = %d\n", x, y);
    *p2 = *p2 + 3;
    *p1 = *p2 - 5;
    z = *p1 * *p2 - 6;
    printf("\n");
    printf("a = %d, b = %d,", a, b);
    printf(" x = %d\n", z);

    return 0;
}