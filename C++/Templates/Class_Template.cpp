/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Class Template 
* AUTHOR: Kshitij Halder
* DATE:10/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the use of class template.
****************************************************************/

#include <iostream>
using namespace std;

template <class T>
class myval {
    T a, b;
public:
    myval(T first, T second) {
        a = first;
        b = second;
    }
    T getmaxval();
};

template <class T>
T myval<T>::getmaxval() {
    T returnval;
    returnval = a > b ? a : b;
    return returnval;
}

int main() {
    system("clear");
    myval<int> myobject (155, 145);
    cout << "Max value is: " << myobject.getmaxval() << endl;

    return 0;
}