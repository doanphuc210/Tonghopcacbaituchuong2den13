#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
    cout << "Fahrenheit  Celsius" << endl;
    cout << "-------------------" << endl;

    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        double celsiusTemp = celsius(fahrenheit);
        cout << setw(9) << fahrenheit << setw(10) << celsiusTemp << endl;
    }

    return 0;
}
