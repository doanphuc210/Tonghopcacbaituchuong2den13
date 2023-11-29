#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance, balance, monthlyInterestRate;
    int months;
    double totalDeposits = 0, totalWithdrawals = 0, totalInterestEarned = 0;

    // Input the annual interest rate, starting balance, and number of months.
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> annualInterestRate;
    cout << "Enter the starting balance: ";
    cin >> startingBalance;
    cout << "Enter the number of months: ";
    cin >> months;

    balance = startingBalance;
    monthlyInterestRate = annualInterestRate / 12 / 100; // Convert annual rate to monthly decimal

    for (int month = 1; month <= months; month++) {
        double deposit, withdrawal;

        // Input monthly deposit (positive amount).
        cout << "Enter the amount deposited in month " << month << ": ";
        cin >> deposit;
        while (deposit < 0) {
            cout << "Please enter a non-negative deposit: ";
            cin >> deposit;
        }
        totalDeposits += deposit;
        balance += deposit;

        // Input monthly withdrawal (positive amount).
        cout << "Enter the amount withdrawn in month " << month << ": ";
        cin >> withdrawal;
        while (withdrawal < 0) {
            cout << "Please enter a non-negative withdrawal: ";
            cin >> withdrawal;
        }
        totalWithdrawals += withdrawal;
        balance -= withdrawal;

        // Calculate monthly interest and add it to the balance.
        double monthlyInterest = balance * monthlyInterestRate;
        balance += monthlyInterest;
        totalInterestEarned += monthlyInterest;
    }

    // Display the ending balance and summary.
    cout << "Ending Balance: " << balance << endl;
    cout << "Total Deposits: " << totalDeposits << endl;
    cout << "Total Withdrawals: " << totalWithdrawals << endl;
    cout << "Total Interest Earned: " << totalInterestEarned << endl;

    return 0;
}
