/***************************************************************
* FILENAME: Program_3.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Operations on Strings
* AUTHOR: Kshitij Halder
* DATE: 11/3/2025
* MODIFICATION: [Not yet completed]
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Include ctype.h for tolower and toupper functions

// Custom implementation of strlwr
char* strlwr(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

// Custom implementation of strupr
char* strupr(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

// Custom implementation of strrev
char* strrev(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

int main() {
    char s3[50], s4[30], res = 'Y';
    system("clear");

    while (res == 'Y' || res == 'y') {
        // Prompt user for input string s3
        printf("\nEnter string [s3]: ");
        scanf("%49s", s3); // Prevent buffer overflow

        printf("The entered string is: %s\n\n", s3);
        
        // Length of the string
        printf("Length of the string: %lu\n", strlen(s3)); // Example: For input "Hello", output: 5

        // First occurrence of a character in a string
        char *char_pos = strchr(s3, 'i');
        if (char_pos != NULL) {
            printf("Find character in the string: %c\n", *char_pos); // Example: For input "Hi", output: 'i'
        } else {
            printf("Character 'i' not found in the string.\n");
        }

        // First occurrence of a substring within another string
        char *sub_pos = strstr(s3, "s");
        if (sub_pos != NULL) {
            printf("First occurrence of a substring within another string: %s\n", sub_pos); // Example: For input "strings", output: "strings"
        } else {
            printf("Substring 's' not found in the string.\n");
        }

        // Lowercase conversion
        char s3_lower[50], s3_upper[50];
        strcpy(s3_lower, s3);
        strcpy(s3_upper, s3);
        
        printf("Lowercase of the string: %s\n", strlwr(s3_lower)); // Example: For input "Hello", output: "hello"

        // Uppercase conversion
        printf("Uppercase of the string: %s\n", strupr(s3_upper)); // Example: For input "Hello", output: "HELLO"

        // Prompt user for input string s4
        printf("Enter string [s4]: ");
        scanf("%29s", s4); // Prevent buffer overflow

        printf("\n\nThe string [s3]: %s\n", s3);
        printf("The string [s4]: %s\n\n", s4);

        // Concatenation of the strings
        char s3_concat[100];
        strcpy(s3_concat, s3);
        printf("Concatenation of the strings: %s\n", strcat(s3_concat, s4)); // Example: For s3="Hello" and s4="World", output: "HelloWorld"

        // Copy of the string
        char s3_copy[50]; // New variable to preserve original s3
        printf("Copy of the second string to another string: %s\n", strcpy(s3_copy, s4)); // Example: For s4="World", output: "World"

        // Reverse of the string
        printf("Reverse of the string: %s\n", strrev(s3_copy)); // Example: For input "World", output: "dlroW"

        // String comparison
        printf("Comparison of the strings: %d\n", strcmp(s3, s4)); // Example: For s3="Hello" and s4="World", output: negative value

        // Prompt user to continue
        printf("Do you want to continue? (Y/N): ");
        getchar(); // Consume the newline character left by previous scanf
        scanf("%c", &res);
    }
    return 0;
}