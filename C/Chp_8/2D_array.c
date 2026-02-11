/***************************************************************
* FILENAME: Program_6.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: 2D Array
* AUTHOR: Kshitij Halder
* DATE: 3/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Initializing 2D array using scanf().
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, a[5][5], j, t, n;
    system("clear");

    printf("Matrix of 2D array\n");
    printf("Enter row and column size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nPrinting Matrix of 2D array\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d]: %d\t", i, j, a[i][j]);
        }
        printf("\n"); // Add a newline character at the end of each row
    }
    return 0;
}