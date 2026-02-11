/***************************************************************
* FILENAME: Program_5.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Declaration and Initialization of 2D array
* AUTHOR: Kshitij Halder
* DATE: 3/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j;
    int b [2] [3] = {{10, 20, 30}, {40, 50, 60}};      // 2D Array of size 2x3
    system("clear");

    printf("\nPrinting 2D array using loop\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Value of b[%d][%d]: %d\n", i, j, b[i][j]);
        }
    }
    return 0;
}
