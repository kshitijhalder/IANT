/***************************************************************
* FILENAME: Program_5.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: else...if Ladder Statement
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Find out greatest number among the three numbers.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    system("clear");

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d is the greatest number.\n", a);
    }
    else if (b > c) {
        printf("%d is the greatest number.\n", b);                // else-if ladder
    }
    else {
        printf("%d is the greatest number.\n", c);
    }
    return 0;
}