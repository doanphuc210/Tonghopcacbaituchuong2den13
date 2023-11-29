#include <iostream>
using namespace std;

int main() {
    const double ASSESSMENT_PERCENT = 0.60; // 60%
    const double PROPERTY_TAX_RATE = 0.0075; // $0.75 for each $100

    double actualValue;

    cout << "Enter the actual value of the property: $";
    cin >> actualValue;

    // Calculate the assessment value
    double assessmentValue = actualValue * ASSESSMENT_PERCENT;

    // Calculate the property tax
    double propertyTax = assessmentValue * PROPERTY_TAX_RATE;

    cout << "Assessment Value: $" << assessmentValue << endl;
    cout << "Property Tax: $" << propertyTax << endl;

    return 0;
}
