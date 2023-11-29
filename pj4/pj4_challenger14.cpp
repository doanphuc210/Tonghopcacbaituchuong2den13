#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double beginningBalance;
    int numberOfChecks;
    double serviceFees = 10.0;

    // Ask the user for the beginning balance and number of checks written
    cout << "Enter the beginning balance: $";
    cin >> beginningBalance;
    cout << "Enter the number of checks written: ";
    cin >> numberOfChecks;

    // Input validation: Check for negative values
    if (beginningBalance < 0 || numberOfChecks < 0) {
        cout << "Account is overdrawn or invalid input. Exiting the program." << endl;
        return 1;
    }

    // Apply service fees based on the number of checks written
    if (beginningBalance < 400) {
        serviceFees += 15.0;
    }

    if (numberOfChecks < 20) {
        serviceFees += numberOfChecks * 0.10;
    } else if (numberOfChecks >= 20 && numberOfChecks <= 39) {
        serviceFees += numberOfChecks * 0.08;
    } else if (numberOfChecks >= 40 && numberOfChecks <= 59) {
        serviceFees += numberOfChecks * 0.06;
    } else {
        serviceFees += numberOfChecks * 0.04;
    }

    // Display the total service fees
    cout << fixed << setprecision(2);
    cout << "Total service fees for the month: $" << serviceFees << endl;

    return 0;
}
