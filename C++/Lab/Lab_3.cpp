/***************************************************************
* FILENAME: Program_3.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Hello World Program
* AUTHOR: Kshitij Halder
* DATE:26/6/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates code to reverse the entered number.
****************************************************************/

#include <iostream>
using namespace std;

class Reverse
{
    long n;
public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    int revNum()
    {
        long reversed = 0;
        long temp = n;
        while (temp > 0)
        {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        return reversed;
    }
};

int main()
{
    system("clear");
    long res;
    Reverse r;
    r.input();
    res = r.revNum();
    cout << "Reversed number: " << res << endl;
    return 0;
}