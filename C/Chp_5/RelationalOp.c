/***************************************************************
* FILENAME: RelationalOperators.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Relational Operators
* AUTHOR: Kshitij Halder
* DATE: 24/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the use of relational operators.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = 20;
    system("clear");
    printf("a = %d, b = %d\n", a, b);
    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    return 0;
}