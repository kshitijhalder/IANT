/***************************************************************
* FILENAME: Program_16.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Scope of Variables - Static Storage Class
* AUTHOR: Kshitij Halder
* DATE: 18/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void function1() {

    static int d = 10;          
    // Static variable initialization

    d += 1;
    printf("\n d in function 1 = %d", d);
}

int main() {
    
    int i;
    system("clear");
    printf("\n Understanding the static variables \n");
    printf("\n ---------------------------------- \n");
    for (i = 0; i < 3; i++) {
        function1();
    }
    return 0;
}