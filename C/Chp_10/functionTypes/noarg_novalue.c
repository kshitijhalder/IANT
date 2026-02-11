/***************************************************************
* FILENAME: Program_4.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Function Types (No Argument, No Return Value)
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void sum() {

    int a = 120, b = 20;
    printf("The sum is : %d\n", a + b);
}

int main() {

    system("clear");
    printf("Function with no arguments and no return value \n");
    sum();
    return 0;
}