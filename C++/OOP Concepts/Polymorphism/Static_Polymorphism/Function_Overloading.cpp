/***************************************************************
 * FILENAME: Program_9.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Function Overloading
 * AUTHOR: Kshitij Halder
 * DATE:25/4/2025
 * MODIFICATION: No return statement in functions, so I added it
 * CHANGES: Enhanced book syntax.
 * DESCRIPTION: This program demonstrates static polymorphism via function overloading.
 ****************************************************************/

#include <iostream>
using namespace std;

int add(int a, int b) {
    cout << a + b << endl;
    return a + b;
}

int add(int a, int b, int c) {
    cout << a + b + c << endl;
    return a + b + c;
}

double add(double a, double b) {
    cout << a + b << endl;
    return a + b;                   // Enhanced book syntax.
}

int main() {
    system("clear");
    add(5, 10);
    add(5, 10, 15);
    add(5.5, 4.5);
    return 0;
}