/***************************************************************
* FILENAME: getch.c
* TITLE: Unformatted Input Functions
* DESCRIPTION: getch() and getche() functions
* AUTHOR: Kshitij Halder
* DATE: 21/02/25
* MODIFICATION: N/A
* CHANGES: N/A
****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

char getch() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int main() {
    char ch;
    system("clear");
    printf("Enter a character: ");
    ch = getch();
    printf("\nThe character you entered is: %c\n", ch);
    return 0;
}