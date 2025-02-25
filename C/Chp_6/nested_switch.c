/***************************************************************
* FILENAME: Program_7.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Nesting of switch statement
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Explains the working of nested switch statement.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;             // Local variable definition
    int b = 20;   
    system("clear");
    switch(a) {             // Outer switch statement
        case 10:
            printf("Outer case, case value = %d\n", a);
            switch(b) {   // Inner switch statement
                case 20:
                    printf("Inner case, case value = %d\n", b);
            }
    }
    return 0;               // Statement to return control to calling program
}