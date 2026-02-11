/***************************************************************
* FILENAME: Program_10.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Passing Values to a Function (Call by Reference/ Address)
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int*y) {

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside swap function: x = %d, y = %d\n", *x, *y);

}

int main() {

    int x, y;

    system("clear");
    printf("Passing Values to a Function (Call by Reference/ Address) \n");
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: a = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}   