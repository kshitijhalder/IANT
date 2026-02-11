/***************************************************************
* FILENAME: Program_6.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Loop Control Statement     [Break statement]
* AUTHOR: Kshitij Halder
* DATE: 28/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program reads two numbers, one for loop value and one for the break 
  value.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int k = 1, n, m;
    system("clear");
    printf("Use of break statement during looping\n\n");
    printf("Enter the loop value: ");
    scanf("%d", &n);
    printf("Enter the break value: ");
    scanf("%d", &m);

    while (k <= n) {
        if (k == m)
            break;
        printf(" k = %d\n", k);
        k++;
    }
    printf("Loop terminated at k = %d\n", k);
    return 0;
}