#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;
const double SLICE_AREA = 14.125;

int main() {
    double diameter, radius, pizzaArea;
    int numSlices;

    cout << "Enter the diameter of the pizza in inches: ";
    cin >> diameter;

    // Calculate the radius
    radius = diameter / 2;

    // Calculate the area of the pizza
    pizzaArea = PI * pow(radius, 2);

    // Calculate the number of slices
    numSlices = static_cast<int>(pizzaArea / SLICE_AREA);

    cout << "The pizza can be divided into " << numSlices << " slices." << endl;

    return 0;
}
