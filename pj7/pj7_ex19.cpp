#include <iostream>
using namespace std;

// Function prototypes
void doubleArray(int [], int);
void showValues(int [], int);

int main()
{
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};

    // Display the initial values.
    cout << "The array's values are:\n";
    showValues(set, ARRAY_SIZE);

    // Double the values in the array.
    doubleArray(set, ARRAY_SIZE);

    // Display the resulting values.
    cout << "After calling doubleArray, the values are:\n";
    showValues(set, ARRAY_SIZE);

    return 0;
}

// Definition of function doubleArray.
// This function accepts an array of integers and
// the array's size as its arguments. It doubles the value
// of each element in the array.
void doubleArray(int array[], int size)
{
    for (int index = 0; index < size; index++)
    {
        array[index] *= 2;
    }
}

// Definition of function showValues.
// This function accepts an array of integers and
// the array's size as its arguments. It displays the contents
// of the array.
void showValues(int array[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}
