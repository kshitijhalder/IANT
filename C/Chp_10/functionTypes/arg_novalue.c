/***************************************************************
* FILENAME: Program_6.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Function Types (Argument, No Return Value)
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void sum(int a, int b) {

    int x, y;
    x = a;
    y = b;
    printf("The sum of numbers : %d\n", x + y);
}

int main() {

    int x, y;           // Function declaration

    system("clear");
    printf("Function with arguments and no return value \n");
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    sum(x, y);          // Function call
    return 0;
}
// Compare this snippet from C/Chp_10/functionTypes/arg_withvalue.c:
// /***************************************************************
// * FILENAME: Program_7.c