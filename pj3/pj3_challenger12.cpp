#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Ask the user to enter a Celsius temperature
    cout << "Enter a temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display the result
    cout << "The equivalent temperature in Fahrenheit is: " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}
