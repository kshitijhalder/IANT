/***************************************************************
* FILENAME: Program_1.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Accessing Structure Members
* AUTHOR: Kshitij Halder
* DATE: 19/3/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program prints a message to the screen.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct person {
    char name[10];
    int age;
    char gender[10];
};

int main() {
    struct person p1 = {"Kshitij", 20, "Male"};         // Structure variable declaration & initialization
    struct person p2 = {"Monika", 21, "Female"};
    system("clear");
    
    printf("\n Person 1\n --------------\n");
    printf("\n Name = %s", p1.name);
    printf("\n Age = %d", p1.age);
    printf("\n Gender = %s", p1.gender);
    printf("\n\n Person 2\n --------------\n");
    printf("\n Name = %s", p2.name);
    printf("\n Age = %d", p2.age);
    printf("\n Gender = %s", p2.gender);
    printf("\n\n___________________________________\n\n");
    // Printing the size and address of the person1
    printf("Size of person1: %lu\n", sizeof(p1));
    printf("Address of person1: %p\n", &p1);
    printf("Address of person1.name: %p\n", &p1.name);
    printf("Address of person1.age: %p\n", &p1.age);
    printf("Address of person1.gender: %p\n", &p1.gender);

    return 0;

}

  