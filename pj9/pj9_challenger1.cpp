#include <iostream>

int* allocateIntArray(int numElements) {
    // Check if the requested number of elements is valid
    if (numElements <= 0) {
        std::cerr << "Invalid number of elements requested." << std::endl;
        return nullptr; // Return nullptr for an invalid request
    }

    // Dynamically allocate an integer array of the specified size
    int* dynamicArray = new int[numElements];

    // Check if memory allocation was successful
    if (!dynamicArray) {
        std::cerr << "Memory allocation failed." << std::endl;
        return nullptr; // Return nullptr if allocation failed
    }

    // Return a pointer to the allocated array
    return dynamicArray;
}

int main() {
    int numElements;
    std::cout << "Enter the number of elements for the array: ";
    std::cin >> numElements;

    // Call the function to allocate the integer array
    int* myArray = allocateIntArray(numElements);

    if (myArray) {
        // Allocation was successful
        std::cout << "Integer array of size " << numElements << " allocated." << std::endl;

        // Don't forget to deallocate the memory when done
        delete[] myArray;
    }

    return 0;
}
