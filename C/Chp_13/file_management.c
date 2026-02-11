/***************************************************************
 * FILENAME: Program_1.c
 * LANGUAGE: C
 * COMPILER: MSVC
 * TITLE: File Management in C
 * AUTHOR: Kshitij Halder
 * DATE: 21/3/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: This program prints a message to the screen.
 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp; // Creating a file pointer
    int mc = 100;
    char str[100];
    char *filename = "/Users/kshitijhalder/Desktop/Workstation/IANT/C/common_comments.h";
    system("clear");

    fp = fopen(filename, "r"); // Opening a file
    if (fp == NULL)
    {

        printf("Could not open file %s", filename);
    }
    printf("\nReading an existing text file \n");
    printf("--------------------------------");
    while (fgets(str, mc, fp) != NULL)
        printf("%s", str);

    fclose(fp); // Closing a file
    return 0;
}
