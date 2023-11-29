#include <iostream>
using namespace std;

int main() {
    int month, day, year;

    // Ask the user to enter a month, day, and two-digit year
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a day (1-31): ";
    cin >> day;
    cout << "Enter a two-digit year: ";
    cin >> year;

    // Check if the date is "magic"
    if (month >= 1 && month <= 12 && day >= 1 && day <= 31 && year >= 0 && year <= 99) {
        if (month * day == year) {
            cout << "The date is magic!" << endl;
        } else {
            cout << "The date is not magic." << endl;
        }
    } else {
        cout << "Invalid input. Please enter a valid date." << endl;
    }

    return 0;
}
