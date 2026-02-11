/***************************************************************
* FILENAME: Program_2.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Pointer initialization and accessing value
* AUTHOR: Kshitij Halder
* DATE: 20/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p, i, j, k;
    system("clear");

    printf("Pointers");
    printf("_________\n\n");
    i = 25;
    p = &i;
    printf("Address of pointer variable *p after storing address of i = %u\n", &(*p));
    printf("_________\n\n");
    p = &j;
    printf("Address of pointer variable *p after storing address of j = %u\n", &(*p));
    printf("_________\n\n");
    p = &k;
    printf("Address of pointer variable *p after storing address of k = %u\n", &(*p));
    printf("_________\n\n");

    return 0;
}