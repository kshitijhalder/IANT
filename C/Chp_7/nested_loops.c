/***************************************************************
* FILENAME: Program_5.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Nesting of Loops
* AUTHOR: Kshitij Halder
* DATE: 28/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Sum of a digit of a number.
****************************************************************/

/*
****************************************************************
* Nesting of 'while loop'
* Syntax:
* while (condition) {
*     // code to be executed
*     // Increment or Decrement
*     while (condition) {
*         // code to be executed
*         // Increment or Decrement
*     }
* }
*/
/*
* Nesting of 'for loop'
* Syntax:
* for (initialization; condition; increment/decrement) {
*     // code to be executed
*     for (initialization; condition; increment/decrement) {
*         // code to be executed
*     }
* }
*/
/*
* Nesting of 'do-while loop'
* Syntax:
* do {
*     // code to be executed
*     // Increment or Decrement
*     do {
*         // code to be executed
*         // Increment or Decrement
*     } while (condition);
* } while (condition);
****************************************************************
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q, r, s, res = 'Y';
    system("clear");
    while (res == 'Y' || res == 'y') {
    
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Value of n = %d\n", n);
        q = n;
        s = 0;
        while (q > 0) {
            r = q % 10;
            s = s + r;
            q = q / 10;
        }
        printf("Sum of digits of %d is %d\n", n, s);
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &res);
    }
    return 0;
}