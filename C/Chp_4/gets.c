/***************************************************************
* FILENAME: Program_6.c
* TITLE: Unformatted Input Functions
* DESCRIPTION: gets() function - reading a string
* AUTHOR: Kshitij Halder
* DATE: 21/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
****************************************************************/

/* Reading a set of character "string" using gets() */

#include <stdio.h>
#include <stdlib.h>

int main() {

    char s[20];
    system("clear");
    printf("\n Enter a string: ");
    gets(s);            // reading a string from the keyboard
    printf("\n The string you entered is: %s", s);
    return 0;
}