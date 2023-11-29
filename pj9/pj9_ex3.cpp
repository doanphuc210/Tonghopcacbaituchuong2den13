#include <iostream>
using namespace std;

int main() {
    short numbers[] = {10, 20, 30, 40, 50}; // Declare an array of short integers

    // Display the first element of the array by dereferencing the array name.
    cout << "The first element of the array is ";
    cout << *numbers << endl; // Dereferencing the array name gives you the value of the first element

    return 0;
}
