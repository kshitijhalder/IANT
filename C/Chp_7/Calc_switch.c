/***************************************************************
* FILENAME: Calc_switch.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Calculator
* AUTHOR: Kshitij Halder
* DATE: 6/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Calculator using switch case.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

void calculator() {
    int n1, n2, result;
    char op, cont;

    system("clear");
    printf("Calculator\n**********\n\n");
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                calculator(); // Call the function again for new input
                return;
            }
            break;
        default:
            printf("Invalid operator\n");
            calculator(); // Call the function again for new input
            return;
    }

    printf("Result: %d\n", result);
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &cont);

    if (cont == 'y' || cont == 'Y') {
        calculator(); // Call the function again for new input
    }
}

int main() {
    calculator();
    return 0;
}