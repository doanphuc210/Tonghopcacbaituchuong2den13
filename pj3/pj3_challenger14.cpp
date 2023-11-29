#include <iostream>
#include <string>
#include <iomanip> // For formatting
using namespace std;

int main() {
    const double STATE_SALES_TAX_RATE = 0.04;
    const double COUNTY_SALES_TAX_RATE = 0.02;
    const double TOTAL_SALES_TAX_RATE = 0.06;

    string month;
    int year;
    double totalCollected;

    cout << "Enter the month: ";
    getline(cin, month);
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total amount collected: $";
    cin >> totalCollected;

    // Calculate sales and taxes
    double sales = totalCollected / (1 + TOTAL_SALES_TAX_RATE);
    double countySalesTax = sales * COUNTY_SALES_TAX_RATE;
    double stateSalesTax = sales * STATE_SALES_TAX_RATE;
    double totalSalesTax = countySalesTax + stateSalesTax;

    // Display the report
    cout << fixed << setprecision(2);
    cout << "Month: " << month << endl;
    cout << "---------------------" << endl;
    cout << "Total Collected: $" << totalCollected << endl;
    cout << "Sales: $" << sales << endl;
    cout << "County Sales Tax: $" << countySalesTax << endl;
    cout << "State Sales Tax: $" << stateSalesTax << endl;
    cout << "Total Sales Tax: $" << totalSalesTax << endl;

    return 0;
}
