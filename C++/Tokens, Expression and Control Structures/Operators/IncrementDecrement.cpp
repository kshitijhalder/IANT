/***************************************************************
* FILENAME: IncrementDecrement.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Increment and Decrement Demonstration
* AUTHOR: Kshitij Halder
* DATE: 7/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates post and pre increment
*              and decrement operations in a structured manner.
****************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("clear");

    int a = 10;
    vector<int> postIncrementResults, postDecrementResults, preIncrementResults, preDecrementResults;

    // Collect results for post-increment
    for (int i = 0; i < 5; i++) {
        postIncrementResults.push_back(a++);
    }

    // Collect results for post-decrement
    for (int i = 0; i < 5; i++) {
        postDecrementResults.push_back(a--);
    }

    // Collect results for pre-increment
    for (int i = 0; i < 5; i++) {
        preIncrementResults.push_back(++a);
    }

    // Collect results for pre-decrement
    for (int i = 0; i < 5; i++) {
        preDecrementResults.push_back(--a);
    }

    // Display table
    cout << "     Operation\t\tValue Before\tResult\t\tValue After" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    // Post-increment
    cout << "Post-increment (a++)\t10\t\t" << postIncrementResults[0] << "\t\t(";
    for (size_t i = 0; i < postIncrementResults.size(); i++) {
        cout << postIncrementResults[i];
        if (i != postIncrementResults.size() - 1) cout << ", ";
    }
    cout << ")" << endl;

    // Post-decrement
    cout << "Post-decrement (a--)\t15\t\t" << postDecrementResults[0] << "\t\t(";
    for (size_t i = 0; i < postDecrementResults.size(); i++) {
        cout << postDecrementResults[i];
        if (i != postDecrementResults.size() - 1) cout << ", ";
    }
    cout << ")" << endl;

    // Pre-increment
    cout << "Pre-increment  (++a)\t10\t\t" << preIncrementResults[0] << "\t\t(";
    for (size_t i = 0; i < preIncrementResults.size(); i++) {
        cout << preIncrementResults[i];
        if (i != preIncrementResults.size() - 1) cout << ", ";
    }
    cout << ")" << endl;

    // Pre-decrement
    cout << "Pre-decrement  (--a)\t15\t\t" << preDecrementResults[0] << "\t\t(";
    for (size_t i = 0; i < preDecrementResults.size(); i++) {
        cout << preDecrementResults[i];
        if (i != preDecrementResults.size() - 1) cout << ", ";
    }
    cout << ")" << endl;

    return 0;
}