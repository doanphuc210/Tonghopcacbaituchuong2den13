#include <iostream>
using namespace std;

int main() {
    double gallons, miles;

    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> gallons;

    cout << "Enter the number of miles the car can be driven on a full tank: ";
    cin >> miles;

    if (gallons <= 0) {
        cout << "Please enter a valid number of gallons." << endl;
    } else {
        double mileage = miles / gallons;

        if (mileage < 0) {
            cout << "Invalid input. The mileage cannot be negative." << endl;
        } else {
            cout << "The car's gas mileage is " << mileage << " miles per gallon." << endl;
        }
    }

    return 0;
}
