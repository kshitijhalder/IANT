/***************************************************************
* FILENAME: Program_7.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hybrid Inheritance
* AUTHOR: Kshitij Halder
* DATE:24/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates hybrid inheritance.
****************************************************************/

#include <iostream>
using namespace std;
int p, q, r, s, t;

class P {
    protected:
    public: 
        void getpq()
        {
            cout << "Enter the value of p: ";
            cin >> p;
            cout << "Enter the value of q: ";
            cin >> q;
        }
};

class Q : public P {
    protected:
    public: 
        void getr()
        {
            cout << "Enter the value of r: ";
            cin >> r;
        }
};

class R {
    protected:
    public:
        void gets()
        {
            cout << "Enter the value of s: ";
            cin >> s;
        }
};

class S : public Q, public R {
    protected:
    public:
        void sum()
        {
            getpq();
            getr();
            gets();
            t = p + q + r + s;
            cout << "The sum is: " << t << endl;
        }
};

int main() {
    system("clear");
    cout << "Main function -\n" << endl;
    S sl;
    sl.sum();
    return 0;
}