#include <iostream>
#include <cstring> // for strlen function

using namespace std;

// Function to calculate the length of a C-string
int calculateStringLength(const char* str) {
    return strlen(str);
}

int main() {
    const int MAX_SIZE = 100; // Maximum size for the C-string

    char inputString[MAX_SIZE];

    // Get user input
    cout << "Enter a string: ";
    cin.getline(inputString, MAX_SIZE);

    // Calculate and display the length of the entered string
    int length = calculateStringLength(inputString);
    cout << "The length of the entered string is: " << length << " characters." << endl;

    return 0;
}
