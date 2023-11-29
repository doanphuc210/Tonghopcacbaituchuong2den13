#include <iostream>
#include <cctype>

using namespace std;

// Function prototype
bool isValidCustomerNumber(const char[], int);

int main() {
    const int SIZE = 8; // Array size
    char customer[SIZE]; // To hold a customer number

    // Get the customer number.
    cout << "Enter a customer number in the form ";
    cout << "LLLNNNN\n";
    cout << "(LLL = letters and NNNN = numbers): ";
    cin.getline(customer, SIZE);

    // Determine whether it is valid.
    if (isValidCustomerNumber(customer, SIZE))
        cout << "That's a valid customer number.\n";
    else {
        cout << "That is not the proper format of the ";
        cout << "customer number.\nHere is an example:\n";
        cout << " ABC1234\n";
    }

    return 0;
}

// Definition of function isValidCustomerNumber.
bool isValidCustomerNumber(const char custNum[], int size) {
    // Test the first three characters for alphabetic letters.
    for (int count = 0; count < 3; count++) {
        if (!isalpha(custNum[count]))
            return false;
    }

    // Test the remaining characters for numeric digits.
    for (int count = 3; count < size - 1; count++) {
        if (!isdigit(custNum[count]))
            return false;
    }

    return true;
}
