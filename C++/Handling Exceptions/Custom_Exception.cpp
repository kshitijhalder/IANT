/***************************************************************
* FILENAME: Program_3.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Custom Exception (Exception Class)
* AUTHOR: Kshitij Halder
* DATE:13/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the extension of exception class.
****************************************************************/

#include <iostream>
#include <exception>
using namespace std;

class ExceptionDemo : public exception {
    virtual const char* what() const throw() {
        return "This is a C++ exception";
    }
} newexcp;

int main() {
    system("clear");
    try {
        throw newexcp;
    }
    catch (exception& eo) {
        cout << eo.what() << endl;
    }
    return 0;
}