#include <iostream>
#include <string>
using namespace std;

int main() {
    string vaulterName;
    double vault1, vault2, vault3;
    string date1, date2, date3;

    // Ask for the name of the pole vaulter
    cout << "Enter the name of the pole vaulter: ";
    getline(cin, vaulterName);

    // Ask for the details of the three best vaults
    cout << "Enter details of the first vault (date and height in meters):\n";
    cin >> date1 >> vault1;
    
    cout << "Enter details of the second vault (date and height in meters):\n";
    cin >> date2 >> vault2;
    
    cout << "Enter details of the third vault (date and height in meters):\n";
    cin >> date3 >> vault3;

    // Input validation for vault heights
    if (vault1 < 2.0 || vault1 > 5.0 || vault2 < 2.0 || vault2 > 5.0 || vault3 < 2.0 || vault3 > 5.0) {
        cout << "Error: Vault heights must be between 2.0 and 5.0 meters." << endl;
        return 1;
    }

    // Sort the vaults in descending order
    if (vault1 < vault2) {
        swap(vault1, vault2);
        swap(date1, date2);
    }
    if (vault2 < vault3) {
        swap(vault2, vault3);
        swap(date2, date3);
    }
    if (vault1 < vault2) {
        swap(vault1, vault2);
        swap(date1, date2);
    }

    // Display the vaults in order of height
    cout << "Vault Results for " << vaulterName << " (in descending order of height):\n";
    cout << "1. Date: " << date1 << " - Height: " << vault1 << " meters\n";
    cout << "2. Date: " << date2 << " - Height: " << vault2 << " meters\n";
    cout << "3. Date: " << date3 << " - Height: " << vault3 << " meters\n";

    return 0;
}
