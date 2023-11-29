#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double loanAmount, annualInterestRate, monthlyInterestRate, monthlyPayment;
    int numberOfPayments;

    cout << "Enter the loan amount: $";
    cin >> loanAmount;

    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> annualInterestRate;
    monthlyInterestRate = annualInterestRate / 12 / 100.0;  // Convert annual rate to monthly rate

    cout << "Enter the number of payments: ";
    cin >> numberOfPayments;

    monthlyPayment = loanAmount * monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments)
                     / (pow(1 + monthlyInterestRate, numberOfPayments) - 1);

    double amountPaidBack = monthlyPayment * numberOfPayments;
    double interestPaid = amountPaidBack - loanAmount;

    cout << fixed << setprecision(2);
    cout << "Loan Amount: $" << loanAmount << endl;
    cout << "Monthly Interest Rate: " << monthlyInterestRate * 100 << "%" << endl;
    cout << "Number of Payments: " << numberOfPayments << endl;
    cout << "Monthly Payment: $" << monthlyPayment << endl;
    cout << "Amount Paid Back: $" << amountPaidBack << endl;
    cout << "Interest Paid: $" << interestPaid << endl;

    return 0;
}
