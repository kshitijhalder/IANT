/***************************************************************
 * FILENAME: Program_8.cpp
 * LANGUAGE: C++
 * COMPILER: Visual Studio Code
 * TITLE: Goto Statement
 * AUTHOR: Kshitij Halder
 * DATE:11/4/2025
 * MODIFICATION: N/A
 * CHANGES: N/A
 * DESCRIPTION: goto is used as an unconditional branching and can transfer to anywhere in the function.
 *              goto statement is specified by a label called identifier.
 *
 *              goto label;
 *              ... . . . .
 *              ... . . . .
 *              ... . . . .
 *              label: . . . .
 *              ... . . . .
 *              ... . . . .
 ****************************************************************/

 #include <iostream>
 #include <string>
 using namespace std;

 int main()
 {
    system("clear");
    int k;

    cout << "Enter a number 1, 2 or 3: ";
    cin >> k;

    switch (k)
    {
        case 1:
            cout << "You entered 1" << endl;
            goto label1;

        case 2:
            cout << "You entered 2" << endl;
            goto label1;
            
        case 3:
            cout << "You entered 3" << endl;
            goto label1;
            
        default:
            cout << "Enter a valid number" << endl;
            break;
    }
    label1:
    cout << "Loop is exited" << endl;

    return 0;
 }