#include <iostream>
#include <algorithm>
using namespace std;

int* expandArray(const int arr[], int size) {
    int newSize = size + 1;
    int* newArray = new int[newSize];
    newArray[0] = 0;
    for (int i = 0; i < size; i++) {
        newArray[i + 1] = arr[i];
    }
    return newArray;
}

int getMode(const int arr[], int size) {
    int mode = arr[0];
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

double getMedian(int arr[], int size) {
    sort(arr, arr + size);

    if (size % 2 == 0) {
        return (static_cast<double>(arr[size / 2 - 1]) + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

int main() {
    int numStudents;
    cout << "How many students were surveyed? ";
    cin >> numStudents;

    if (numStudents <= 0) {
        cout << "Invalid input. Number of students must be greater than 0." << endl;
        return 1;
    }

    int* movieData = new int[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the number of movies student " << i + 1 << " saw: ";
        cin >> movieData[i];

        if (movieData[i] < 0) {
            cout << "Invalid input. Number of movies cannot be negative." << endl;
            delete[] movieData;
            return 1;
        }
    }

    int mode = getMode(movieData, numStudents);
    double median = getMedian(movieData, numStudents);

    cout << "Average: " << static_cast<double>(accumulate(movieData, movieData + numStudents, 0)) / numStudents << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;

    delete[] movieData;

    return 0;
}
