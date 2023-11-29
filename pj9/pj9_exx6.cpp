#include <iostream>
using namespace std;

int main() {
    int x = 25, y = 50, z = 75; // Declare three integer variables
    int *ptr = nullptr;        // Declare a pointer variable, initialized to nullptr (no address)

    // Display the initial values of x, y, and z.
    cout << "Here are the initial values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    // Use the pointer to manipulate x, y, and z.
    ptr = &x;       // Store the address of x in ptr.
    *ptr += 100;    // Add 100 to the value in x.

    ptr = &y;       // Store the address of y in ptr.
    *ptr += 100;    // Add 100 to the value in y.

    ptr = &z;       // Store the address of z in ptr.
    *ptr += 100;    // Add 100 to the value in z.

    // Display the updated values of x, y, and z.
    cout << "Once again, here are the updated values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    return 0;
}
