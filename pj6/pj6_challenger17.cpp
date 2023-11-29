#include <iostream>
using namespace std;

// Function prototype
double calculatePopulationSize(double population, double birthRate, double deathRate, double arrivals, double departures);

int main() {
    double population, birthRate, deathRate, arrivals, departures;
    int years, numYears;

    // Get user input
    cout << "Enter the starting size of the population: ";
    cin >> population;

    while (population < 2) {
        cout << "Starting size cannot be less than 2. Please enter again: ";
        cin >> population;
    }

    cout << "Enter the annual birth rate (as a percentage): ";
    cin >> birthRate;

    while (birthRate < 0) {
        cout << "Birth rate cannot be negative. Please enter again: ";
        cin >> birthRate;
    }

    cout << "Enter the annual death rate (as a percentage): ";
    cin >> deathRate;

    while (deathRate < 0) {
        cout << "Death rate cannot be negative. Please enter again: ";
        cin >> deathRate;
    }

    cout << "Enter the number of individuals typically arriving each year: ";
    cin >> arrivals;

    while (arrivals < 0) {
        cout << "Arrivals cannot be negative. Please enter again: ";
        cin >> arrivals;
    }

    cout << "Enter the number of individuals typically departing each year: ";
    cin >> departures;

    while (departures < 0) {
        cout << "Departures cannot be negative. Please enter again: ";
        cin >> departures;
    }

    cout << "Enter the number of years to project: ";
    cin >> numYears;

    while (numYears < 1) {
        cout << "Number of years to project cannot be less than 1. Please enter again: ";
        cin >> numYears;
    }

    // Calculate and display population for each projected year
    for (int year = 1; year <= numYears; year++) {
        population = calculatePopulationSize(population, birthRate, deathRate, arrivals, departures);
        cout << "Population after " << year << " year(s): " << population << endl;
    }

    return 0;
}

// Function to calculate population size for a year
double calculatePopulationSize(double population, double birthRate, double deathRate, double arrivals, double departures) {
    double netMigration = arrivals - departures;
    return population + (birthRate / 100 * population) - (deathRate / 100 * population) + netMigration;
}
