#include <iostream>
using namespace std;

double findMedian(const int *arr, int size) {
    if (size == 0)
        return 0.0; // Return 0 if the array is empty

    if (size % 2 == 0) {
        // If the array has an even number of elements, calculate the average of the two middle values
        int mid1 = size / 2 - 1;
        int mid2 = size / 2;
        return static_cast<double>(arr[mid1] + arr[mid2]) / 2.0;
    } else {
        // If the array has an odd number of elements, return the middle value
        int mid = size / 2;
        return static_cast<double>(arr[mid]);
    }
}

int main() {
    int size;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the sorted elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    double median = findMedian(arr, size);

    cout << "The median of the array is: " << median << endl;

    delete[] arr;

    return 0;
}
