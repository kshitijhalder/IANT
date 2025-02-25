/***************************************************************
* FILENAME: Program_8.c                     [Named as Program 7]
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Nested Conditional Operator
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Find the largest of three numbers using nested conditional operator.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    system("clear");

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nConditional Operator\n");

    (a > b && a > c) ? printf("%d is the greatest number.\n", a) 
    : (b > c) ? printf("%d is the greatest number.\n", b) 
    : printf("%d is the greatest number.\n", c);    

    return 0;
}