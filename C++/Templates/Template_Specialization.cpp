/***************************************************************
* FILENAME: Program_3.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Template SPecialization
* AUTHOR: Kshitij Halder
* DATE:10/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program uses template specialization to support addition
*              data types that use special handling.
****************************************************************/

#include <iostream>
using namespace std;

template <class T>
inline T square(T a) {
    T result_demo;
    result_demo = a * a;
    return result_demo;
}
// THis is template specialization
template <>
string square<string>(string mystring) {
    return mystring + mystring;
}

int main() {
    system("clear");
    int i = 2, myint;
    string ww("Hello");
    myint = square<int>(i);
    cout <<  i << " : " << myint << endl;
    cout << square<string>(ww) << endl;
    return 0;
}