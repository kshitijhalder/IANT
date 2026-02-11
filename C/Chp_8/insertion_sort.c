/***************************************************************
* FILENAME: Program_11.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Insertion Sorting
* AUTHOR: Kshitij Halder
* DATE: 16/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[20], N, Temp, i, j;
    
    system("clear");
    printf("\n\n\t ENTER THE NUMBER OF TERMS...: ");
    scanf("%d", &N);
    printf("\n\t ENTER THE ELEMENTS OF THE ARRAY...: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 1; i < N; i++) {
        Temp = A[i];
        j = i - 1;
        while (Temp < A[j] && j >= 0) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = Temp;
    }
    printf("\n\t THE ASCENDING ORDER LIST IS...: ");
    for (i = 0; i < N; i++) {
        printf("\n\t\t\t %d ", A[i]);
    }

    return 0;
}