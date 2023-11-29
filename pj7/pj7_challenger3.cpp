#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_SALSA_TYPES = 5;
    string salsaNames[] = { "mild", "medium", "sweet", "hot", "zesty" };
    int jarsSold[NUM_SALSA_TYPES];

    // Initialize sales data
    for (int i = 0; i < NUM_SALSA_TYPES; i++) {
        do {
            cout << "Enter the number of jars sold for " << salsaNames[i] << ": ";
            cin >> jarsSold[i];
            if (jarsSold[i] < 0) {
                cout << "Please enter a non-negative value." << endl;
            }
        } while (jarsSold[i] < 0);
    }

    // Calculate total sales
    int totalSales = 0;
    for (int i = 0; i < NUM_SALSA_TYPES; i++) {
        totalSales += jarsSold[i];
    }

    // Find highest and lowest selling products
    int highestSales = jarsSold[0];
    int lowestSales = jarsSold[0];
    string highestSellingSalsa = salsaNames[0];
    string lowestSellingSalsa = salsaNames[0];

    for (int i = 1; i < NUM_SALSA_TYPES; i++) {
        if (jarsSold[i] > highestSales) {
            highestSales = jarsSold[i];
            highestSellingSalsa = salsaNames[i];
        }
        if (jarsSold[i] < lowestSales) {
            lowestSales = jarsSold[i];
            lowestSellingSalsa = salsaNames[i];
        }
    }

    // Display the sales report
    cout << "\nSales Report:\n";
    for (int i = 0; i < NUM_SALSA_TYPES; i++) {
        cout << salsaNames[i] << " salsa: " << jarsSold[i] << " jars\n";
    }
    cout << "Total Sales: " << totalSales << " jars\n";
    cout << "Highest Selling Salsa: " << highestSellingSalsa << " (" << highestSales << " jars)\n";
    cout << "Lowest Selling Salsa: " << lowestSellingSalsa << " (" << lowestSales << " jars)\n";

    return 0;
}
