#include <iostream>
using namespace std;

int findMode(const int *arr, int size) {
    if (size == 0)
        return -1; // Return -1 if the array is empty

    int mode = arr[0]; // Initialize mode to the first element
    int maxCount = 1; // Initialize the count of mode

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    if (maxCount == 1)
        return -1; // No mode found

    return mode;
}

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int mode = findMode(arr, size);

    if (mode == -1)
        cout << "No mode found in the array." << endl;
    else
        cout << "The mode of the array is: " << mode << endl;

    delete[] arr;

    return 0;
}
