/***************************************************************
* FILENAME: Program_2.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: String Declaration and Initialization
* AUTHOR: Kshitij Halder
* DATE: 11/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char s3 [50], s4 [30], res = 'Y';
    system("clear");

    while (res == 'Y' || res == 'y') {
        printf("Enter the first string: ");
        scanf("%s", s3);

        printf("The entered string is = %s\n***********\n", s3);
        printf("Do you want to continue? [Y/N]: ");
        scanf(" %c", &res);
    }
    return 0;
}