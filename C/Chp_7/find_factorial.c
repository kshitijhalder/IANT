/***************************************************************
* FILENAME: Program_4.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: For Loop Program
* AUTHOR: Kshitij Halder
* DATE: 28/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Find factorial of a number using for loop.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");
    printf("Find Factorial\n***********\n\n");
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = n; i >= 1; i--) {
            printf("fact = %d * %d\n",fact, i);
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
    return 0;
}