/***************************************************************
* FILENAME: Program_7.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Loop Control Statements
* AUTHOR: Kshitij Halder
* DATE: 28/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program reads two numbers, one for loop value and one for the continue 
  value.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int k = 1, n, m;
    system("clear");

    printf("Use of continue statement during looping\n\n");
    printf("Enter the loop value: ");
    scanf("%d", &n);
    printf("Enter the continue value: ");
    scanf("%d", &m);

    while (k <= n) {
        printf("\n k = %d", k);
        if (k == m) {
            printf("\n loop continues......");
            k++;
            continue;
        }
        k++;
    }
    return 0;
}

/*
Mistake done by me :
while (k <= n) {
        printf("\n k = %d", k);
        k++;
        if (k == m)
    printf("\n loop continues......");
            k++;
        continue;
    }

Correction :
while (k <= n) {
        printf("\n k = %d", k);
        if (k == m) {
            printf("\n loop continues......");
            k++;
            continue;
        }
        k++;
    }
*/