/***************************************************************
* FILENAME: Program_7.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Function Types (Argument, With Return Value)
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {

    int x, y;
    x = a;
    y = b;
    return x + y;
}

int main() {

    int x, y;           // Function declaration

    system("clear");
    printf("Function with arguments and with return value \n");
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    int s = sum(x, y);          // Function call
    printf("The sum of numbers : %d\n", s);
    return 0;
}