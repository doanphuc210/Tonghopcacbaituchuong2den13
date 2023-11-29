#include <iostream>

//*****************************************
// Definition of function displayMessage *
// This function displays a greeting. *
//*****************************************
void displayMessage()
{
    std::cout << "Hello from the function displayMessage.\n";
}

//*****************************************
// Function main *
//*****************************************
int main()
{
    std::cout << "Hello from main.\n";
    displayMessage();
    std::cout << "Back in function main again.\n";
    return 0;
}
