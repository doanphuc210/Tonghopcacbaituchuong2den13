#include <iostream>

class FloatArray {
private:
    int size;
    float *numbers;

public:
    // Constructor
    FloatArray(int arraySize) : size(arraySize) {
        // Allocate memory for the array
        numbers = new float[size];
    }

    // Destructor
    ~FloatArray() {
        // Deallocate memory when the object is destroyed
        delete[] numbers;
    }

    // Store a number in the array
    void storeNumber(int index, float value) {
        if (index >= 0 && index < size) {
            numbers[index] = value;
        } else {
            std::cout << "Invalid index." << std::endl;
        }
    }

    // Retrieve a number from the array
    float retrieveNumber(int index) const {
        if (index >= 0 && index < size) {
            return numbers[index];
        } else {
            std::cout << "Invalid index." << std::endl;
            return 0.0; // Return a default value in case of an error
        }
    }

    // Return the highest value in the array
    float getHighest() const {
        float highest = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] > highest) {
                highest = numbers[i];
            }
        }
        return highest;
    }

    // Return the lowest value in the array
    float getLowest() const {
        float lowest = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] < lowest) {
                lowest = numbers[i];
            }
        }
        return lowest;
    }

    // Return the average of all numbers in the array
    float getAverage() const {
        float sum = 0.0;
        for (int i = 0; i < size; ++i) {
            sum += numbers[i];
        }
        return sum / size;
    }
};

int main() {
    // Create a FloatArray object with size 5
    FloatArray myArray(5);

    // Store some numbers in the array
    myArray.storeNumber(0, 3.5);
    myArray.storeNumber(1, 8.2);
    myArray.storeNumber(2, 6.7);
    myArray.storeNumber(3, 1.9);
    myArray.storeNumber(4, 5.4);

    // Demonstrate member functions
    std::cout << "Retrieve number at index 2: " << myArray.retrieveNumber(2) << std::endl;
    std::cout << "Highest value: " << myArray.getHighest() << std::endl;
    std::cout << "Lowest value: " << myArray.getLowest() << std::endl;
    std::cout << "Average value: " << myArray.getAverage() << std::endl;

    return 0;
}
