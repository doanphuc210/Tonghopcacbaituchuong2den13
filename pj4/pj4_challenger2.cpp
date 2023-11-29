#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to enter a number within the specified range
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    // Check if the input is within the valid range
    if (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10." << endl;
    } else {
        // Convert the number to its Roman numeral equivalent using a switch statement
        cout << "Roman numeral equivalent: ";
        switch (number) {
            case 1:
                cout << "I";
                break;
            case 2:
                cout << "II";
                break;
            case 3:
                cout << "III";
                break;
            case 4:
                cout << "IV";
                break;
            case 5:
                cout << "V";
                break;
            case 6:
                cout << "VI";
                break;
            case 7:
                cout << "VII";
                break;
            case 8:
                cout << "VIII";
                break;
            case 9:
                cout << "IX";
                break;
            case 10:
                cout << "X";
                break;
        }
        cout << endl;
    }

    return 0;
}
