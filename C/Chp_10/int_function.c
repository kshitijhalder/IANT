/***************************************************************
* FILENAME: Program_2.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Function
* AUTHOR: Kshitij Halder
* DATE: 12/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {                         // Function definition
    return a + b;
}

int main() {

    int a = 120, b = 20;
    system("clear");
    printf("The sum is : %d\n", sum(a, b));    // Function call
    return 0;
}