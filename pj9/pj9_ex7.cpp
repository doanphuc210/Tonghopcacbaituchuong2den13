#include <iostream>
using namespace std;

int main() {
    int x = 25;         // Declare and initialize an integer variable x
    int *ptr = nullptr; // Declare a pointer variable ptr, initialized to nullptr (no address)

    ptr = &x;           // Store the address of x in the pointer ptr

    // Use both x and ptr to display the value in x.
    cout << "Here is the value in x, printed twice:\n";
    cout << x << endl;   // Displays the contents of x
    cout << *ptr << endl; // Displays the contents of x by dereferencing the pointer ptr

    // Assign 100 to the location pointed to by ptr. This will actually assign 100 to x.
    *ptr = 100;

    // Use both x and ptr to display the value in x.
    cout << "Once again, here is the value in x:\n";
    cout << x << endl;   // Displays the updated contents of x
    cout << *ptr << endl; // Displays the updated contents of x by dereferencing the pointer ptr

    return 0;
}
