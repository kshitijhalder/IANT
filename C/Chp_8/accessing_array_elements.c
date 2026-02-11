/***************************************************************
* FILENAME: Program_3.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Accessing Array Elements
* AUTHOR: Kshitij Halder
* DATE: 3/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, n, a[5], m, p, j;
    system("clear");
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter numbers");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nPrinting array using loop\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d]: %d\n", i, a[i]);
    }

    printf("\n Accessing array elements\n");
    // Access first element
    m = a[0];
    printf("First element: %d\n", m);

    // Now accessing any desired element
    printf("Enter the index of the element you want to access: ");
    scanf("%d", &j);
    p = a[j];
    printf("Element at index %d: %d\n", j, p);

    /* Using Header files */
    printf("\nAccessing header files\n");
    printf("Size of int: %lu\n", sizeof(int));
    return 0;
}