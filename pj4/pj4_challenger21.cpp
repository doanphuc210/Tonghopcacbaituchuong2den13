#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double SPEED_CO2 = 258.0;    // meters per second
    const double SPEED_AIR = 331.5;    // meters per second
    const double SPEED_HELIUM = 972.0; // meters per second
    const double SPEED_HYDROGEN = 1270.0; // meters per second

    char choice;
    double time, distance;

    cout << "Select a gas medium (c for carbon dioxide, a for air, h for helium, or g for hydrogen): ";
    cin >> choice;

    if (choice == 'c' || choice == 'C') {
        cout << "Enter the time in seconds (0-30): ";
        cin >> time;
        if (time < 0 || time > 30) {
            cout << "Time should be between 0 and 30 seconds." << endl;
        } else {
            distance = SPEED_CO2 * time;
            cout << "The source of the sound was approximately " << fixed << setprecision(2) << distance << " meters away." << endl;
        }
    } else if (choice == 'a' || choice == 'A') {
        cout << "Enter the time in seconds (0-30): ";
        cin >> time;
        if (time < 0 || time > 30) {
            cout << "Time should be between 0 and 30 seconds." << endl;
        } else {
            distance = SPEED_AIR * time;
            cout << "The source of the sound was approximately " << fixed << setprecision(2) << distance << " meters away." << endl;
        }
    } else if (choice == 'h' || choice == 'H') {
        cout << "Enter the time in seconds (0-30): ";
        cin >> time;
        if (time < 0 || time > 30) {
            cout << "Time should be between 0 and 30 seconds." << endl;
        } else {
            distance = SPEED_HELIUM * time;
            cout << "The source of the sound was approximately " << fixed << setprecision(2) << distance << " meters away." << endl;
        }
    } else if (choice == 'g' || choice == 'G') {
        cout << "Enter the time in seconds (0-30): ";
        cin >> time;
        if (time < 0 || time > 30) {
            cout << "Time should be between 0 and 30 seconds." << endl;
        } else {
            distance = SPEED_HYDROGEN * time;
            cout << "The source of the sound was approximately " << fixed << setprecision(2) << distance << " meters away." << endl;
        }
    } else {
        cout << "Invalid choice. Please select a valid gas medium (c, a, h, or g)." << endl;
    }

    return 0;
}
