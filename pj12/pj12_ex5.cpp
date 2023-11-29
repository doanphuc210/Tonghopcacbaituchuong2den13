#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input;         // To hold file input
    ifstream nameFile;    // File stream object for input

    // Open the file in input mode.
    nameFile.open("murphy.txt");

    // If the file was successfully opened, continue.
    if (nameFile.is_open()) {
        // Read an item from the file.
        while (getline(nameFile, input)) {
            // Display the last item read.
            cout << input << endl;
        }

        // Close the file.
        nameFile.close();
    } else {
        cout << "ERROR: Cannot open file.\n";
    }

    return 0;
}
