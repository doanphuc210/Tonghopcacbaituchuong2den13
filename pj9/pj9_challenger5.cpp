#include <iostream>

int main() {
    int numDonations;

    std::cout << "Enter the number of donations: ";
    std::cin >> numDonations;

    // Dynamically allocate an array for donations
    double* donations = new double[numDonations];

    // Input donation values
    for (int i = 0; i < numDonations; i++) {
        std::cout << "Enter donation #" << i + 1 << ": ";
        std::cin >> donations[i];
    }

    // Display the donation values
    std::cout << "Donation values: ";
    for (int i = 0; i < numDonations; i++) {
        std::cout << donations[i] << " ";
    }

    // Don't forget to free the dynamically allocated memory
    delete[] donations;

    return 0;
}
