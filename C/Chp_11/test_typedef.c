/***************************************************************
* FILENAME: TypeDef_example.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: typedef Keyword in C
* AUTHOR: Kshitij Halder
* DATE: 19/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct student{
    int age;
    char name[30];  
};

typedef struct student s;
// above line "typedef struct student s;" is defining s as stucture and "s, s1, s2" is valid

int main() {
    s s1, s2;
    system("clear");

    printf("\nEnter name of student 1: ");
    scanf("%29s", s1.name);
    printf("Enter age of student 1: ");
    scanf("%d", &s1.age);

    printf("\nEnter name of student 2: ");
    scanf("%29s", s2.name);
    printf("Enter age of student 2: ");
    scanf("%d", &s2.age);

    printf("\nStudent 1: \nName: %s\nAge: %d\n", s1.name, s1.age);
    printf("\nStudent 2: \nName: %s\nAge: %d\n", s2.name, s2.age);

    return 0;
}