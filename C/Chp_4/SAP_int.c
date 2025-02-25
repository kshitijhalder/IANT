//
//  Chp 4
//  FORMATTED INPUT & OUTPUT FUNCTIONS
//  Program_2.c
//
//  Created by Kshitij Halder on 21/02/25.
//

#include <stdio.h>
#include <stdlib.h>

/*Using scanf() and printf() functions for integer only*/

int main()
{
    int i, j, k;
    system("clear");
    printf("Reading and Writing numbers\n");
    printf("Enter only one number: ");
    scanf("%d", &i);            // reading number from the keyboard
    printf("The number you entered is: %d", i);
    printf("\nEnter two numbers: ");
    scanf("%d %d", &j, &k);      // reading two numbers from the keyboard
    printf("The numbers you entered are: %d and %d", j, k);
    return 0;
}
