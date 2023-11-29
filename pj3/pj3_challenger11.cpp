#include <iostream>
using namespace std;

int main() {
    double loanPayment, insurance, gas, oil, tires, maintenance;

    // Get input for monthly expenses
    cout << "Enter the monthly loan payment: $";
    cin >> loanPayment;
    cout << "Enter the monthly insurance cost: $";
    cin >> insurance;
    cout << "Enter the monthly gas cost: $";
    cin >> gas;
    cout << "Enter the monthly oil cost: $";
    cin >> oil;
    cout << "Enter the monthly tires cost: $";
    cin >> tires;
    cout << "Enter the monthly maintenance cost: $";
    cin >> maintenance;

    // Calculate monthly and annual totals
    double monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
    double annualTotal = monthlyTotal * 12;

    // Display the results
    cout << "\nTotal monthly expenses: $" << monthlyTotal << endl;
    cout << "Total annual expenses: $" << annualTotal << endl;

    return 0;
}
