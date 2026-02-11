/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Encapsulation in OOP
* AUTHOR: Kshitij Halder
* DATE:21/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program shows how to use encapsulation in OOP.
****************************************************************/

#include <iostream>
using namespace std;

class Value {
    private:
        int a;
    
    public:
        void set(int x) {
            a = x;
        }
        int get() {
            return a;
        }
};

int main() {
    system("clear");
    Value v;
    v.set(10);
    cout << "Value: " << v.get() << endl;
    return 0;
}