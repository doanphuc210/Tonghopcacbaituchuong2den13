#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    double usDollars, yenAmount, euroAmount;

    cout << "Enter an amount in U.S. dollars: $";
    cin >> usDollars;

    // Convert to Japanese yen and euros
    yenAmount = usDollars * YEN_PER_DOLLAR;
    euroAmount = usDollars * EUROS_PER_DOLLAR;

    // Display the converted amounts with two decimal places
    cout << fixed << setprecision(2);
    cout << "$" << usDollars << " is equivalent to " << yenAmount << " Japanese yen." << endl;
    cout << "$" << usDollars << " is equivalent to " << euroAmount << " euros." << endl;

    return 0;
}
