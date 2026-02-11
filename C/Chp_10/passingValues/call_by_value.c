/***************************************************************
* FILENAME: Program_9.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Passing Values to a Function (Call by Value)
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside swap function: x = %d, y = %d\n", x, y);
}

int main() {

    int a = 10, b = 20;

    system("clear");
    printf("Passing Values to a Function (Call by Value) \n");
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
// Compare this snippet from C/Chp_10/passingValues/call_by_reference.c:
// /***************************************************************
// * FILENAME: Program_10.c