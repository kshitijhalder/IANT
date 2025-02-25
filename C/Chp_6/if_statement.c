/***************************************************************
* FILENAME: Program_1.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    system("clear");
    printf("Enter a positive number greater than 0: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The number is positive.\n");
    }
    return 0;

}