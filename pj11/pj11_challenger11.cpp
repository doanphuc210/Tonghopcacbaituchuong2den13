#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Structure to hold monthly budget information
struct MonthlyBudget
{
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

// Function prototypes
void enterExpenses(MonthlyBudget &budget);
void displayBudgetReport(const MonthlyBudget &budget);

int main()
{
    MonthlyBudget monthlyBudget;

    // Ask the user to enter expenses for each category
    enterExpenses(monthlyBudget);

    // Display the budget report
    displayBudgetReport(monthlyBudget);

    return 0;
}

void enterExpenses(MonthlyBudget &budget)
{
    cout << "Enter the amounts spent in each budget category for the month:\n";

    cout << "Housing: ";
    cin >> budget.housing;

    cout << "Utilities: ";
    cin >> budget.utilities;

    cout << "Household Expenses: ";
    cin >> budget.householdExpenses;

    cout << "Transportation: ";
    cin >> budget.transportation;

    cout << "Food: ";
    cin >> budget.food;

    cout << "Medical: ";
    cin >> budget.medical;

    cout << "Insurance: ";
    cin >> budget.insurance;

    cout << "Entertainment: ";
    cin >> budget.entertainment;

    cout << "Clothing: ";
    cin >> budget.clothing;

    cout << "Miscellaneous: ";
    cin >> budget.miscellaneous;
}

void displayBudgetReport(const MonthlyBudget &budget)
{
    // Define the budgeted amounts
    const double budgetedHousing = 500.00;
    const double budgetedUtilities = 150.00;
    const double budgetedHouseholdExpenses = 65.00;
    const double budgetedTransportation = 50.00;
    const double budgetedFood = 250.00;
    const double budgetedMedical = 30.00;
    const double budgetedInsurance = 100.00;
    const double budgetedEntertainment = 150.00;
    const double budgetedClothing = 75.00;
    const double budgetedMiscellaneous = 50.00;

    // Calculate differences for each category
    double housingDifference = budget.housing - budgetedHousing;
    double utilitiesDifference = budget.utilities - budgetedUtilities;
    double householdExpensesDifference = budget.householdExpenses - budgetedHouseholdExpenses;
    double transportationDifference = budget.transportation - budgetedTransportation;
    double foodDifference = budget.food - budgetedFood;
    double medicalDifference = budget.medical - budgetedMedical;
    double insuranceDifference = budget.insurance - budgetedInsurance;
    double entertainmentDifference = budget.entertainment - budgetedEntertainment;
    double clothingDifference = budget.clothing - budgetedClothing;
    double miscellaneousDifference = budget.miscellaneous - budgetedMiscellaneous;

    // Calculate total difference
    double totalDifference = housingDifference + utilitiesDifference + householdExpensesDifference +
                            transportationDifference + foodDifference + medicalDifference +
                            insuranceDifference + entertainmentDifference + clothingDifference +
                            miscellaneousDifference;

    // Display the budget report
    cout << fixed << showpoint << setprecision(2);
    cout << "\nBudget Report\n";
    cout << "--------------------------------------\n";
    cout << setw(20) << "Category" << setw(20) << "Budgeted" << setw(20) << "Actual" << setw(20) << "Difference\n";
    cout << "--------------------------------------\n";
    cout << setw(20) << "Housing" << setw(20) << budgetedHousing << setw(20) << budget.housing << setw(20) << housingDifference << endl;
    cout << setw(20) << "Utilities" << setw(20) << budgetedUtilities << setw(20) << budget.utilities << setw(20) << utilitiesDifference << endl;
    cout << setw(20) << "Household Expenses" << setw(20) << budgetedHouseholdExpenses << setw(20) << budget.householdExpenses << setw(20) << householdExpensesDifference << endl;
    cout << setw(20) << "Transportation" << setw(20) << budgetedTransportation << setw(20) << budget.transportation << setw(20) << transportationDifference << endl;
    cout << setw(20) << "Food" << setw(20) << budgetedFood << setw(20) << budget.food << setw(20) << foodDifference << endl;
    cout << setw(20) << "Medical" << setw(20) << budgetedMedical << setw(20) << budget.medical << setw(20) << medicalDifference << endl;
    cout << setw(20) << "Insurance" << setw(20) << budgetedInsurance << setw(20) << budget.insurance << setw(20) << insuranceDifference << endl;
    cout <<
