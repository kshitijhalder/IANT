/***************************************************************
* FILENAME: Program_1.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Pointing to a Location in Memory - Pointers
* AUTHOR: Kshitij Halder
* DATE: 20/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, a, b;               // Declaring integer pointer and variables
    system("clear");

    printf("Demo of Pointers in C\n");
    printf("_______________________\n\n");

    a = 10;                     // Assigning value to variable a
    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", &a); // Printing address of a
    printf("Address of pointer variable *p = %u\n", &(*p)); // Printing address of pointer variable p
    printf("_______________________\n\n");

    p = &a;                     // Assigning address of a to pointer p
    printf("Value of pointer variable *p = %u\n", *p); // Printing value of pointer variable p
    printf("Address of pointer variable *p = %u\n", &(*p)); // Printing address of pointer variable p
    printf("_______________________\n\n");

    b = *p;                     // Assigning value of a to variable b
    printf("Value of b = %d\n", b);
    
    return 0;
}