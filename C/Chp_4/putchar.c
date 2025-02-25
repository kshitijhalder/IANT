/***************************************************************
* FILENAME: Program_7.c
* TITLE: Unformatted Output Functions
* DESCRIPTION: putchar() function - writing a character.
* AUTHOR: Kshitij Halder
* DATE: 21/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
****************************************************************/

/* Writing a character to the screen using putchar() */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = 'A', ch1 = 'B', ch2;
    system("clear");
    printf("First character: ");
    putchar(ch);            // writing a character to the screen
    printf("\nSecond character: ");
    putchar(ch1);          // writing a character to the screen
    printf("\nEnter a character: ");
    ch2 = getchar();      // reading a character from the keyboard
    printf("Third character entered: ");
    putchar(ch2);        // writing a character to the screen
    printf("\n");
    return 0;
}