/***************************************************************
* FILENAME: Operators.c
* TITLE: Arithmetic Operators
* DESCRIPTION: Unary and Binary Arithmetic Operators.
* AUTHOR: Kshitij Halder
* DATE: 24/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Unary Arithmetic Operators

    int a = 10;
    system("clear");
    printf("Increment: %d\n", ++a);
    printf("Increment: %d\n", a++);
    printf("Increment: %d\n", a);
    printf("Decrement: %d\n", --a);
    printf("Decrement: %d\n", a--);
    printf("Decrement: %d\n", a);

    // Binary Arithmetic Operators
    int b = 10;
    int c = 20;
    printf("\nAddition: %d\n", b + c);
    printf("Subtraction: %d\n", b - c);
    printf("Multiplication: %d\n", b * c);
    printf("Division: %d\n", b / c);
    printf("Modulus: %d\n", b % c);
    return 0;
}