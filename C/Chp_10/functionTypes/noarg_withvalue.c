/***************************************************************
* FILENAME: Program_5.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Function Types (No Argument, With Return Value)
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int sum() {

    int a = 120, b = 20;
    return a + b;
}

int main() {

    system("clear");
    printf("Function with no arguments and with return value \n");
    int s = sum();
    printf("The sum is : %d\n", s);
    return 0;
}
// Compare this snippet from C/Chp_10/functionTypes/arg_novalue.c:
// /***************************************************************
// * FILENAME: Program_6.c