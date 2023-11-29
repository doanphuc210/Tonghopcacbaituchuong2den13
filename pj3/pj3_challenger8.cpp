#include <iostream>
using namespace std;

int main() {
    const double widgetWeight = 12.5;
    double palletWeightAlone, palletWeightWithWidgets;

    cout << "Enter the weight of the pallet by itself (in pounds): ";
    cin >> palletWeightAlone;

    cout << "Enter the weight of the pallet with widgets (in pounds): ";
    cin >> palletWeightWithWidgets;

    // Calculate the number of widgets on the pallet
    int numberOfWidgets = (palletWeightWithWidgets - palletWeightAlone) / widgetWeight;

    cout << "Number of widgets on the pallet: " << numberOfWidgets << endl;

    return 0;
}
