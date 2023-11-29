#include <iostream>
#include <fstream>
using namespace std;

const int NUM_MONTHS = 3;
const int NUM_DAYS = 30;

int main() {
    char weatherData[NUM_MONTHS][NUM_DAYS];

    // Read weather data from the file
    ifstream inputFile("RainOrShine.txt");
    if (!inputFile) {
        cerr << "Failed to open the input file." << endl;
        return 1;
    }

    for (int month = 0; month < NUM_MONTHS; month++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            inputFile >> weatherData[month][day];
        }
    }
    inputFile.close();

    // Initialize counters for rainy, cloudy, and sunny days
    int rainyCount[NUM_MONTHS] = {0};
    int cloudyCount[NUM_MONTHS] = {0};
    int sunnyCount[NUM_MONTHS] = {0};

    // Calculate the number of each type of day for each month
    for (int month = 0; month < NUM_MONTHS; month++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            char weather = weatherData[month][day];
            if (weather == 'R') {
                rainyCount[month]++;
            } else if (weather == 'C') {
                cloudyCount[month]++;
            } else if (weather == 'S') {
                sunnyCount[month]++;
            }
        }
    }

    // Calculate the total counts for the three months
    int totalRainy = 0;
    int totalCloudy = 0;
    int totalSunny = 0;

    for (int month = 0; month < NUM_MONTHS; month++) {
        totalRainy += rainyCount[month];
        totalCloudy += cloudyCount[month];
        totalSunny += sunnyCount[month];
    }

    // Determine which month had the largest number of rainy days
    int maxRainyMonth = 0;
    for (int month = 1; month < NUM_MONTHS; month++) {
        if (rainyCount[month] > rainyCount[maxRainyMonth]) {
            maxRainyMonth = month;
        }
    }

    // Display the weather statistics
    const char* months[] = { "June", "July", "August" };

    for (int month = 0; month < NUM_MONTHS; month++) {
        cout << "In " << months[month] << ":\n";
        cout << "Rainy days: " << rainyCount[month] << " days\n";
        cout << "Cloudy days: " << cloudyCount[month] << " days\n";
        cout << "Sunny days: " << sunnyCount[month] << " days\n";
        cout << endl;
    }

    cout << "For the three-month period:\n";
    cout << "Total rainy days: " << totalRainy << " days\n";
    cout << "Total cloudy days: " << totalCloudy << " days\n";
    cout << "Total sunny days: " << totalSunny << " days\n";
    cout << "The month with the most rainy days is " << months[maxRainyMonth] << endl;

    return 0;
}
