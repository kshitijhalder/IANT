/***************************************************************
* FILENAME: Program_1.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: String Declaration and Initialization
* AUTHOR: Kshitij Halder
* DATE: 11/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char s1 [4] = {'H', 'e', 'l', 'l'};     // declaring and initializing a strings
    char s2 [20] = "Computer";
    int i;
    system("clear");

    printf("First String [s1] = %s\n", s1);
    printf("Size of string [s1] = %d\n", sizeof(s1));     
    printf("Address of string = %u\n", s1);
    // Printing each character
    printf("\n Each character and it's address of S1");
    for (i = 0; i < 10; i++) {
        printf("\n Character[%d] of the string = %c and it's Address = %u", i, s1[i], &s1[i]);
    }

    printf("\n *************************");
    printf("\nSecond String [s2] = %s\n", s2);
    printf("Size of string [s2] = %d\n", sizeof(s2));
    printf("Address of string = %u\n", s2);
    return 0;
}