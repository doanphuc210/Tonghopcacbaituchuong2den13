#include <iostream>
using namespace std;

int main() {
    int startingPopulation, days;
    double dailyIncrease;

    // Input for starting population with validation
    do {
        cout << "Enter the starting population (must be 2 or more): ";
        cin >> startingPopulation;
    } while (startingPopulation < 2);

    // Input for daily population increase with validation
    do {
        cout << "Enter the average daily population increase (as a percentage, must be positive): ";
        cin >> dailyIncrease;
    } while (dailyIncrease < 0);

    // Input for the number of days to multiply with validation
    do {
        cout << "Enter the number of days they will multiply (must be 1 or more): ";
        cin >> days;
    } while (days < 1);

    // Calculate and display population for each day
    cout << "Day 0: " << startingPopulation << " organisms" << endl;
    for (int day = 1; day <= days; day++) {
        startingPopulation += (startingPopulation * dailyIncrease / 100);
        cout << "Day " << day << ": " << startingPopulation << " organisms" << endl;
    }

    return 0;
}
