/***************************************************************
* FILENAME: SizeOf_Op.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: SizeOf Operator
* AUTHOR: Kshitij Halder
* DATE: 24/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    system("clear");
    printf("Size of a is %d\n", sizeof(a));
    printf("Size of a is %d\n", sizeof(int));
    printf("Size of a is %d\n", sizeof(float));
    printf("Size of a is %d\n", sizeof(double));
    printf("Size of a is %d\n", sizeof(char));
    return 0;
}