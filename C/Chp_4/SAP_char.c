//
//  Chp 4
//  FORMATTED INPUT & OUTPUT FUNCTIONS
//  Program_4.c
//
//  Created by Kshitij Halder on 21/02/25.
//

#include <stdio.h>
#include <stdlib.h>

/* Using scanf() and printf() functions for characters */

int main()
{
    char ch1, ch2;
    system("clear");
    printf("Reading and Writing characters\n");
    printf("Enter two characters: ");
    scanf("%c %c", &ch1, &ch2);              // reading two characters from the keyboard
    printf("The characters are: %c and %c", ch1, ch2);
    return 0;
}