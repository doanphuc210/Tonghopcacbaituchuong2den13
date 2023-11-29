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

            // Calculate savings for Package B and C
            double savingsB = 59.99 - totalAmount;
            double savingsC = 69.99 - totalAmount;

            cout << "Your total monthly bill is: $" << totalAmount << endl;

            if (savingsB > 0) {
                cout << "You could save $" << fixed << setprecision(2) << savingsB << " by switching to Package B." << endl;
            }

            if (savingsC > 0) {
                cout << "You could save $" << fixed << setprecision(2) << savingsC << " by switching to Package C." << endl;
            }
            break;

        case 'B':
            totalAmount = 59.99;
            if (minutes > 900) {
                totalAmount += (minutes - 900) * 0.40;
            }

            // Calculate savings for Package C
            double savingsC_B = 69.99 - totalAmount;

            cout << "Your total monthly bill is: $" << totalAmount << endl;

            if (savingsC_B > 0) {
                cout << "You could save $" << fixed << setprecision(2) << savingsC_B << " by switching to Package C." << endl;
            }
            break;

        case 'C':
            totalAmount = 69.99;
            cout << "Your total monthly bill is: $" << totalAmount << endl;
            break;
    }

    return 0;
}
