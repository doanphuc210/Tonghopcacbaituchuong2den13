#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;
const double SLICE_AREA = 14.125;

int main() {
    int numPeople;
    double diameter, radius, pizzaArea;
    int numSlices, numPizzas;

    cout << "Enter the number of people at the party: ";
    cin >> numPeople;

    cout << "Enter the diameter of the pizzas in inches: ";
    cin >> diameter;

    // Calculate the radius
    radius = diameter / 2;

    // Calculate the area of a single pizza
    pizzaArea = PI * pow(radius, 2);

    // Calculate the number of slices in one pizza
    numSlices = static_cast<int>(pizzaArea / SLICE_AREA);

    // Calculate the total number of slices needed
    int totalSlicesNeeded = numPeople * 4;

    // Calculate the number of pizzas needed
    numPizzas = (totalSlicesNeeded + numSlices - 1) / numSlices;  // Round up

    cout << "You need to buy " << numPizzas << " pizzas for the party." << endl;

    return 0;
}
