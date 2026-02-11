/***************************************************************
* FILENAME: Program_2.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Do...While Loop
* AUTHOR: Kshitij Halder
* DATE: 28/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

/*
Syntax:
do {
    // code to be executed
    // Increment or Decrement
} while (condition);
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int j = 1;              // Initialization
    system("clear");
    printf("Do...While Loop\n***********\n\n");
    do {
        printf("\n j = %d", j);
        j++;                // Increment
    } while (j < 10);       // Condition
    return 0;
}

/* 
switch (op) {
            case '+':
                result = n1 + n2;
                break;
            case '-':
                result = n1 - n2;
                break;
            case '*':
                result = n1 * n2;
                break;
            case '/':
                result = n1 / n2;
                break;
            default:
                printf("Invalid operator\n");
        }
*/