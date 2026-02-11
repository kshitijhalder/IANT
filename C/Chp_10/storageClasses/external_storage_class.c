/***************************************************************
* FILENAME: Program_14.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Scope of Variables - External Storage Class
* AUTHOR: Kshitij Halder
* DATE: 18/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
const float pi = 3.14;           // global / external variables
int r = 10;

void area_1() {
    float a;
    printf("\n Area of circle = %f", pi * r * r);
}

void perimeter_1() {
    float p;
    printf("\n Perimeter of circle = %f", 2 * pi * r);
}

int main() {

    system("clear");
    printf("\n Understanding the external variables \n");
    printf("\n Given values \n pi = %f \t r = %d \n------------------------\n", pi, r);
    area_1();
    perimeter_1();
    return 0;
}