/***************************************************************
* FILENAME: Calc_do_while.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Calculator
* AUTHOR: Kshitij Halder
* DATE: 6/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Calculator using do-while loop.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, result;
    char op, cont;

    do {
        system("clear");
        printf("Enter first number: ");
        scanf("%d", &n1);
        printf("Enter second number: ");
        scanf("%d", &n2);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op);

        do {
            op == '+' && (result = n1 + n2);
        } while (0);

        do {
            op == '-' && (result = n1 - n2);
        } while (0);

        do {
            op == '*' && (result = n1 * n2);
        } while (0);

        do {
            op == '/' && (n2 != 0) && (result = n1 / n2);
            op == '/' && (n2 == 0) && printf("Error: Division by zero is not allowed.\n");
        } while (0);

        if (op != '/' || n2 != 0) {
            printf("Result: %d\n", result);
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont);

    } while (cont == 'y' || cont == 'Y');

    return 0;
}