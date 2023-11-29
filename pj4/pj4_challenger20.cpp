#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double SPEED_AIR = 1100.0;  // feet per second
    const double SPEED_WATER = 4900.0;  // feet per second
    const double SPEED_STEEL = 16400.0;  // feet per second

    char choice;
    double distance, time;

    cout << "Select a medium (a for air, w for water, s for steel): ";
    cin >> choice;

    if (choice == 'a' || choice == 'A') {
        cout << "Enter the distance in feet: ";
        cin >> distance;
        if (distance < 0) {
            cout << "Distance cannot be negative." << endl;
        } else {
            time = distance / SPEED_AIR;
            cout << "It will take " << fixed << setprecision(4) << time << " seconds." << endl;
        }
    } else if (choice == 'w' || choice == 'W') {
        cout << "Enter the distance in feet: ";
        cin >> distance;
        if (distance < 0) {
            cout << "Distance cannot be negative." << endl;
        } else {
            time = distance / SPEED_WATER;
            cout << "It will take " << fixed << setprecision(4) << time << " seconds." << endl;
        }
    } else if (choice == 's' || choice == 'S') {
        cout << "Enter the distance in feet: ";
        cin >> distance;
        if (distance < 0) {
            cout << "Distance cannot be negative." << endl;
        } else {
            time = distance / SPEED_STEEL;
            cout << "It will take " << fixed << setprecision(4) << time << " seconds." << endl;
        }
    } else {
        cout << "Invalid choice. Please select a valid medium (a, w, or s)." << endl;
    }

    return 0;
}
