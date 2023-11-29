#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter a month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a month in the range 1-12.\n";
        return 1;
    }

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        // Leap year
        int daysInMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        cout << daysInMonth[month] << " days" << endl;
    } else {
        // Non-leap year
        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        cout << daysInMonth[month] << " days" << endl;
    }

    return 0;
}
