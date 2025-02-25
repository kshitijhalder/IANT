/***************************************************************
* FILENAME: Program_6.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Switch Statement
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Convert user entered numbers to weekday using switch statement.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int weekday;
    system("clear");
    printf("Enter weekday number (1-7): ");
    scanf("%d", &weekday);
    printf("\n");
    printf("Weekday is: ");

    switch (weekday) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
           printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
           printf("Please enter weekday number between 1-7.\n");
    }
    return 0;

}