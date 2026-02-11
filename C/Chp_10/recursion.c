/***************************************************************
* FILENAME: Program_8.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Recursion
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int factorial(int x) {
    if (x == 1 || x == 0) {
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}

int main() {

    int n, f;

    system("clear");
    printf("Recursion in C\n\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number = %d\n", n);
    f = factorial(n);           // Function call
    printf("\n\n The factorial of %d is %d\n", n, f);
    return 0;

}