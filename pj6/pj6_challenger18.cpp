#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double calculateGallonsOfPaint(double squareFeet);
double calculateLaborHours(double squareFeet);
double calculatePaintCost(double gallons, double pricePerGallon);
double calculateLaborCharges(double hoursWorked);
double calculateTotalCost(double paintCost, double laborCharges);

int main() {
    int numRooms;
    double pricePerGallon;
    double totalPaintCost = 0;
    double totalLaborHours = 0;

    // Input validation: Number of rooms must be at least 1.
    do {
        cout << "Enter the number of rooms to be painted: ";
        cin >> numRooms;
    } while (numRooms < 1);

    // Input validation: Price of paint must be at least $10.00.
    do {
        cout << "Enter the price of paint per gallon: $";
        cin >> pricePerGallon;
    } while (pricePerGallon < 10.0);

    // Process each room
    for (int room = 1; room <= numRooms; room++) {
        double squareFeet;

        // Input validation: Square footage must not be negative.
        do {
            cout << "Enter the square footage of room " << room << ": ";
            cin >> squareFeet;
        } while (squareFeet < 0);

        // Calculate gallons of paint and labor hours for this room.
        double gallonsOfPaint = calculateGallonsOfPaint(squareFeet);
        double laborHours = calculateLaborHours(squareFeet);

        // Update total paint cost and labor hours.
        totalPaintCost += calculatePaintCost(gallonsOfPaint, pricePerGallon);
        totalLaborHours += laborHours;
    }

    // Calculate labor charges and total cost of the paint job.
    double laborCharges = calculateLaborCharges(totalLaborHours);
    double totalCost = calculateTotalCost(totalPaintCost, laborCharges);

    // Display the results
    cout << fixed << showpoint << setprecision(2);
    cout << "Number of gallons of paint required: " << totalPaintCost << " gallons" << endl;
    cout << "Hours of labor required: " << totalLaborHours << " hours" << endl;
    cout << "Cost of the paint: $" << totalPaintCost << endl;
    cout << "Labor charges: $" << laborCharges << endl;
    cout << "Total cost of the paint job: $" << totalCost << endl;

    return 0;
}

// Function to calculate gallons of paint required
double calculateGallonsOfPaint(double squareFeet) {
    return squareFeet / 110.0;
}

// Function to calculate labor hours required
double calculateLaborHours(double squareFeet) {
    return squareFeet / 110.0 * 8.0;
}

// Function to calculate the cost of the paint
double calculatePaintCost(double gallons, double pricePerGallon) {
    return gallons * pricePerGallon;
}

// Function to calculate labor charges
double calculateLaborCharges(double hoursWorked) {
    const double laborRate = 25.0;
    return hoursWorked * laborRate;
}

// Function to calculate total cost of the paint job
double calculateTotalCost(double paintCost, double laborCharges) {
    return paintCost + laborCharges;
}
