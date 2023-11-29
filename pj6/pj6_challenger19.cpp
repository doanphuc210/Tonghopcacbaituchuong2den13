#include <iostream>
#include <fstream>
using namespace std;

// Function prototypes
void getDataInPatient(int& days, double& dailyRate, double& medication, double& services);
void getDataOutPatient(double& medication, double& services);
double calculateChargesInPatient(int days, double dailyRate, double medication, double services);
double calculateChargesOutPatient(double medication, double services);
void writeReport(double totalCharges);

int main() {
    int choice;
    double totalCharges;

    // Open the output file
    ofstream outputFile("hospital_report.txt");

    do {
        // Display menu
        cout << "Hospital Stay Calculator\n";
        cout << "1. In-Patient\n";
        cout << "2. Out-Patient\n";
        cout << "3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int days;
                double dailyRate, medication, services;
                getDataInPatient(days, dailyRate, medication, services);
                totalCharges = calculateChargesInPatient(days, dailyRate, medication, services);
                break;
            }
            case 2: {
                double medication, services;
                getDataOutPatient(medication, services);
                totalCharges = calculateChargesOutPatient(medication, services);
                break;
            }
            case 3:
                cout << "Program ending.\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
                continue;
        }

        // Display and write the report
        cout << "Total Charges: $" << totalCharges << endl;
        writeReport(totalCharges);

    } while (choice != 3);

    // Close the output file
    outputFile.close();

    return 0;
}

void getDataInPatient(int& days, double& dailyRate, double& medication, double& services) {
    // Implement this function to get input from the user for in-patient data
    // Similar to the original program
}

void getDataOutPatient(double& medication, double& services) {
    // Implement this function to get input from the user for out-patient data
    // Similar to the original program
}

double calculateChargesInPatient(int days, double dailyRate, double medication, double services) {
    // Implement this function to calculate charges for in-patient
    // Similar to the original program
}

double calculateChargesOutPatient(double medication, double services) {
    // Implement this function to calculate charges for out-patient
    // Similar to the original program
}

void writeReport(double totalCharges) {
    // Write the report to the output file
    ofstream outputFile("hospital_report.txt", ios::app); // Append mode
    outputFile << "Total Charges: $" << totalCharges << endl;
    outputFile.close();
}
