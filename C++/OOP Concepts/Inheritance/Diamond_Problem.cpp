/***************************************************************
 * FILENAME: Program_8.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Diamond Problem
 * AUTHOR: Kshitij Halder
 * DATE:24/4/2025
 * MODIFICATION: No more than one object required for class S in line 43. Changed ob.res to s1.res
 * CHANGES: Enhanced book syntax.
 * DESCRIPTION: This program implements diamond problem in C++.
 ****************************************************************/

#include <iostream>
using namespace std;

class P {
    public:
        int a;
};

class Q : virtual public P {
    public:
        int b;
};

class R : virtual public P {
    public:
        int c;
};

class S : public Q, public R {
    public:
        int res;
};

int main() {
    system("clear");
    cout << "Main function -\n" << endl;
    S s1, s2, s3;
    s1.a = 10;
    s1.b = 20;
    s1.c = 30;
    s1.res = s1.a + s2.b + s3.c;
    cout << "a is : " << s1.a << endl;
    cout << "b is : " << s1.b << endl;
    cout << "c is : " << s1.c << endl;
    cout << "res is : " << s1.res << endl;        // Enhanced book syntax.
    return 0;
}