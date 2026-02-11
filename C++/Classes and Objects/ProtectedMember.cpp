/***************************************************************
 * FILENAME: Program_3.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Accessing Protected Data Members
 * AUTHOR: Kshitij Halder
 * DATE:18/4/2025
 * MODIFICATION: Modified the code on 21/4/2025
 * CHANGES: Added a new member setHeight on the line 24 and getVolume on line 45 with change in int main by adding 4 objects of Rectangle class
 * DESCRIPTION: This program shows how to access protected data members.
 ****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    void setLength(int l)
    {
        length = l;
    }

protected:
    int width;
    int height;
    int length;
};
 // The derived class
 class Rectangle : public Shape {
     public:
         int getArea() {
             return (width * length);
         }
         int getVolume() {
             return (width * height * 2); 
         }
 };
 

 int main() {
     system("clear");
     Rectangle rects[4];
     int width, height, length;

     for (int i = 0; i < 4; ++i) {
         cout << "Enter the width of Rectangle " << i + 1 << ": ";
         cin >> width;
         cout << "Enter the height of Rectangle " << i + 1 << ": ";
         cin >> height;
         cout << "Enter the length of Rectangle " << i + 1 << ": ";
         cin >> length;

         rects[i].setWidth(width);
         rects[i].setHeight(height);
         rects[i].setLength(length);
     }

     cout << "\n| Rectangle | Area       | Volume     |\n";
     cout << "|-----------|------------|------------|\n";
     for (int i = 0; i < 4; ++i) {
         cout << "|  " << setw(9) << left << i + 1
              << "| " << setw(11) << left << rects[i].getArea()
              << "| " << setw(11) << left << rects[i].getVolume()
              << "|\n";
     }

     return 0;
 }