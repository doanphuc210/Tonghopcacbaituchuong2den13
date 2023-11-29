#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char input;

    // Prompt the user to enter a character
    cout << "Enter any character: ";
    cin.get(input);
    cout << "The character you entered is: " << input << endl;

    // Check and display information about the entered character
    if (isalpha(input)) {
        cout << "That's an alphabetic character." << endl;
        if (islower(input)) {
            cout << "The letter you entered is lowercase." << endl;
        } else if (isupper(input)) {
            cout << "The letter you entered is uppercase." << endl;
        }
    } else if (isdigit(input)) {
        cout << "That's a numeric digit." << endl;
    } else if (isspace(input)) {
        cout << "That's a whitespace character." << endl;
    } else if (ispunct(input)) {
        cout << "That's a punctuation character." << endl;
    } else {
        cout << "The character doesn't fall into the categories checked." << endl;
    }

    return 0;
}
