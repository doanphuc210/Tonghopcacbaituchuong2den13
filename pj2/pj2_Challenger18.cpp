#include <iostream>
using namespace std;

int main() {
    int totalCustomers = 16500;  // Total number of surveyed customers
    double energyDrinkPercent = 0.15;  // Percentage of customers purchasing energy drinks
    double citrusFlavoredPercent = 0.58;  // Percentage of energy drink customers preferring citrus flavor

    // Calculate the approximate number of customers purchasing energy drinks
    int energyDrinkCustomers = totalCustomers * energyDrinkPercent;

    // Calculate the approximate number of customers preferring citrus-flavored energy drinks
    int citrusFlavoredCustomers = energyDrinkCustomers * citrusFlavoredPercent;

    cout << "Approximate number of customers purchasing energy drinks per week: " << energyDrinkCustomers << endl;
    cout << "Approximate number of customers preferring citrus-flavored energy drinks: " << citrusFlavoredCustomers << endl;

    return 0;
}
