#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string month;
    int minutes;

    cout << "Enter the name of the month: ";
    cin >> month;

    int daysInMonth;
    int maxMinutesInMonth;

    if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December") {
        daysInMonth = 31;
        maxMinutesInMonth = 744;
    }
    else if (month == "April" || month == "June" || month == "September" || month == "November") {
        daysInMonth = 30;
        maxMinutesInMonth = 720;
    }
    else if (month == "February") {
        daysInMonth = 28;
        maxMinutesInMonth = 672;
    }
    else {
        cout << "Invalid month name. Please enter a valid month name." << endl;
        return 1;
    }

    cout << "Enter the number of minutes used: ";
    cin >> minutes;

    if (minutes < 0) {
        cout << "Invalid input. Minutes cannot be negative." << endl;
        return 1;
    }

    if (minutes > maxMinutesInMonth) {
        cout << "Invalid input. The maximum minutes for " << month << " is " << maxMinutesInMonth << "." << endl;
        return 1;
    }

    char package;
    double totalAmount = 0.0;

    cout << "Select your package (A, B, or C): ";
    cin >> package;

    if (package != 'A' && package != 'B' && package != 'C') {
        cout << "Invalid package selection. Please choose A, B, or C." << endl;
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
        default:
            cout << "Invalid package selection. Please choose A, B, or C." << endl;
            return 1;
    }

    cout << "Your total monthly bill is: $" << fixed << setprecision(2) << totalAmount << endl;

    return 0;
}
