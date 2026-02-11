/***************************************************************
* FILENAME: Program_3.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Applications of Structure - Array of Structures
* AUTHOR: Kshitij Halder
* DATE: 19/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct student {

    char name[30];
    int age;
};                  // Structure declaration

int main() {

    int n;
    struct student s[10];    // Array of structures
    system("clear");

    printf("\n Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\n Enter name of student %d: ", i + 1);
        scanf("%29s", s[i].name);
        printf(" Enter age of student %d: ", i + 1);
        scanf("%d", &s[i].age);
    }

    printf("\n Students Information -------------- \n");
    for (int i = 0; i < n; i++) {
        printf("\n Name: %s\tAge: %d\n", s[i].name, s[i].age);
    }

    return 0;
}