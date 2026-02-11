/***************************************************************
* FILENAME: Program_1.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Read and Write the File
* AUTHOR: Kshitij Halder
* DATE:29/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates how to read and write to a file.
****************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("clear"); 
    char info[50]; 
    // Open the file
    ofstream ofile;
    ofile.open("file.dat");
    cout << "Write to the file - " << endl;
    cout << "Enter your name: ";
    cin.getline(info, 50);      // Read input from user
    ofile << info << endl;      // Write to the file
    cout << "Enter your age: ";
    cin >> info;                // Read input from user
    ofile << info << endl;      // Write to the file
    ofile.close();              // Close the file

    // Open the file for reading
    ifstream ifile;
    ifile.open("file.dat", ios::in);
    cout << "\nReading from the file - " << endl;
    //ifile.getline(info, 50);    // Read the first line
    ifile >> info;              // This reads the first word which creates a problem if the input contains spaces
    cout << info << endl;       // Display the data
    ifile >> info;              // Read from the file
    cout << info << endl;       // Display the data
    ifile.close();              // Close the file
    
    return 0;
}