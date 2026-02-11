/***************************************************************
* FILENAME: Program_17.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Scope of Variables - Register Storage Class
* AUTHOR: Kshitij Halder
* DATE: 18/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    register int n = 100, s;
    int x = 10, y = 20;

    system("clear");
    printf("\n Value of register variable [n] = %d", n);
                            // printing register variable
    printf("\n X = %d \t Y = %d", x, y);
    s = x + y;
    printf("____________________\n");
    printf("\n Storing sum of two numbers in register = %d", s);
    return 0;
}