/***************************************************************
 * FILENAME: Program_4.c
 * LANGUAGE: C
 * COMPILER: MSVC
 * TITLE: Pointer and Array
 * AUTHOR: Kshitij Halder
 * DATE: 20/3/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: This program prints a message to the screen.
 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[] = {10, 20, 30, 40, 50};
    int *p, i;
    system("clear");

    printf("Pointer and Array");
    printf("\n\n");
    printf("Base address of array a = %p\n", (void *)a);
    p = &a[0]; // OR p = a; Storing base address
    printf("_________________\n\n");
    printf("\nPrinting values of array using pointer\n");

    for (i = 0; i < 5; i++)
    {
        /*
        printf("a[i] = %d\n", a[i]);
        printf("%d\n", i[a]);
        printf("%d\n", *(a + i));           // All these lines are valid
        printf("%d\n", *(p + i));
        printf("%d\n", p[i]);
        */
        printf("Address= %u\t", i, p); // Printing address of array elements
        printf("a[%d] = %d\n", i, *p); // Printing array elements
        p++;                           // Incrementing pointer
    }

    return 0;
}
