/***************************************************************
* FILENAME: Program_7.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Multi-dimensional array (3D Array)
* AUTHOR: Kshitij Halder
* DATE: 3/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, k;
    int arr[3] [3] [3] = {
        {
            {2, 4, 6},
            {8, 10, 12},
            {14, 16, 18}
        },
        {
            {3, 6, 9},
            {12, 15, 18},
            {21, 24, 27}
        },
        {
            {5, 10, 15},
            {20, 25, 30},
            {35, 40, 45}
        }
    };
    system("clear");
    printf("3-D Array elements: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}