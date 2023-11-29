#include <iostream>
#include <iomanip>
using namespace std;

// Structures
struct HourlyPaid {
    double hoursWorked;
    double hourlyRate;
};

struct Salaried {
    double salary;
    double bonus;
};

// Union
union Worker {
    HourlyPaid hourlyWorker;
    Salaried salariedWorker;
};

// Function prototypes
double calculateHourlyPay(const HourlyPaid& hourlyWorker);
double calculateSalariedPay(const Salaried& salariedWorker);

int main() {
    // Declare a variable of the union type
    Worker worker;

    // Ask the user whether it's an hourly paid or salaried worker
    char workerType;
    cout << "Enter 'H' for hourly paid worker or 'S' for salaried worker: ";
    cin >> workerType;

    // Input validation
    if (workerType != 'H' && workerType != 'S') {
        cout << "Invalid input. Exiting program." << endl;
        return 1;
    }

    // Get input based on the worker type
    if (workerType == 'H') {
        cout << "Enter hours worked: ";
        cin >> worker.hourlyWorker.hoursWorked;

        // Input validation
        if (worker.hourlyWorker.hoursWorked < 0 || worker.hourlyWorker.hoursWorked > 80) {
            cout << "Invalid input for hours worked. Exiting program." << endl;
            return 1;
        }

        cout << "Enter hourly rate: ";
        cin >> worker.hourlyWorker.hourlyRate;

        // Input validation
        if (worker.hourlyWorker.hourlyRate < 0) {
            cout << "Invalid input for hourly rate. Exiting program." << endl;
            return 1;
        }

        // Calculate and display pay
        cout << fixed << setprecision(2);
        cout << "Hourly paid worker's pay: $" << calculateHourlyPay(worker.hourlyWorker) << endl;
    } else if (workerType == 'S') {
        cout << "Enter salary: ";
        cin >> worker.salariedWorker.salary;

        // Input validation
        if (worker.salariedWorker.salary < 0) {
            cout << "Invalid input for salary. Exiting program." << endl;
            return 1;
        }

        cout << "Enter bonus: ";
        cin >> worker.salariedWorker.bonus;

        // Input validation
        if (worker.salariedWorker.bonus < 0) {
            cout << "Invalid input for bonus. Exiting program." << endl;
            return 1;
        }

        // Calculate and display pay
        cout << fixed << setprecision(2);
        cout << "Salaried worker's pay: $" << calculateSalariedPay(worker.salariedWorker) << endl;
    }

    return 0;
}

// Function to calculate hourly paid worker's pay
double calculateHourlyPay(const HourlyPaid& hourlyWorker) {
    return hourlyWorker.hoursWorked * hourlyWorker.hourlyRate;
}

// Function to calculate salaried worker's pay
double calculateSalariedPay(const Salaried& salariedWorker) {
    return salariedWorker.salary + salariedWorker.bonus;
}
