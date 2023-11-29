#include <iostream>
using namespace std;

int main() {
    double replacementCost;
    
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate the minimum insurance amount (80% of the replacement cost)
    double minimumInsurance = 0.8 * replacementCost;

    cout << "You should buy at least $" << minimumInsurance << " of insurance for the property." << endl;

    return 0;
}
