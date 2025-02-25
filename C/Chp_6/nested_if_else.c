/***************************************************************
* FILENAME: Program_4.c
* LANGUAGE: C
* COMPILER: MSVC
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE: 25/2/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: Check the eligibility of marriage of a boy & a girl.
****************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char ch;
    system("clear");

    printf("Enter your gender (M/F): ");
    scanf("%c", &ch);
    printf("Enter your age: ");
    scanf("%d", &n);

    if (ch == 'F') 
    {
        if (n >= 18) 
        {
            printf("You are eligible for marriage.\n");
        }
        else 
        {
            printf("You are not eligible for marriage.\n");
        }
    }
    else 
    {
        if (ch == 'M'){
            if (n >= 21) 
            {
                printf("You are eligible for marriage.\n");
            }
            else 
            {
                printf("You are not eligible for marriage.\n");
            }
        }
        
    }

}