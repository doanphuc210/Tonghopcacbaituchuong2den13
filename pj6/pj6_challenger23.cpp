#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    if (number <= 3) {
        return true;
    }

    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ofstream outputFile("prime_numbers.txt");
    if (!outputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            outputFile << i << " is prime." << endl;
        }
    }

    outputFile.close();
    cout << "Prime numbers from 1 to 100 have been written to prime_numbers.txt." << endl;

    return 0;
}
