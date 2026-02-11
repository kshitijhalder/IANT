/***************************************************************
* FILENAME: Program_3.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Declaration above Definition
* AUTHOR: Kshitij Halder
* DATE: 12/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void demo(int x, int y);        // Function declaration

int main() {

    int a = 120, b = 20;
    system("clear");
    printf("Sample Function: \n");
    demo(a, b);                 // Function call
    return 0;
}

void demo(int x, int y) {       // Function definition
    printf("The sum is : %d\n", x + y);
}

// Compare this snippet from C/Chp_10/int_function.c:

// #include <stdio.h>
// #include <stdlib.h>

// int sum(int a, int b) {                         // Function definition
//     return a + b;
// }

// int main() {

//     int a = 120, b = 20;
//     system("clear");
//     printf("The sum is : %d\n", sum(a, b));    // Function call
//     return 0;
// }