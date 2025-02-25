//
//  Chp 4
//  FORMATTED INPUT & OUTPUT FUNCTIONS
//  Program_3.c
//
//  Created by Kshitij Halder on 21/02/25.
//

#include <stdio.h>
#include <stdlib.h>

/*Using scanf() and printf() functions for real numbers*/

int main()
{
    float a, b;
    system("clear");
    printf("Reading and Writing real numbers\n");
    printf("Enter two real numbers: ");
    scanf("%f %f", &a, &b);              // reading two real numbers from the keyboard
    printf("The real numbers are: %f and %f", a, b);
    return 0;
}