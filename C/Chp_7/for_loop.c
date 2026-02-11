/***************************************************************
* FILENAME: Program_3.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: For Loop Program
* AUTHOR: Kshitij Halder
* DATE: 28/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

/*
Syntax:
for (initialization; condition; increment/decrement) {
    // code to be executed
}
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    printf("For Loop\n***********\n\n");
    for (int k = 1; k < 10; k++) {
        printf("\n k = %d", k);
    }
    return 0;
}