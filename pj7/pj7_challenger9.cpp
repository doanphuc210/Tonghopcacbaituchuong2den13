#include <iostream>

using namespace std;

// Constants
const int NUM_EMPLOYEES = 7;

// Arrays
long empId[NUM_EMPLOYEES] = {5658845, 4520125, 7895122, 8777541,
                             8451277, 1302850, 7580489};
int hours[NUM_EMPLOYEES];
double payRate[NUM_EMPLOYEES];
double wages[NUM_EMPLOYEES];

// Function prototypes
void validateInput(int &hours, double &payRate);
void calculateGrossWages(int hours, double payRate, double &wages);
void displayResults();

int main() {

  // Get the hours and pay rate for each employee
  for (int i = 0; i < NUM_EMPLOYEES; i++) {
    cout << "Enter the hours worked by employee " << empId[i] << ": ";
    cin >> hours[i];
    validateInput(hours[i], payRate[i]);

    cout << "Enter the pay rate for employee " << empId[i] << ": ";
    cin >> payRate[i];
    validateInput(hours[i], payRate[i]);
  }

  // Calculate the gross wages for each employee
  for (int i = 0; i < NUM_EMPLOYEES; i++) {
    calculateGrossWages(hours[i], payRate[i], wages[i]);
  }

  // Display the results
  displayResults();

  return 0;
}

void validateInput(int &hours, double &payRate) {
  // Do not accept negative values for hours
  while (hours < 0) {
    cout << "Hours cannot be negative. Please enter a valid value: ";
    cin >> hours;
  }

  // Do not accept numbers less than 15.00 for pay rate
  while (payRate < 15.00) {
    cout << "Pay rate cannot be less than 15.00. Please enter a valid value: ";
    cin >> payRate;
  }
}

void calculateGrossWages(int hours, double payRate, double &wages) {
  wages = hours * payRate;
}

void displayResults() {
  cout << "Employee ID | Gross Wages" << endl;
  cout << "---------|------------" << endl;

  for (int i = 0; i < NUM_EMPLOYEES; i++) {
    cout << empId[i] << " | $" << wages[i] << endl;
  }
}
