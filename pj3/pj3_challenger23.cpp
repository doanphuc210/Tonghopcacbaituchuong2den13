#include <iostream>
using namespace std;

int main() {
    // Constants
    const int numShares = 1000;
    const double buyPricePerShare = 45.50;
    const double sellPricePerShare = 56.90;
    const double buyCommissionRate = 0.02; // 2%
    const double sellCommissionRate = 0.02; // 2%

    // Calculate the total cost for buying the stock
    double buyAmount = numShares * buyPricePerShare;
    double buyCommission = buyAmount * buyCommissionRate;

    // Calculate the total revenue from selling the stock
    double sellAmount = numShares * sellPricePerShare;
    double sellCommission = sellAmount * sellCommissionRate;

    // Calculate the profit (or loss) after paying commissions
    double profit = (sellAmount - sellCommission) - (buyAmount + buyCommission);

    // Display the results
    cout << "Amount paid for the stock: $" << buyAmount << endl;
    cout << "Commission paid for buying the stock: $" << buyCommission << endl;
    cout << "Amount sold the stock for: $" << sellAmount << endl;
    cout << "Commission paid for selling the stock: $" << sellCommission << endl;
    cout << "Profit (or loss): $" << profit << endl;

    return 0;
}
