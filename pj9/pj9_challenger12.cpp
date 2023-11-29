#include <iostream>
using namespace std;

int* expandArray(const int arr[], int size) {
    int newSize = size + 1;
    int* newArray = new int[newSize]; // Create a new array with one more element

    newArray[0] = 0; // Set the first element of the new array to 0

    for (int i = 0; i < size; i++) {
        newArray[i + 1] = arr[i]; // Copy elements from the original array
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

    int* newArray = expandArray(originalArray, size);

    cout << "New Array with One More Element: ";
    for (int i = 0; i < size + 1; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    delete[] originalArray;
    delete[] newArray;

    return 0;
}
