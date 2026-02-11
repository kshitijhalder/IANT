/***************************************************************
* FILENAME: Program_5.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Overloading Constructor
* AUTHOR: Kshitij Halder
* DATE:1/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the use of overloading constructor.
****************************************************************/

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle ();
        Rectangle (int, int);
        int area (void) {return width * height;}
};

Rectangle::Rectangle () {               // Default constructor
    width = 10;
    height = 5;
}

Rectangle::Rectangle (int w, int h) {   // Parameterized constructor
    width = w;
    height = h;
}

int main() {
    system("clear");
    Rectangle rect_Res (6, 5);
    Rectangle rect_Res1;
    cout << "First rectangle area: " << rect_Res.area() << endl;
    cout << "Second rectangle area: " << rect_Res1.area() << endl;
    return 0;
}