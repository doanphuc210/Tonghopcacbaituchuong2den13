#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_MONTHS = 12;
    double rainfall[NUM_MONTHS];
    string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    // Input the monthly rainfall figures
    for (int i = 0; i < NUM_MONTHS; i++) {
        do {
            cout << "Enter the total rainfall for " << months[i] << ": ";
            cin >> rainfall[i];
            if (rainfall[i] < 0) {
                cout << "Please enter a non-negative value." << endl;
            }
        } while (rainfall[i] < 0);
    }

    // Calculate the total rainfall for the year
    double totalRainfall = 0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        totalRainfall += rainfall[i];
    }

    // Calculate the average monthly rainfall
    double averageRainfall = totalRainfall / NUM_MONTHS;

    // Find the month with the highest and lowest rainfall
    int highestMonth = 0;
    int lowestMonth = 0;
    for (int i = 1; i < NUM_MONTHS; i++) {
        if (rainfall[i] > rainfall[highestMonth]) {
            highestMonth = i;
        }
        if (rainfall[i] < rainfall[lowestMonth]) {
            lowestMonth = i;
        }
    }

    // Display the results
    cout << "Total annual rainfall: " << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " inches" << endl;
    cout << "Month with the highest rainfall: " << months[highestMonth] << " (" << rainfall[highestMonth] << " inches)" << endl;
    cout << "Month with the lowest rainfall: " << months[lowestMonth] << " (" << rainfall[lowestMonth] << " inches)" << endl;

    return 0;
}
