#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number < 1) {
        cout << "Please enter a positive integer: ";
        cin >> number;
    }

    for (int i = 1; i <= number; i++) {
        sum += i;
    }

    cout << "The sum of integers from 1 to " << number << " is: " << sum << endl;

    return 0;
}
