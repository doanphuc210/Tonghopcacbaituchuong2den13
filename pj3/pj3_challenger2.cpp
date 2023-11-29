#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Define the ticket prices for each class of seats
    double classA_price = 15.0;
    double classB_price = 12.0;
    double classC_price = 9.0;

    // Initialize variables to store the number of tickets sold for each class
    int numClassA, numClassB, numClassC;

    // Prompt the user to enter the number of tickets sold for each class
    cout << "Enter the number of Class A tickets sold: ";
    cin >> numClassA;

    cout << "Enter the number of Class B tickets sold: ";
    cin >> numClassB;

    cout << "Enter the number of Class C tickets sold: ";
    cin >> numClassC;

    // Calculate the total income generated from ticket sales
    double totalIncome = (numClassA * classA_price) + (numClassB * classB_price) + (numClassC * classC_price);

    // Display the income in fixed-point notation with two decimal places
    cout << fixed << setprecision(2);
    cout << "Total income generated from ticket sales: $" << totalIncome << endl;

    return 0;
}
