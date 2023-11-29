#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getInput(int &numSpoolsOrdered, int &numSpoolsInStock, bool &specialCharges, double &chargesPerSpool);
void displayOrderStatus(int numSpoolsOrdered, int numSpoolsInStock, bool specialCharges, double chargesPerSpool = 10.00);

int main() {
    int numSpoolsOrdered, numSpoolsInStock;
    bool specialCharges;
    double chargesPerSpool;

    getInput(numSpoolsOrdered, numSpoolsInStock, specialCharges, chargesPerSpool);
    displayOrderStatus(numSpoolsOrdered, numSpoolsInStock, specialCharges, chargesPerSpool);

    return 0;
}

// Function to get input from the user
void getInput(int &numSpoolsOrdered, int &numSpoolsInStock, bool &specialCharges, double &chargesPerSpool) {
    do {
        cout << "Enter the number of spools ordered (must be at least 1): ";
        cin >> numSpoolsOrdered;
    } while (numSpoolsOrdered < 1);

    do {
        cout << "Enter the number of spools in stock (must be at least 0): ";
        cin >> numSpoolsInStock;
    } while (numSpoolsInStock < 0);

    cout << "Are there special shipping and handling charges (1 for yes, 0 for no): ";
    cin >> specialCharges;

    if (specialCharges) {
        do {
            cout << "Enter the special charges per spool (must be at least 0): $";
            cin >> chargesPerSpool;
        } while (chargesPerSpool < 0);
    }
}

// Function to display the order status
void displayOrderStatus(int numSpoolsOrdered, int numSpoolsInStock, bool specialCharges, double chargesPerSpool) {
    int readyToShip, onBackorder;
    double subtotal, shippingAndHandling, totalOrder;

    if (numSpoolsOrdered > numSpoolsInStock) {
        onBackorder = numSpoolsOrdered - numSpoolsInStock;
        readyToShip = numSpoolsInStock;
    } else {
        onBackorder = 0;
        readyToShip = numSpoolsOrdered;
    }

    subtotal = readyToShip * 100.0;
    shippingAndHandling = readyToShip * chargesPerSpool;
    totalOrder = subtotal + shippingAndHandling;

    cout << "Number of spools ready to ship: " << readyToShip << endl;
    cout << "Number of spools on backorder: " << onBackorder << endl;
    cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Total shipping and handling charges: $" << fixed << setprecision(2) << shippingAndHandling << endl;
    cout << "Total of the order ready to ship: $" << fixed << setprecision(2) << totalOrder << endl;
}
