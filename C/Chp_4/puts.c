/***************************************************************
* FILENAME: Program_8.c
* TITLE: Unformatted Output Functions
* DESCRIPTION: puts() Function - Writing a String.
* AUTHOR: Kshitij Halder
* DATE: 23/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
****************************************************************/

/* Reading and writing a set of character "string" using
gets() and puts() functions. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[] = "Computer", s1[20];
    system("clear");
    printf("The string is: ");
    puts(s);
    printf("Enter a string: ");
    gets(s1);
    puts("The string is: ");
    puts(s1);
    return 0;
}