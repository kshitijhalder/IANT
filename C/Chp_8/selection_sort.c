/***************************************************************
* FILENAME: Program_10.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Selection Sorting
* AUTHOR: Kshitij Halder
* DATE: 10/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define MAX 7
int intArray[MAX] = {9, 8, 7, 6, 5, 4, 3};

int printline(int count) {

    int i;
    for (i = 0; i < count - 1; i++) {
        printf("=");
    }
    printf("=\n");
}

int display() {

    int i;
    printf("[");
    // navigate through all items
    for (i = 0; i < MAX; i++) {
        printf("%d ", intArray[i]);
    }
    printf("]\n");
}

int selectionSort() {

    int indexMin, i, j;
    // loop through all numbers
    for (i = 0; i < MAX - 1; i++) {
        // set current element as minimum
        indexMin = i;
        // check the element to be minimum
        for (j = i + 1; j < MAX; j++) {
            if (intArray[j] < intArray[indexMin]) {
                indexMin = j;
            }
        }
        if (indexMin != i) {
            printf("Items swapped: [ %d, %d ]\n", intArray[i], intArray[indexMin]);
            // swap the numbers
            int temp = intArray[indexMin];
            intArray[indexMin] = intArray[i];
            intArray[i] = temp;
        }
        printf("Iteration %d#: ", (i + 1));
        display();
    }
}

int main() {

    system("clear");
    printf("Selection Sort in C\n");
    printf("Input Array: ");
    display();
    printline(50);
    selectionSort();
    printf("Output Array: ");
    display();
    printline(50);
    return 0;
}