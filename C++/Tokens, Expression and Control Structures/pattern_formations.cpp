
/***************************************************************
 * FILENAME: Pattern_Formations.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Pattern Formations
 * AUTHOR: Kshitij Halder
 * DATE:11/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: (1) Use loop to print the following pattern
 *              k
 *             s h
 *           i t i j
 *              (2) Use loop to print the following pattern
 *                k      
 *               k s     
 *              k s h    
 *             k s h i   
 *            k s h i t  
 *           k s h i t i 
 *          k s h i t i j
 *              (3) Use loop to print the following pattern
 *          k s h i t i j
 *           k s h i t i 
 *            k s h i t  
 *             k s h i   
 *              k s h    
 *               k s     
 *                k      
 ****************************************************************/

#include <iostream>
using namespace std;

int main()
{
    system("clear");
    char ch[10] = {'k', 's', 'h', 'i', 't', 'i', 'j'};
    int i, j;

    // Pattern 1
    //    k
    //   s h
    // i t i j
    
    cout << '\n';

    // Pattern 2
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7 - i ; j++) // Leading spaces for alignment
        {
            cout << ' ';
        }
        for (j = 0; j < i; j++) // Characters
        {
            cout << ' ' << ch[j];
        }
        for (j = 0; j <  - i - 1; j++) // Trailing spaces for symmetry
        {
            cout << ' ';
        }
        cout << '\n';
    }

    // Pattern 3
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < i; j++) // Leading spaces for alignment
        {
            cout << ' ';
        }
        for (j = 0; j < 7 - i; j++) // Characters
        {
            cout << ' ' << ch[j];
        }
        for (j = 0; j < i; j++) // Trailing spaces for symmetry
        {
            cout << ' ';
        }
        cout << '\n';
    }

    cout << '\n';
    // Pattern 4
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < i; j++) // Leading spaces for alignment
        {
            cout << ' ';
        }
        for (j = 0; j < 7 - i; j++) // Characters
        {
            cout << ' ' << ch[j];
        }
        for (j = 0; j < i; j++) // Trailing spaces for symmetry
        {
            cout << ' ';
        }
        cout << '\n';
    }
    for (i = 1; i < 7; i++)
    {
        for (j = 0; j < 6 - i ; j++) // Leading spaces for alignment
        {
            cout << ' ';
        }
        for (j = 0; j < i + 1; j++) // Characters
        {
            cout << ' ' << ch[j];
        }
        for (j = 0; j < i - 1; j++) // Trailing spaces for symmetry
        {
            cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}