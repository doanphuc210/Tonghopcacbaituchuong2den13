#include <iostream>

// Function Prototype
void displayValue(int);

int main()
{
    std::cout << "I am passing 5 to displayValue.\n";
    displayValue(5); // Call displayValue with argument 5
    std::cout << "Now I am back in main.\n";
    return 0;
}

//*************************************
// Definition of function displayValue. *
// It uses an integer parameter whose value is displayed. *
//*************************************
void displayValue(int num)
{
    std::cout << "The value is " << num << std::endl;
}
