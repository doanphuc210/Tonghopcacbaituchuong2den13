#include <iostream>
#include <algorithm>

int main() {
    int numDonations;

    std::cout << "Enter the number of donations: ";
    std::cin >> numDonations;

    double* arrptr = new double[numDonations];

    // Input donation values
    for (int i = 0; i < numDonations; i++) {
        std::cout << "Enter donation #" << i + 1 << ": ";
        std::cin >> arrptr[i];
    }

    // Sort the array in descending order
    std::sort(arrptr, arrptr + numDonations, std::greater<double>());

    // Display the sorted array
    std::cout << "Donations in descending order: ";
    for (int i = 0; i < numDonations; i++) {
        std::cout << arrptr[i] << " ";
    }

    delete[] arrptr; // Deallocate the dynamically allocated memory

    return 0;
}
