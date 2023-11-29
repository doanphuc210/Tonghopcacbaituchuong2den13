#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter a positive integer (1 to 15): ";
    cin >> size;

    if (size < 1 || size > 15) {
        cout << "Please enter a valid number between 1 and 15." << endl;
        return 1;
    }

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}
