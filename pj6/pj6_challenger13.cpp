#include <iostream>
using namespace std;

// Function prototypes
int getNumberOfEmployees();
int getTotalDaysAbsent(int numEmployees);
double calculateAverageDaysAbsent(int numEmployees, int totalDaysAbsent);

int main() {
    int numEmployees = getNumberOfEmployees();
    int totalDaysAbsent = getTotalDaysAbsent(numEmployees);
    double averageDaysAbsent = calculateAverageDaysAbsent(numEmployees, totalDaysAbsent);

    cout << "The average number of days absent for " << numEmployees << " employees is: " << averageDaysAbsent << " days" << endl;

    return 0;
}

// Function to get the number of employees (input validation: >= 1)
int getNumberOfEmployees() {
    int numEmployees;
    do {
        cout << "Enter the number of employees in the company (must be at least 1): ";
        cin >> numEmployees;
    } while (numEmployees < 1);
    return numEmployees;
}

// Function to get the total number of days absent for all employees (input validation: >= 0)
int getTotalDaysAbsent(int numEmployees) {
    int totalDaysAbsent = 0;
    for (int i = 1; i <= numEmployees; i++) {
        int daysMissed;
        do {
            cout << "Enter the number of days missed by employee " << i << ": ";
            cin >> daysMissed;
        } while (daysMissed < 0);
        totalDaysAbsent += daysMissed;
    }
    return totalDaysAbsent;
}

// Function to calculate the average number of days absent
double calculateAverageDaysAbsent(int numEmployees, int totalDaysAbsent) {
    return static_cast<double>(totalDaysAbsent) / numEmployees;
}
