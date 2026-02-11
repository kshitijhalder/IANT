/***************************************************************
* FILENAME: Program_9.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Bubble Sorting
* AUTHOR: Kshitij Halder
* DATE: 10/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
int list[MAX] = {0, 5, 8, 3, 7, 2, 6, 9, 4, 1};

int display() {

    int i;
    printf("[");
    // navigate through all items
    for (i = 0; i < MAX; i++) {
        printf("%d ", list[i]);
    }
    printf("]\n");
}

int bubbleSort() {
    int temp;
    bool swapped = false;
    // loop through all numbers
    for (int i = 0; i < MAX - 1; i++) {
        swapped = false;
        // loop through numbers falling ahead
        for (int j = 0; j < MAX - i - 1; j++) {
            printf("            Items compared: [ %d, %d ]", list[j], list[j + 1]);
            // check if next number is lesser than current no
            // swap the numbers.
            // (Bubble up the highest number)
            if (list[j] > list[j + 1]) {
                // swap the elements
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                swapped = true;
                printf("  => swapped [%d, %d]\n", list[j], list[j + 1]);
            }   else {
                printf("  => not swapped [%d, %d]\n", list[j], list[j + 1]);
            }
        }
        // if no number was swapped that means
        // array is sorted now, break the loop.
        if (!swapped) {
            break;
        }
        printf("Iteration %d#: ", (i + 1));
        display();
    }
}

int main() {
    system("clear");
    printf("Input Array: ");
    display();
    printf("\n");
    bubbleSort();
    printf("\nOutput Array: ");
    display();
}