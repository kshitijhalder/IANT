/***************************************************************
* FILENAME: Program_2.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Array Initialization
* AUTHOR: Kshitij Halder
* DATE: 3/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, a[5] = {10, 20, 30, 40, 50};      // Integer Array of size 5
    system("clear");

    printf("\nPrinting array using loop\n");
    for (i = 0; i < 5; i++) {
        printf("Value of a[%d]: %d\n", i, a[i]);
    }
    printf("\nMemory address of array\n");
    for (i = 0; i < 5; i++) {
        printf("-------------> Address of a[%d]: %p\n", i, &a[i]);
    }
    return 0;
}