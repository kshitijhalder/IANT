/***************************************************************
* FILENAME: Program_12.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Matrix arithmetic operation
* AUTHOR: Kshitij Halder
* DATE: 16/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, k, n, a[5][5], b[5][5], s[5][5], m[5][5], mul[5][5];

    system("clear");
    printf("Matrix / 2D Array Operations\n");
    printf("Enter range of rows and columns (1 to 5) = ");
    scanf("%d", &n);
    if (n < 1 || n > 5) {
        printf("Range must be between 1 and 5.\n");
        return 1;
    }
    printf("Enter the values of First matrix A\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value of A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the values of Second matrix B\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value of B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n First Matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
        }
        printf("\n");
    }
    printf("\n Second Matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("b[%d][%d] = %d\t", i, j, b[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix Operations :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            m[i][j] = a[i][j] - b[i][j];
            s[i][j] = a[i][j] + b[i][j];
            mul[i][j] = 0;
            for (k = 0; k < n; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\n Sum of matrices :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("s[%d][%d] = %d\t", i, j, s[i][j]);
        }
        printf("\n");
    }
    printf("\n Subtraction of matrices :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("m[%d][%d] = %d\t", i, j, m[i][j]);
        }
        printf("\n");
    }
    printf("\n Multiplication of matrices :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("mul[%d][%d] = %d\t", i, j, mul[i][j]);
        }
        printf("\n");
    }
    return 0;

}