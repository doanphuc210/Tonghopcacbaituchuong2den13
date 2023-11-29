#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges);
double calculateCharges(double medicationCharges, double serviceCharges);

int main() {
    char patientType;
    int days;
    double dailyRate, medicationCharges, serviceCharges;

    cout << "Enter the patient type (I for in-patient, O for out-patient): ";
    cin >> patientType;

    if (patientType == 'I' || patientType == 'i') {
        cout << "Enter the number of days spent in the hospital: ";
        cin >> days;

        while (days < 0) {
            cout << "Number of days cannot be negative. Please enter again: ";
            cin >> days;
        }

        cout << "Enter the daily rate: $";
        cin >> dailyRate;

        while (dailyRate < 0) {
            cout << "Daily rate cannot be negative. Please enter again: $";
            cin >> dailyRate;
        }

        cout << "Enter hospital medication charges: $";
        cin >> medicationCharges;

        while (medicationCharges < 0) {
            cout << "Medication charges cannot be negative. Please enter again: $";
            cin >> medicationCharges;
        }

        cout << "Enter charges for hospital services: $";
        cin >> serviceCharges;

        while (serviceCharges < 0) {
            cout << "Service charges cannot be negative. Please enter again: $";
            cin >> serviceCharges;
        }

        double totalCharges = calculateCharges(days, dailyRate, medicationCharges, serviceCharges);
        cout << fixed << setprecision(2) << "Total charges: $" << totalCharges << endl;
    } else if (patientType == 'O' || patientType == 'o') {
        cout << "Enter hospital medication charges: $";
        cin >> medicationCharges;

        while (medicationCharges < 0) {
            cout << "Medication charges cannot be negative. Please enter again: $";
            cin >> medicationCharges;
        }

        cout << "Enter charges for hospital services: $";
        cin >> serviceCharges;

        while (serviceCharges < 0) {
            cout << "Service charges cannot be negative. Please enter again: $";
            cin >> serviceCharges;
        }

        double totalCharges = calculateCharges(medicationCharges, serviceCharges);
        cout << fixed << setprecision(2) << "Total charges: $" << totalCharges << endl;
    } else {
        cout << "Invalid patient type. Please enter 'I' for in-patient or 'O' for out-patient." << endl;
    }

    return 0;
}

// Function to calculate in-patient charges
double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges) {
    return (days * dailyRate) + medicationCharges + serviceCharges;
}

// Function to calculate out-patient charges
double calculateCharges(double medicationCharges, double serviceCharges) {
    return medicationCharges + serviceCharges;
}
