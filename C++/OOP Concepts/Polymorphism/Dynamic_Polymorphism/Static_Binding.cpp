/***************************************************************
* FILENAME: Program_10.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Static Binding
* AUTHOR: Kshitij Halder
* DATE:25/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates static binding in dynamic polymorphism.
****************************************************************/

#include <iostream>
using namespace std;

class Team1 {
    public:
        void play() {
            cout << "Playing Cricket!!!" << endl;
        }
};

class Team2 {
    public:
        void play() {
            cout << "Playing Football!!!" << endl;
        }
};

int main(void) {
    system("clear");
    Team1 t1;
    Team2 t2;
    t1.play();
    t2.play();
    return 0;
}
