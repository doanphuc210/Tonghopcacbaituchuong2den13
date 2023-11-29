#include <iostream>
using namespace std;

int* doubleArraySize(const int arr[], int size) {
    int newSize = 2 * size;
    int* newArray = new int[newSize]; // Create a new array with double the size

    for (int i = 0; i < newSize; i++) {
        if (i < size) {
            newArray[i] = arr[i]; // Copy contents from the original array
        } else {
            newArray[i] = 0; // Initialize unused elements with 0
        }
    }

    return newArray;
}

int main() {
    int size;
    cout << "Enter the size of the original array: ";
    cin >> size;

    int* originalArray = new int[size];

    cout << "Enter the elements of the original array: ";
    for (int i = 0; i < size; i++) {
        cin >> originalArray[i];
    }

    int* newArray = doubleArraySize(originalArray, size);

    cout << "New Array with Doubled Size: ";
    for (int i = 0; i < 2 * size; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    delete[] originalArray;
    delete[] newArray;

    return 0;
}
