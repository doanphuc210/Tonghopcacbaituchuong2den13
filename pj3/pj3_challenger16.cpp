#include <iostream>
using namespace std;

int main() {
    const double SENIOR_EXEMPTION = 5000.0;
    
    double actualValue, taxRate;
    
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;
    
    cout << "Enter the current tax rate (in dollars for each $100 of assessed value): ";
    cin >> taxRate;
    
    // Calculate the assessed value with the exemption
    double assessedValue = actualValue * 0.6 - SENIOR_EXEMPTION;
    
    // Calculate the annual property tax
    double annualPropertyTax = (assessedValue / 100.0) * taxRate;
    
    // Calculate the quarterly tax bill
    double quarterlyTaxBill = annualPropertyTax / 4.0;
    
    cout << "Annual Property Tax: $" << annualPropertyTax << endl;
    cout << "Quarterly Tax Bill: $" << quarterlyTaxBill << endl;
    
    return 0;
}
