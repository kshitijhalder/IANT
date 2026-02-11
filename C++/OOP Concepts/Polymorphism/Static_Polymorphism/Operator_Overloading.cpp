/***************************************************************
 * FILENAME: Geekforgeeks.com/Cpp/Polymorphism/Operator_Overloading
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Operator Overloading
 * AUTHOR: Kshitij Halder
 * DATE:24/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: This program was taken from Geekforgeeks.com due to lack of example on Operator Overloading.
 ****************************************************************/

#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    
    Complex(int r, int i) :
    real(r), imag(i) {}

    // Overloading the '+' operator    
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real,
        imag + obj.imag);
    }
};

int main() {
    system("clear");
    Complex c1(10, 5), c2(2, 4);
    
    // Adding c1 and c2 using + operator    
    Complex c3 = c1 + c2;  
    cout << "c3 = " << c3.real << " " << c3.imag << endl;
    return 0;
}