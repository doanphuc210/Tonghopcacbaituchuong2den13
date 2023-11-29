#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    string line;

    // Get the file name from the user
    cout << "Enter the name of the file: ";
    getline(cin, fileName);

    // Open the file
    ifstream inputFile(fileName);

    // Check if the file is open
    if (inputFile.is_open()) {
        // Display the first 10 lines (head) of the file
        for (int i = 0; i < 10 && getline(inputFile, line); ++i) {
            cout << line << endl;
        }

        // Close the file
        inputFile.close();
    } else {
        cout << "Error: Unable to open the file." << endl;
    }

    return 0;
}
