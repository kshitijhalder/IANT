/***************************************************************
* FILENAME: ConditionalOperators.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Conditional Operators (Ternary Operators)
* AUTHOR: Kshitij Halder
* DATE: 24/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    system("clear");
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    c = (a > b) ? a : b;
    printf("The greater number is %d\n", c);
    return 0;
}