/***************************************************************
* FILENAME: Program_4.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Standard Log Stream
* AUTHOR: Kshitij Halder
* DATE:14/4/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: It controls the error messages passed from buffer to standard error.
*              It is an instance of the ostream class.
*              It would hold the error messages until the buffer is full or cleared.
*              It is written as: clog<<...;
****************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    system("clear");
    string word;
    char mystr[] = "No vowel found in the word.";
    bool vowelFound = false;

    cout << "Enter a word: ";
    cin >> word;

    for (char c : word) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            vowelFound = true;
            break;
        }
    }

    if (vowelFound) {
        cout << "Vowel found..." << endl;
    } else {
        clog << "Error: " << mystr << endl;
    }

    return 0;
}
