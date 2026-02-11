/***************************************************************
* FILENAME: Program_15.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Scope of Variables - External Storage Class
* AUTHOR: Kshitij Halder
* DATE: 18/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program uses the extern keyword to access global variables.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
int x = 100;        // Global variable

int main() {

    extern int y;   // Declaration of external variable
    system("clear");
    printf("\n Value of x = %d", x);
    printf("\n Value of y = %d", y);
    return 0;
}

int y = 500;        // Definition of external variable