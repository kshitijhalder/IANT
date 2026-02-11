/***************************************************************
* FILENAME: Program_12.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Passing Strings to a Function
* AUTHOR: Kshitij Halder
* DATE: 17/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strrev(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

void fun2(char s[]) {

    printf("\n String = %s", s);            // Printing string within function definition
    printf("\n Reverse of the string = %s", strrev(s));
}

int main() {

    char ch[50] = "C is a programming language";
    system("clear");
    printf("Passing Strings to a Function \n");
    fun2(ch);                                // Passing string to function
    return 0;
}