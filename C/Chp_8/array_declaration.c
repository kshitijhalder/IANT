/***************************************************************
* FILENAME: Program_1.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Array Declaration
* AUTHOR: Kshitij Halder
* DATE: 3/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[4];                           // Integer Array of size 4
    float f[5];                         // Float Array of size 5
    char c[10];                         // Character Array of size 10
    system("clear");

    printf("Memory size in computer");
    printf("\n**********************\n");
    printf("Size of integer array: %zu\n", sizeof(a));  // %zu used instead of %d 
    printf("Size of float array: %zu\n", sizeof(f));                 
    printf("Size of char array: %lu\n", sizeof(c));              

    return 0;
}