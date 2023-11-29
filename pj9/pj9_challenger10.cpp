#include <iostream>
using namespace std;

int* reverseArray(const int arr[], int size) {
    int* reversedArr = new int[size]; // Create a new array for the reversed elements

    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - 1 - i]; // Copy elements in reverse order
    }

    return reversedArr;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* originalArray = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> originalArray[i];
    }

    int* reversedArray = reverseArray(originalArray, size);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArray[i] << " ";
    }
    cout << endl;

    delete[] originalArray;
    delete[] reversedArray;

    return 0;
}
