#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the present value
double presentValue(double futureValue, double annualInterestRate, int years) {
    return futureValue / pow(1 + annualInterestRate, years);
}

int main() {
    double futureValue, annualInterestRate;
    int years;

    cout << "This program calculates the present value needed to reach a future value.\n";
    cout << "Enter the desired future value: $";
    cin >> futureValue;
    cout << "Enter the annual interest rate (in decimal form): ";
    cin >> annualInterestRate;
    cout << "Enter the number of years: ";
    cin >> years;

    // Call the presentValue function to calculate the present value
    double presentVal = presentValue(futureValue, annualInterestRate, years);

    cout << "You need to deposit $" << presentVal << " today to reach a future value of $" << futureValue << " in " << years << " years.\n";

    return 0;
}
