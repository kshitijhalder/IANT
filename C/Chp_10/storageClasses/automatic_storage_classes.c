/***************************************************************
* FILENAME: Program_13.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Scope of Variables - Automatic Storage Class
* AUTHOR: Kshitij Halder
* DATE: 18/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void function1() {

    int a = 10;         // Local / Automatic variable
    printf("\n a in function 1 = %d", a);
}

void function2() {

    int a = 20;         // Local / Automatic variable
    printf("\n a in function 2 = %d", a);
}

int main() {

    int a = 30;         // Local / Automatic variable
    
    system("clear");
    printf("\n Understanding the automatic variables ");
    printf("\n a in main function = %d", a);
    function1();
    function2();
    return 0;
}