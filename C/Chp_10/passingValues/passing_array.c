/***************************************************************
* FILENAME: Program_11.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Passing Arrays to a Function
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void fun1(int x[]) {

    int i;
    printf("\nArray values ");
    // Reading array within function definition
    for (i = 0; i < 5; i++) {
        printf("\n x[%d] = %d ", i, x[i]);
    }
}

int main() {

    int x[5] = { 10, 20, 30, 40, 50 };
    system("clear");
    printf("Passing Array to a Function \n");
    fun1(x); // Passing array to function
    return 0;
}