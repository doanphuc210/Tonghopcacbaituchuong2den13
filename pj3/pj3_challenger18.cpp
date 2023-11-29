#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, interest, amount;
    int timesCompounded;

    cout << "Enter the principal amount: $";
    cin >> principal;

    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate;
    rate /= 100.0;  // Convert the rate to a decimal

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    amount = principal * pow(1 + rate / timesCompounded, timesCompounded);
    interest = amount - principal;

    cout << fixed << setprecision(2);
    cout << "Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}
