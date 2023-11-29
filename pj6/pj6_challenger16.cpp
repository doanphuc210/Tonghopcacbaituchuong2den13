#include <iostream>
using namespace std;

// Function prototype
double calculatePopulationSize(double population, double birthRate, double deathRate);

int main() {
    double population, birthRate, deathRate;
    int years;

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

    cout << "Enter the number of years to display: ";
    cin >> years;

    while (years < 1) {
        cout << "Number of years cannot be less than 1. Please enter again: ";
        cin >> years;
    }

    // Calculate and display population for each year
    for (int year = 1; year <= years; year++) {
        population = calculatePopulationSize(population, birthRate, deathRate);
        cout << "Population after " << year << " year(s): " << population << endl;
    }

    return 0;
}

// Function to calculate population size for a year
double calculatePopulationSize(double population, double birthRate, double deathRate) {
    return population + (birthRate / 100 * population) - (deathRate / 100 * population);
}
