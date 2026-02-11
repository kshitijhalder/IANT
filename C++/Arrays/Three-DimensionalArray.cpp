/***************************************************************
 * FILENAME: Program_6.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Three-Dimensional Array
 * AUTHOR: Kshitij Halder
 * DATE:17/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: This program how to initialize elements of a three-dimensional array.
 ****************************************************************/

 #include <iostream>
 using namespace std;

 int main()
 {
     system("clear");
     int arr[2][3][2];
     for (int i = 0; i < 2; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             for (int k = 0; k < 2; k++)
             {
                 cout << "Enter element at arr[" << i << "][" << j << "][" << k << "]: ";
                 cin >> arr[i][j][k];
             }
         }
     }
     cout << "\n";
     cout << "The elements of the three-dimensional array are: " << endl;
     for (int i = 0; i < 2; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             for (int k = 0; k < 2; k++)
             {
                 cout << arr[i][j][k] << " ";
             }
             cout << endl;
         }
     }

     return 0;
 }