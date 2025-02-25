/***************************************************************
* FILENAME: Program_2.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Check whether a character is a vowel or not.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char ch;
    system("clear");
    printf("Checking vowels using if statement\n");
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\n*****************************\n");
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character %c is a vowel\n", ch);
    }
    return 0;
}   