#include <iostream>
#include <string>
using namespace std;

// Define the structure for division data
struct DivisionData
{
    string divisionName;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

// Function to input sales data for a division
void inputSalesData(DivisionData &division)
{
    cout << "Enter sales data for " << division.divisionName << " division:\n";

    // Input sales for each quarter
    cout << "First Quarter Sales: ";
    cin >> division.firstQuarterSales;

    cout << "Second Quarter Sales: ";
    cin >> division.secondQuarterSales;

    cout << "Third Quarter Sales: ";
    cin >> division.thirdQuarterSales;

    cout << "Fourth Quarter Sales: ";
    cin >> division.fourthQuarterSales;

    // Validate input for negative numbers
    if (division.firstQuarterSales < 0 || division.secondQuarterSales < 0 ||
        division.thirdQuarterSales < 0 || division.fourthQuarterSales < 0)
    {
        cout << "Sales figures cannot be negative. Please re-enter data.\n";
        inputSalesData(division); // Recursively call the function for re-entry
    }
}

// Function to calculate total and average sales for a division
void calculateTotalsAndAverage(DivisionData &division)
{
    // Calculate total annual sales
    division.totalAnnualSales = division.firstQuarterSales +
                                division.secondQuarterSales +
                                division.thirdQuarterSales +
                                division.fourthQuarterSales;

    // Calculate average quarterly sales
    division.averageQuarterlySales = division.totalAnnualSales / 4;
}

// Function to display division data
void displayDivisionData(const DivisionData &division)
{
    cout << "\nDivision: " << division.divisionName << "\n";
    cout << "Total Annual Sales: $" << division.totalAnnualSales << endl;
    cout << "Average Quarterly Sales: $" << division.averageQuarterlySales << endl;
}

int main()
{
    // Create structure variables for each division
    DivisionData eastDivision = {"East"};
    DivisionData westDivision = {"West"};
    DivisionData northDivision = {"North"};
    DivisionData southDivision = {"South"};

    // Input sales data for each division
    inputSalesData(eastDivision);
    inputSalesData(westDivision);
    inputSalesData(northDivision);
    inputSalesData(southDivision);

    // Calculate totals and averages for each division
    calculateTotalsAndAverage(eastDivision);
    calculateTotalsAndAverage(westDivision);
    calculateTotalsAndAverage(northDivision);
    calculateTotalsAndAverage(southDivision);

    // Display division data
    displayDivisionData(eastDivision);
    displayDivisionData(westDivision);
    displayDivisionData(northDivision);
    displayDivisionData(southDivision);

    return 0;
}
