#include <iostream>
using namespace std;

int main() {
    const int numStores = 5;
    int sales[numStores];

    // Input today's sales for each store.
    for (int i = 0; i < numStores; i++) {
        cout << "Enter today's sales for store " << i + 1 << ": ";
        cin >> sales[i];
    }

    cout << "\nSALES BAR CHART" << endl;
    cout << "(Each * = $100)\n";

    // Display the bar graph for each store's sales.
    for (int i = 0; i < numStores; i++) {
        cout << "Store " << i + 1 << ": ";
        for (int j = 0; j < sales[i] / 100; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
