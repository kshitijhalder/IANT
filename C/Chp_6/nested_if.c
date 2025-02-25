/***************************************************************
* FILENAME: Nested_if_statement.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: If age entered is greater than 18, find if the person is male or female.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n ;
    char ch;

    system("clear");
    printf("Enter any positive value for age: ");
    scanf("%d", &n);
    printf("Enter your gender: ");
    scanf(" %c", &ch);
    printf("\nAge entered is %d\n", n);
    printf("Checking if person is eligible for voting: \n");

    if (n > 18) {

        if (ch == 'm' || ch == 'M') {
            printf("Person is a male.\n");
    }
        printf("Person is eligible for voting");

}
return 0;
}