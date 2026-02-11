/***************************************************************
* FILENAME: Program_1.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: While Loop
* AUTHOR: Kshitij Halder
* DATE: 28/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

/*
Syntax:
while (condition) {
    // code to be executed
    // Increment or Decrement
}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;              // Initialization
    system("clear");
    printf("While Loop\n***********\n\n");
    while (i < 10) {        // Condition
        printf("\n i = %d", i);
        i++;                // Increment
    }
    return 0;
}
