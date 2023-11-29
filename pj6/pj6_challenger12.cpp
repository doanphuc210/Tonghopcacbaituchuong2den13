#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the future value
double futureValue(double presentValue, double monthlyInterestRate, int months) {
    return presentValue * pow(1 + monthlyInterestRate, months);
}

int main() {
    double presentValue, annualInterestRate;
    int months;

    cout << "This program calculates the future value of a savings account with compound monthly interest.\n";
    cout << "Enter the present value of the account: $";
    cin >> presentValue;
    cout << "Enter the annual interest rate (in decimal form): ";
    cin >> annualInterestRate;
    cout << "Enter the number of months: ";
    cin >> months;

    // Calculate the monthly interest rate
    double monthlyInterestRate = annualInterestRate / 12.0;

    // Call the futureValue function to calculate the future value
    double futureVal = futureValue(presentValue, monthlyInterestRate, months);

    cout << "The future value of the account after " << months << " months is: $" << futureVal << endl;

    return 0;
}
