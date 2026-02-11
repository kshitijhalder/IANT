/***************************************************************
* FILENAME: Program_6.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Destructors
* AUTHOR: Kshitij Halder
* DATE:1/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the use of destructor.
****************************************************************/

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void delay(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

class Add_func {
    public:
        int x, y, z;
        Add_func() {
            x = 15;
            y = 25;
            z = x + y;
            cout << "Total value is: " << z << endl;
        }
        ~Add_func() {
            cout << "Destructor called" << endl;
            delay(20);
        }
};

int main() {
    system("clear");
    Add_func obj;
    cout << "Calling main function" << endl;

    return 0;
}