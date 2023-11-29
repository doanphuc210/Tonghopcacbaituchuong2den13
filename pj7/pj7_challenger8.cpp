#include <iostream>
using namespace std;

const int SIZE = 3;

// Function to check if the array is a Lo Shu Magic Square
bool isLoShuMagicSquare(int square[SIZE][SIZE]) {
    // Calculate the sum of the first row for comparison
    int expectedSum = 0;
    for (int j = 0; j < SIZE; j++) {
        expectedSum += square[0][j];
    }

    // Check if all rows have the same sum as the first row
    for (int i = 0; i < SIZE; i++) {
        int rowSum = 0;
        for (int j = 0; j < SIZE; j++) {
            rowSum += square[i][j];
        }
        if (rowSum != expectedSum) {
            return false;
        }
    }

    // Check if all columns have the same sum as the first row
    for (int j = 0; j < SIZE; j++) {
        int colSum = 0;
        for (int i = 0; i < SIZE; i++) {
            colSum += square[i][j];
        }
        if (colSum != expectedSum) {
            return false;
        }
    }

    // Check if the sum of the main diagonal is the same as expected
    int diagonalSum = 0;
    for (int i = 0; i < SIZE; i++) {
        diagonalSum += square[i][i];
    }
    if (diagonalSum != expectedSum) {
        return false;
    }

    // Check if the sum of the secondary diagonal is the same as expected
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < SIZE; i++) {
        secondaryDiagonalSum += square[i][SIZE - 1 - i];
    }
    if (secondaryDiagonalSum != expectedSum) {
        return false;
    }

    // If all checks pass, it's a Lo Shu Magic Square
    return true;
}

int main() {
    int square[SIZE][SIZE];

    cout << "Enter a 3x3 square of integers (1-9):\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> square[i][j];
        }
    }

    if (isLoShuMagicSquare(square)) {
        cout << "It's a Lo Shu Magic Square!\n";
    } else {
        cout << "It's not a Lo Shu Magic Square.\n";
    }

    return 0;
}
