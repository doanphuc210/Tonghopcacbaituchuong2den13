#include <iostream>
#include <cmath> // for sin, cos, and tan functions
#include <iomanip> // for formatting output

using namespace std;

int main() {
    double angleRadians;
    
    cout << "Enter an angle in radians: ";
    cin >> angleRadians;

    // Calculate sine, cosine, and tangent
    double sine = sin(angleRadians);
    double cosine = cos(angleRadians);
    double tangent = tan(angleRadians);

    // Display the results with four decimal places of precision
    cout << fixed << setprecision(4);
    cout << "Sine: " << sine << endl;
    cout << "Cosine: " << cosine << endl;
    cout << "Tangent: " << tangent << endl;

    return 0;
}
