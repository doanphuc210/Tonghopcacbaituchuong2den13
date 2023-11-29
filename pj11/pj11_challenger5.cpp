#include <iostream>
#include <string>
using namespace std;

// Define an enumerated data type for months
enum Month
{
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

// Define the structure for weather data
struct WeatherData
{
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

// Function to input weather data for a month
void inputWeatherData(WeatherData &month)
{
    // Input rainfall for the month
    cout << "Enter total rainfall for the month: ";
    cin >> month.totalRainfall;

    // Input high temperature for the month
    cout << "Enter high temperature for the month: ";
    cin >> month.highTemperature;

    // Input low temperature for the month
    cout << "Enter low temperature for the month: ";
    cin >> month.lowTemperature;

    // Input average temperature for the month
    cout << "Enter average temperature for the month: ";
    cin >> month.averageTemperature;

    // Validate temperature input
    if (month.highTemperature < -100 || month.highTemperature > 140 ||
        month.lowTemperature < -100 || month.lowTemperature > 140 ||
        month.averageTemperature < -100 || month.averageTemperature > 140)
    {
        cout << "Invalid temperature input. Please re-enter data for the month.\n";
        inputWeatherData(month); // Recursively call the function for re-entry
    }
}

int main()
{
    const int numMonths = 12;
    WeatherData yearlyData[numMonths];

    // Input weather data for each month using the enumerated type
    for (int i = 0; i < numMonths; ++i)
    {
        cout << "\nEnter weather data for " << static_cast<Month>(i) << ":\n";
        inputWeatherData(yearlyData[i]);
    }

    // Calculate and display statistics
    double totalYearlyRainfall = 0;
    double highestTemperature = yearlyData[0].highTemperature;
    double lowestTemperature = yearlyData[0].lowTemperature;
    double totalAverageTemperature = 0;

    int highestTempMonth = 1;
    int lowestTempMonth = 1;

    for (int i = 0; i < numMonths; ++i)
    {
        totalYearlyRainfall += yearlyData[i].totalRainfall;

        if (yearlyData[i].highTemperature > highestTemperature)
        {
            highestTemperature = yearlyData[i].highTemperature;
            highestTempMonth = i + 1;
        }

        if (yearlyData[i].lowTemperature < lowestTemperature)
        {
            lowestTemperature = yearlyData[i].lowTemperature;
            lowestTempMonth = i + 1;
        }

        totalAverageTemperature += yearlyData[i].averageTemperature;
    }

    double averageMonthlyRainfall = totalYearlyRainfall / numMonths;
    double averageMonthlyTemperature = totalAverageTemperature / numMonths;

    cout << "\nStatistics for the year:\n";
    cout << "Average Monthly Rainfall: " << averageMonthlyRainfall << " inches\n";
    cout << "Total Yearly Rainfall: " << totalYearlyRainfall << " inches\n";
    cout << "Highest Temperature: " << highestTemperature << " (Month " << highestTempMonth << ")\n";
    cout << "Lowest Temperature: " << lowestTemperature << " (Month " << lowestTempMonth << ")\n";
    cout << "Average Monthly Temperature: " << averageMonthlyTemperature << " degrees Fahrenheit\n";

    return 0;
}
