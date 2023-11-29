#include <iostream>
using namespace std;

int main() {
    int temperature;
    
    // Prompt the user to enter a temperature
    cout << "Enter a temperature in degrees Fahrenheit: ";
    cin >> temperature;
    
    // Check freezing and boiling points for each substance
    cout << "Substances that will freeze at " << temperature << "°F: ";
    if (temperature <= -173) {
        cout << "Ethyl alcohol ";
    }
    if (temperature <= -38) {
        cout << "Mercury ";
    }
    if (temperature <= -362) {
        cout << "Oxygen ";
    }
    if (temperature <= 32) {
        cout << "Water ";
    }
    cout << endl;
    
    cout << "Substances that will boil at " << temperature << "°F: ";
    if (temperature >= 172) {
        cout << "Ethyl alcohol ";
    }
    if (temperature >= 676) {
        cout << "Mercury ";
    }
    if (temperature >= -306) {
        cout << "Oxygen ";
    }
    if (temperature >= 212) {
        cout << "Water ";
    }
    cout << endl;

    return 0;
}
