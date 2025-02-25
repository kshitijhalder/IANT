//
//  Chp 4
//  UNFORMATTED INPUT & OUTPUT FUNCTIONS
//  Program_5.c
//
//  Created by Kshitij Halder on 21/02/25.
//

#include <stdio.h>
#include <stdlib.h>

/* Reading a character from the keyboard using getchar() */

int main() {

    char ch, ch1, ch2;
    system("clear");
    printf("\n Enter a character: ");
    ch = getchar();             // reading a character from the keyboard
    printf("\n The character you entered is: %c\n", ch);
    printf("\n Enter 2nd characters: ");
    ch1 = getchar();            // reading a character from the keyboard
    printf("\n The character you entered is: %c\n", ch1);
    printf("\n Enter 3rd characters: ");
    ch2 = getchar();            // reading a character from the keyboard
    printf("\n The character you entered is: %c\n", ch2);
    return 0;
}
