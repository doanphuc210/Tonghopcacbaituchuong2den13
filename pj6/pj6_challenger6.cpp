#include <iostream>
using namespace std;

// Function to calculate kinetic energy
double kineticEnergy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}

int main() {
    double mass, velocity;

    cout << "Enter the mass of the object (in kilograms): ";
    cin >> mass;

    cout << "Enter the velocity of the object (in meters per second): ";
    cin >> velocity;

    double energy = kineticEnergy(mass, velocity);

    cout << "The kinetic energy of the object is: " << energy << " joules" << endl;

    return 0;
}
