/***************************************************************
* FILENAME: Program_8.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Loop Control Statements
* AUTHOR: Kshitij Halder
* DATE: 28/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 100;
    system("clear");

LOOP:   do {
        if (a == 105) {
            a += 1;
            goto LOOP;
        }
        printf("Value of a: %d\n", a);
        a++;
    } while (a < 110);
    return 0;
}