/***************************************************************
 * FILENAME: Program_5.c
 * LANGUAGE: C
 * COMPILER: MSVC
 * TITLE: Pointer and Character Array
 * AUTHOR: Kshitij Halder
 * DATE: 20/3/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: This program prints a message to the screen.
 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char ch[] = "Computer", ch1[] = {'a', 'e', 'i', 'o', 'u'}, *cp1, *cp2;
    int i;

    system("clear");
    printf("Pointer and Character Array");
    printf("\n___________________________\n\n");
    cp1 = ch;
    printf("Printing values of ch[] using pointer\n");
    for (i = 0; i < strlen(ch); i++)
    {
        printf("Address = %u\t", cp1);   // Printing address of array elements
        printf("a[%d] = %c\n", i, *cp1); // Printing array elements
        cp1++;                           // Incrementing pointer
    }
    cp2 = &ch1[0];
    printf("\n___________________________\n\n");
    printf("Printing values of ch1[] using pointer\n");
    for (i = 0; i < 5; i++)
    {
        printf("Address = %u\t", cp2);   // Printing address of array elements
        printf("a[%d] = %c\n", i, *cp2); // Printing array elements
        cp2++;                           // Incrementing pointer
    }

    return 0;
}