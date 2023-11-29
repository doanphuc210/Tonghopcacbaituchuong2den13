#include <iostream>
using namespace std;

// Function to display numbers greater than n
void displayNumbersGreaterThanN(int arr[], int size, int n) {
    cout << "Numbers greater than " << n << " in the array are: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int arraySize = 10; // Change this as needed
    int numbers[arraySize] = {10, 25, 5, 35, 15, 30, 45, 20, 40, 50}; // Example array

    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    displayNumbersGreaterThanN(numbers, arraySize, n);

    return 0;
}
