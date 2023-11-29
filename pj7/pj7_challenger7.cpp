#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char* filename = "numbers.txt";
    ifstream inputFile(filename);

    if (!inputFile) {
        cerr << "Failed to open the file: " << filename << endl;
        return 1;
    }

    double number;
    double lowest, highest;
    double total = 0;
    int count = 0;

    // Read the first number to initialize lowest and highest
    if (inputFile >> number) {
        lowest = highest = number;
        total += number;
        count++;

        while (inputFile >> number) {
            total += number;
            count++;
            if (number < lowest) {
                lowest = number;
            }
            if (number > highest) {
                highest = number;
            }
        }

        double average = total / count;

        cout << "Lowest number: " << lowest << endl;
        cout << "Highest number: " << highest << endl;
        cout << "Total of the numbers: " << total << endl;
        cout << "Average of the numbers: " << average << endl;
    } else {
        cout << "The file is empty." << endl;
    }

    inputFile.close();
    return 0;
}
