#include <iostream>

// Function Prototypes
void first();
void second();

int main()
{
    std::cout << "I am starting in function main.\n";
    first(); // Call function first
    second(); // Call function second
    std::cout << "Back in function main again.\n";
    return 0;
}

//*************************************
// Definition of function first. *
// This function displays a message. *
//*************************************
void first()
{
    std::cout << "I am now inside the function first.\n";
}

//*************************************
// Definition of function second. *
// This function displays a message. *
//*************************************
void second()
{
    std::cout << "I am now inside the function second.\n";
}
