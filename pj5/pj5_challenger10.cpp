#include <iostream>

using namespace std;

int main() {
  // Declare variables
  int number_of_years, month, year;
  float total_rainfall = 0.0, average_rainfall = 0.0;

  // Prompt the user for the number of years
  cout << "How many years do you want to calculate the average rainfall for? ";
  cin >> number_of_years;

  // Validate the number of years
  while (number_of_years < 1) {
    cout << "Invalid input. The number of years must be at least 1." << endl;
    cout << "How many years do you want to calculate the average rainfall for? ";
    cin >> number_of_years;
  }

  // Iterate over each year
  for (year = 1; year <= number_of_years; year++) {
    // Initialize the total rainfall for the year
    float year_total_rainfall = 0.0;

    // Iterate over each month in the year
    for (month = 1; month <= 12; month++) {
      // Prompt the user for the inches of rainfall for the month
      cout << "Enter the inches of rainfall for month " << month << " of year " << year << ": ";
      cin >> year_total_rainfall;

      // Validate the monthly rainfall
      while (year_total_rainfall < 0.0) {
        cout << "Invalid input. The monthly rainfall must be non-negative." << endl;
        cout << "Enter the inches of rainfall for month " << month << " of year " << year << ": ";
        cin >> year_total_rainfall;
      }

      // Update the total rainfall for the entire period
      total_rainfall += year_total_rainfall;
    }
  }

  // Calculate the average rainfall
  average_rainfall = total_rainfall / (number_of_years * 12.0f);

  // Display the results
  cout << "The total number of months is " << number_of_years * 12 << endl;
  cout << "The total inches of rainfall is " << total_rainfall << endl;
  cout << "The average rainfall per month is " << average_rainfall << " inches." << endl;

  return 0;
}
