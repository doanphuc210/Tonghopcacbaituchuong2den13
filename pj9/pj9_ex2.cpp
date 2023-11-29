// This program stores the address of a variable in a pointer.
#include <iostream>
using namespace std;

int main() {
    int x = 25;         // Declare and initialize an integer variable x
    int *ptr = nullptr; // Declare a pointer variable ptr, initialized to nullptr (no address)

    ptr = &x;           // Store the address of x in the pointer ptr

    cout << "The value in x is " << x << endl;   // Print the value of x
    cout << "The address of x is " << ptr << endl; // Print the address stored in ptr

    return 0;
}
