/***************************************************************
* FILENAME: Program_3.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: If age entered is greater than 18, print "Person is eligible for voting" 
* else print "Person is not eligible for voting".
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    system("clear");
    printf("Enter any positive value for age: ");
    scanf("%d", &n);

    if (n > 18) {
        printf("Person is eligible for voting");
    }
    else {
        printf("Person is not eligible for voting");
    }
    return 0;
}
