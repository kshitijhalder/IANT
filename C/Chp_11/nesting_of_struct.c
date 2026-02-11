/***************************************************************
* FILENAME: Program_4.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Nesting of Structure
* AUTHOR: Kshitij Halder
* DATE: 19/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct student {

    char name[30];                  // Outer structure
    int age;        

    struct marks {
        
        int subject1;               // Inner structure
        int subject2;
    }m1;
}s1;                 // Structure variable declaration


