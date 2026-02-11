/***************************************************************
* FILENAME: MoveExample.cpp
* LANGUAGE: C++
* COMPILER: Visual Studio Code
* TITLE: Move Constructor
* AUTHOR: Kshitij Halder
* DATE:1/5/2025
* MODIFICATION: N/A
* CHANGES: N/A
* DESCRIPTION: This program demonstrates the use of move constructor.
****************************************************************/

#include <iostream>
#include <utility> // For std::move
using namespace std;

class MoveExample {
private:
    int* data;

public:
    // Constructor
    MoveExample(int value) {
        data = new int(value);  
        cout << "Constructor called for value: " << *data << endl;
    }

    // Copy Constructor
    MoveExample(const MoveExample& other) {
        data = new int(*other.data);
        cout << "Copy Constructor called for value: " << *data << endl;
    }

    // Move Constructor
    MoveExample(MoveExample&& other) noexcept {
        data = other.data;
        other.data = nullptr;
        cout << "Move Constructor called" << endl;
    }

    // Display value
    void display() const {
        if (data) {
            cout << "Value: " << *data << endl;
        } else {
            cout << "No data" << endl;
        }
    }
};

int main() {
    system("clear");
    MoveExample obj1(10); // Constructor
    MoveExample obj2 = obj1; // Copy Constructor
    MoveExample obj3 = std::move(obj1); // Move Constructor

    cout << "Object 1: ";
    obj1.display(); // No data
    cout << "Object 2: ";
    obj2.display(); // Value: 10
    cout << "Object 3: ";
    obj3.display(); // Value: 10

    return 0;
}
