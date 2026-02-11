/***************************************************************
 * FILENAME: Program_3.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Parameterised Constructor
 * AUTHOR: Kshitij Halder
 * DATE:29/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: This program demonstrates the use of parameterised constructor.
 ****************************************************************/

 #include <iostream>
using namespace std;

class CubeFunc {
    public:
        int side_value;
    public:
        CubeFunc(int a) {
            side_value = a;
        }
};

int main() {
    system("clear");
    CubeFunc cf1(5);
    CubeFunc cf2(10);
    CubeFunc cf3(15);
    cout << "Side of Cube 1: " << cf1.side_value << endl;
    cout << "Side of Cube 2: " << cf2.side_value << endl;
    cout << "Side of Cube 3: " << cf3.side_value << endl;
    return 0;
}