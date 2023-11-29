#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double startTime;
    int minutes;

    cout << "Enter the starting time of the call (HH.MM): ";
    cin >> startTime;

    // Extract hours and minutes
    int hours = static_cast<int>(startTime);
    double fractionalMinutes = startTime - hours;
    minutes = static_cast<int>(fractionalMinutes * 100);

    // Validate input
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Invalid time format. Please enter a valid time (HH.MM)." << endl;
        return 1;
    }

    cout << "Enter the number of minutes for the call: ";
    cin >> minutes;

    if (minutes < 0) {
        cout << "Invalid input. Minutes cannot be negative." << endl;
        return 1;
    }

    double rate;

    if (hours >= 0 && hours <= 6) {
        rate = 0.05;
    } else if (hours >= 7 && hours <= 19) {
        rate = 0.45;
    } else {
        rate = 0.20;
    }

    double totalCharge = rate * minutes;

    cout << fixed << setprecision(2);
    cout << "The total charge for the call is: $" << totalCharge << endl;

    return 0;
}
