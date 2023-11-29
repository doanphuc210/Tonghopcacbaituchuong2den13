#include <iostream>
using namespace std;

int main() {
    cout << "Celsius to Fahrenheit Conversion Table\n";
    cout << "---------------------------------------\n";
    cout << "Celsius\tFahrenheit\n";

    for (int celsius = 0; celsius <= 20; celsius++) {
        double fahrenheit = (static_cast<double>(celsius) * 9 / 5) + 32;
        cout << celsius << "\t" << fahrenheit << endl;
    }

    return 0;
}
