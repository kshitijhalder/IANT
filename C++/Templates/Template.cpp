/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Template Program
* AUTHOR: Kshitij Halder
* DATE:9/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the function template.
****************************************************************/
#include <iostream>
using namespace std;

template <typename T>
inline T const &Max(T const &a, T const &b) {
    return a < b ? b : a;
}

int main() {
    system("clear");
    int m = 40;
    int n = 35;
    cout << "Max (m, n) = " << Max(m, n) << endl;
    double d1 = 13.5;
    double d2 = 20.7;
    cout << "Max (d1, d2) = " << Max(d1, d2) << endl;

    return 0;
}