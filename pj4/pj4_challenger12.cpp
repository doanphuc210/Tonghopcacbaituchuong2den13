#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double PACKAGE_PRICE = 99.0;

    int quantity;
    double totalCost;

    // Ask the user for the number of units sold
    cout << "Enter the number of units sold: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Please enter a valid quantity (greater than 0)." << endl;
        return 1;
    }

    // Calculate the total cost with discounts
    if (quantity >= 10 && quantity <= 19) {
        totalCost = quantity * PACKAGE_PRICE * 0.8; // 20% discount
    } else if (quantity >= 20 && quantity <= 49) {
        totalCost = quantity * PACKAGE_PRICE * 0.7; // 30% discount
    } else if (quantity >= 50 && quantity <= 99) {
        totalCost = quantity * PACKAGE_PRICE * 0.6; // 40% discount
    } else if (quantity >= 100) {
        totalCost = quantity * PACKAGE_PRICE * 0.5; // 50% discount
    } else {
        totalCost = quantity * PACKAGE_PRICE; // No discount
    }

    // Display the total cost
    cout << fixed << setprecision(2);
    cout << "The total cost of the purchase is: $" << totalCost << endl;

    return 0;
}
