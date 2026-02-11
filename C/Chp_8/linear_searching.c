/***************************************************************
* FILENAME: Program_8.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Applications of arrays (Linear Searching)
* AUTHOR: Kshitij Halder
* DATE: 10/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()  {

    int b[10], flag, pos, key;
    char cont;

    system("clear");
    printf("Linear Searching in array elements \n");
    printf("Enter 5 elements: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    printf("The array is : \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", b[i]);
    }
    do {
        flag = 0;                   // Searching
        printf("\nEnter the element to search-- ");
        scanf("%d", &key);
        for (int i = 0; i < 5; i++) {
            if (b[i] == key) {
                flag = 1;
                pos = i;            // Address position of the element    
                break;
            }
        }
        if (flag == 1) {
            printf("Search is successful and position = %d\n", pos);
        } else {
            printf("Element not found\n");
        }
        printf("Do you want to search another element? (Y/N) ");
        while ((getchar()) != '\n'); // Clear the input buffer
        cont = getchar();
    } while (cont == 'Y' || cont == 'y');
    return 0;
}