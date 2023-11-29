#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double RATE_2_KG_OR_LESS = 1.10;
    const double RATE_OVER_2_KG_6_KG = 2.20;
    const double RATE_OVER_6_KG_10_KG = 3.70;
    const double RATE_OVER_10_KG_20_KG = 4.80;

    double weight, distance, shippingCharges;

    // Ask the user for the weight of the package and the shipping distance
    cout << "Enter the weight of the package (in kilograms): ";
    cin >> weight;
    cout << "Enter the shipping distance (in miles): ";
    cin >> distance;

    // Input validation
    if (weight <= 0 || weight > 20 || distance < 10 || distance > 3000) {
        cout << "Invalid input. Please check weight and distance limits." << endl;
        return 1;
    }

    // Calculate shipping charges based on weight and distance
    if (weight <= 2.0) {
        shippingCharges = (distance / 500.0) * RATE_2_KG_OR_LESS;
    } else if (weight <= 6.0) {
        shippingCharges = (distance / 500.0) * RATE_OVER_2_KG_6_KG;
    } else if (weight <= 10.0) {
        shippingCharges = (distance / 500.0) * RATE_OVER_6_KG_10_KG;
    } else {
        shippingCharges = (distance / 500.0) * RATE_OVER_10_KG_20_KG;
    }

    // Display the calculated shipping charges
    cout << fixed << setprecision(2);
    cout << "Shipping charges: $" << shippingCharges << endl;

    return 0;
}
