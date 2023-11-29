#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const string fileName = "People.txt";
    ifstream inputFile(fileName);

    if (!inputFile) {
        cerr << "Failed to open file: " << fileName << endl;
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    int year = 1900;
    string line;
    
    while (getline(inputFile, line)) {
        int population = stoi(line);
        int numAsterisks = population / 1000;

        cout << year << " ";
        for (int i = 0; i < numAsterisks; i++) {
            cout << '*';
        }
        cout << endl;

        year += 20;
    }

    inputFile.close();
    return 0;
}
