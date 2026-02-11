/***************************************************************
* FILENAME: Program_2.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Error Handling
* AUTHOR: Kshitij Halder
* DATE:29/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to story information in file by using the 
* fstream data type and how to use file handling functions.
****************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fileout; 
    char filename[30];
    char filerec[50];

    system("clear");
    cout << "Enter the file name: ";
    cin >> filename;
    fileout.open(filename, ios::out);
    cout << "Enter a word of your choice: ";
    cin >> filerec;
    fileout << filerec << endl;
    cout << "You have entered the  data successfully..!!!" << endl;
    fileout.close();
    
    return 0;
}