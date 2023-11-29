#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char package;
    int minutes;
    double totalAmount = 0.0;

    cout << "Select your package (A, B, or C): ";
    cin >> package;

    if (package != 'A' && package != 'B' && package != 'C') {
        cout << "Invalid package selection. Please choose A, B, or C." << endl;
        return 1;
    }

    cout << "Enter the number of minutes used: ";
    cin >> minutes;

    if (minutes < 0) {
        cout << "Invalid input. Minutes cannot be negative." << endl;
        return 1;
    }

    switch (package) {
        case 'A':
            totalAmount = 39.99;
            if (minutes > 450) {
                totalAmount += (minutes - 450) * 0.45;
            }
            break;

        case 'B':
            totalAmount = 59.99;
            if (minutes > 900) {
                totalAmount += (minutes - 900) * 0.40;
            }
            break;

        case 'C':
            totalAmount = 69.99;
            break;
    }

    cout << fixed << setprecision(2);
    cout << "Your total monthly bill is: $" << totalAmount << endl;

    return 0;
}
